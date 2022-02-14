
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct rtsx_pcr {int flags; int reg_pm_ctrl3; int pci; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (int ,int ,int*) ;
 int FUNC_1 (struct rtsx_pcr*,int ) ;
 int FUNC_2 (struct rtsx_pcr*,int ,int ,int,int) ;
 int FUNC_3 (struct rtsx_pcr*) ;
 int FUNC_4 (struct rtsx_pcr*,int) ;

__attribute__((used)) static int FUNC_5(struct rtsx_pcr *VAR_12)
{
 u16 VAR_13;

 FUNC_3(VAR_12);


 FUNC_2(VAR_12, VAR_11, VAR_1, 0x02, 0x02);

 FUNC_2(VAR_12, VAR_11, VAR_0, 0x3F, 0);

 FUNC_2(VAR_12, VAR_11, VAR_2, 0x03, 0x00);
 FUNC_2(VAR_12, VAR_11, VAR_2, 0x03, 0x01);

 FUNC_2(VAR_12, VAR_11, VAR_5, 0x0F, 0x02);

 FUNC_0(VAR_12->pci, VAR_7, &VAR_13);
 if (VAR_13 & VAR_8)
  FUNC_2(VAR_12, VAR_11, VAR_3, 0xFF, 0xA3);

 FUNC_2(VAR_12, VAR_11, VAR_4, 0x03, 0x03);

 FUNC_1(VAR_12, VAR_6);

 if (VAR_12->flags & VAR_9)
  FUNC_2(VAR_12, VAR_11, VAR_10, 0xB8, 0xB8);
 else
  FUNC_2(VAR_12, VAR_11, VAR_10, 0xB8, 0x88);
 FUNC_2(VAR_12, VAR_11, VAR_12->reg_pm_ctrl3, 0x10, 0x00);

 return FUNC_4(VAR_12, 100);
}
