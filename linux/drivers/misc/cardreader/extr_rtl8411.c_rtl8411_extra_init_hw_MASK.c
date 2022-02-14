
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
 int FUNC_0 (struct rtsx_pcr*,int ,int ,int,int ) ;
 int FUNC_1 (struct rtsx_pcr*) ;
 int FUNC_2 (struct rtsx_pcr*,int) ;

__attribute__((used)) static int FUNC_3(struct rtsx_pcr *VAR_6)
{
 FUNC_1(VAR_6);

 FUNC_0(VAR_6, VAR_5, VAR_4,
   0xFF, VAR_6->sd30_drive_sel_3v3);
 FUNC_0(VAR_6, VAR_5, VAR_3,
   VAR_1 | VAR_0, VAR_2);

 return FUNC_2(VAR_6, 100);
}
