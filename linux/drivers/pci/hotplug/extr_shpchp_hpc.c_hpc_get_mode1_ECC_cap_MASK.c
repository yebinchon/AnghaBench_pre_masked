
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct slot {struct controller* ctrl; } ;
struct controller {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct controller*,char*,int) ;
 int FUNC_1 (struct controller*,int ) ;
 int FUNC_2 (struct controller*,int ) ;

__attribute__((used)) static int FUNC_3(struct slot *VAR_2, u8 *VAR_3)
{
 int VAR_4 = 0;
 struct controller *VAR_5 = VAR_2->ctrl;
 u16 VAR_6 = FUNC_2(VAR_5, VAR_1);
 u8 VAR_7 = FUNC_1(VAR_5, VAR_0);

 if (VAR_7 == 2) {
  *VAR_3 = (VAR_6 & 0x0100) >> 8;
 } else {
  VAR_4 = -1;
 }

 FUNC_0(VAR_5, "Mode 1 ECC cap = %d\n", *VAR_3);
 return VAR_4;
}
