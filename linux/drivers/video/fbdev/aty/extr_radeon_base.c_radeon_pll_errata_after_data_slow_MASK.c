
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct radeonfb_info {int errata; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;
 int VAR_4 ;
 int FUNC_2 (struct radeonfb_info*,int) ;

void FUNC_3(struct radeonfb_info *VAR_5)
{
 if (VAR_5->errata & VAR_0) {

  FUNC_2(VAR_5, 5);
 }
 if (VAR_5->errata & VAR_1) {
  u32 VAR_6, VAR_7;
  VAR_6 = FUNC_0(VAR_3);
  VAR_7 = VAR_6 & ~(0x3f | VAR_4);
  FUNC_1(VAR_3, VAR_7);
  VAR_7 = FUNC_0(VAR_2);
  FUNC_1(VAR_3, VAR_6);
 }
}
