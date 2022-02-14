
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tps65910 {int dummy; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct tps65910* FUNC_0 (int *) ;
 TYPE_1__* VAR_3 ;
 int FUNC_1 (struct tps65910*,int ,int ) ;
 scalar_t__ FUNC_2 (struct tps65910*,int ,int ) ;

__attribute__((used)) static void FUNC_3(void)
{
 struct tps65910 *VAR_4;

 VAR_4 = FUNC_0(&VAR_3->dev);

 if (FUNC_2(VAR_4, VAR_2,
   VAR_1) < 0)
  return;

 FUNC_1(VAR_4, VAR_2,
   VAR_0);
}
