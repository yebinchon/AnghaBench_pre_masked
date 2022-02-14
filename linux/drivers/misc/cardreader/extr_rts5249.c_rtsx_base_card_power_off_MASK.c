
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtsx_cr_option {scalar_t__ ocp_en; } ;
struct rtsx_pcr {struct rtsx_cr_option option; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct rtsx_pcr*) ;
 int FUNC_1 (struct rtsx_pcr*,int ,int ,int) ;

__attribute__((used)) static int FUNC_2(struct rtsx_pcr *VAR_5, int VAR_6)
{
 struct rtsx_cr_option *VAR_7 = &VAR_5->option;

 if (VAR_7->ocp_en)
  FUNC_0(VAR_5);

 FUNC_1(VAR_5, VAR_0, VAR_3, VAR_4);

 FUNC_1(VAR_5, VAR_2, VAR_1, 0x00);
 return 0;
}
