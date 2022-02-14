
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {struct device* dev; } ;
struct stm32_romem_priv {TYPE_1__ cfg; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct device*,char*,int,int) ;
 int FUNC_1 (int ,int,int ,int *) ;

__attribute__((used)) static int FUNC_2(void *VAR_2, unsigned int VAR_3, void *VAR_4,
       size_t VAR_5)
{
 struct stm32_romem_priv *VAR_6 = VAR_2;
 struct device *VAR_7 = VAR_6->cfg.dev;
 u32 *VAR_8 = VAR_4;
 int VAR_9, VAR_10;


 if ((VAR_5 % 4) || (VAR_3 % 4))
  return -VAR_0;

 for (VAR_10 = VAR_3; VAR_10 < VAR_3 + VAR_5; VAR_10 += 4) {
  VAR_9 = FUNC_1(VAR_1, VAR_10 >> 2, *VAR_8++,
         ((void*)0));
  if (VAR_9) {
   FUNC_0(VAR_7, "Can't write data%d (%d)\n", VAR_10 >> 2, VAR_9);
   return VAR_9;
  }
 }

 return 0;
}
