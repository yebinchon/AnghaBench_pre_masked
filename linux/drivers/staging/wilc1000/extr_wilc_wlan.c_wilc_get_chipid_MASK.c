
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct wilc {TYPE_1__* hif_func; } ;
struct TYPE_2__ {int (* hif_read_reg ) (struct wilc*,int,int*) ;} ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct wilc*,int,int*) ;
 int FUNC_2 (struct wilc*,int,int*) ;

u32 FUNC_3(struct wilc *VAR_0, bool VAR_1)
{
 static u32 VAR_2;
 u32 VAR_3 = 0;
 u32 VAR_4 = 0;

 if (VAR_2 == 0 || VAR_1) {
  VAR_0->hif_func->hif_read_reg(VAR_0, 0x1000, &VAR_3);
  VAR_0->hif_func->hif_read_reg(VAR_0, 0x13f4, &VAR_4);
  if (!FUNC_0(VAR_3)) {
   VAR_2 = 0;
   return VAR_2;
  }
  if (VAR_3 == 0x1002a0) {
   if (VAR_4 != 0x1)
    VAR_3 = 0x1002a1;
  } else if (VAR_3 == 0x1002b0) {
   if (VAR_4 == 0x4)
    VAR_3 = 0x1002b1;
   else if (VAR_4 != 0x3)
    VAR_3 = 0x1002b2;
  }

  VAR_2 = VAR_3;
 }
 return VAR_2;
}
