
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
 int FUNC_0 (struct rtsx_pcr*,int ,int ,int,int) ;
 int FUNC_1 (struct rtsx_pcr*) ;
 int FUNC_2 (struct rtsx_pcr*,int) ;

__attribute__((used)) static int FUNC_3(struct rtsx_pcr *VAR_7)
{
 FUNC_1(VAR_7);


 FUNC_0(VAR_7, VAR_6, VAR_1, 0x02, 0x02);

 FUNC_0(VAR_7, VAR_6, VAR_0, 0x3F, 0);

 FUNC_0(VAR_7, VAR_6, VAR_4, 0x08, 0x08);

 FUNC_0(VAR_7, VAR_6, VAR_2, 0x03, 0x00);
 FUNC_0(VAR_7, VAR_6, VAR_2, 0x03, 0x01);

 FUNC_0(VAR_7, VAR_6, VAR_3, 0x0F, 0x02);

 FUNC_0(VAR_7, VAR_6, VAR_5,
   0xFF, VAR_7->sd30_drive_sel_3v3);

 return FUNC_2(VAR_7, 100);
}
