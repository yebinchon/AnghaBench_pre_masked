
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mantis_pci {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int,char*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,int) ;
 int VAR_1 ;

void FUNC_3(struct mantis_pci *VAR_2, int VAR_3)
{
 u32 VAR_4;

 VAR_4 = FUNC_1(0x28);
 FUNC_0(VAR_1, VAR_0, 1, "TS direction setup");
 if (VAR_3 == 0x01) {

  VAR_4 |= 0x04;
  FUNC_2(VAR_4, 0x28);
  VAR_4 &= 0xff - 0x04;
  FUNC_2(VAR_4, 0x28);
 } else {
  VAR_4 &= 0xff - 0x04;
  FUNC_2(VAR_4, 0x28);
  VAR_4 |= 0x04;
  FUNC_2(VAR_4, 0x28);
 }
}
