
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtsx_pcr {int sd30_drive_sel_3v3; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_0 (struct rtsx_pcr*) ;
 int FUNC_1 (struct rtsx_pcr*,int ,int ,int,int) ;
 int FUNC_2 (struct rtsx_pcr*) ;
 int FUNC_3 (struct rtsx_pcr*,int) ;

__attribute__((used)) static int FUNC_4(struct rtsx_pcr *VAR_8)
{
 FUNC_2(VAR_8);

 if (FUNC_0(VAR_8))
  FUNC_1(VAR_8, VAR_7,
    VAR_0, 0xFF, 0xF5);
 FUNC_1(VAR_8, VAR_7, VAR_6,
   0xFF, VAR_8->sd30_drive_sel_3v3);
 FUNC_1(VAR_8, VAR_7, VAR_4,
   VAR_2 | VAR_1, VAR_3);
 FUNC_1(VAR_8, VAR_7, VAR_5,
   0x06, 0x00);

 return FUNC_3(VAR_8, 100);
}
