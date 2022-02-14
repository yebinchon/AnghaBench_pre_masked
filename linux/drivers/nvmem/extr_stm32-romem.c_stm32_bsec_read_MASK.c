
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_2__ {int size; struct device* dev; } ;
struct stm32_romem_priv {scalar_t__ base; TYPE_1__ cfg; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct device*,char*,int,int) ;
 int FUNC_1 (int *,int *,int) ;
 int FUNC_2 (size_t,size_t) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (unsigned int,int) ;
 int FUNC_5 (size_t,int) ;
 int FUNC_6 (int ,int,int ,int*) ;

__attribute__((used)) static int FUNC_7(void *VAR_4, unsigned int VAR_5, void *VAR_6,
      size_t VAR_7)
{
 struct stm32_romem_priv *VAR_8 = VAR_4;
 struct device *VAR_9 = VAR_8->cfg.dev;
 u32 VAR_10, VAR_11, VAR_12;
 u8 *VAR_13 = VAR_6, *VAR_14 = (u8 *)&VAR_12;
 int VAR_15, VAR_16 = 0, VAR_17, VAR_18, VAR_19;


 VAR_10 = FUNC_4(VAR_5, 4);
 VAR_18 = VAR_5 & 0x3;
 VAR_11 = FUNC_5(VAR_7 + VAR_18, 4);

 if (VAR_10 + VAR_11 > VAR_8->cfg.size)
  return -VAR_0;

 for (VAR_15 = VAR_10; (VAR_15 < VAR_10 + VAR_11); VAR_15 += 4) {
  u32 VAR_20 = VAR_15 >> 2;

  if (VAR_20 < VAR_2) {

   VAR_12 = FUNC_3(
    VAR_8->base + VAR_1 + VAR_15);
  } else {
   VAR_17 = FUNC_6(VAR_3, VAR_20, 0,
          &VAR_12);
   if (VAR_17) {
    FUNC_0(VAR_9, "Can't read data%d (%d)\n", VAR_20,
     VAR_17);
    return VAR_17;
   }
  }

  if (VAR_18)
   VAR_19 = FUNC_2(VAR_7, (size_t)(4 - VAR_18));
  else
   VAR_19 = FUNC_2(VAR_7, (size_t)4);
  FUNC_1(&VAR_13[VAR_16], &VAR_14[VAR_18], VAR_19);
  VAR_7 -= VAR_19;
  VAR_16 += VAR_19;
  VAR_18 = 0;
 }

 return 0;
}
