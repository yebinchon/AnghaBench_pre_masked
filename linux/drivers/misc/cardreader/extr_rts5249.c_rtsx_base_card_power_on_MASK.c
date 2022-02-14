
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
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct rtsx_pcr*,int ,int ,int ,int) ;
 int FUNC_2 (struct rtsx_pcr*) ;
 int FUNC_3 (struct rtsx_pcr*) ;
 int FUNC_4 (struct rtsx_pcr*,int) ;

__attribute__((used)) static int FUNC_5(struct rtsx_pcr *VAR_7, int VAR_8)
{
 int VAR_9;
 struct rtsx_cr_option *VAR_10 = &VAR_7->option;

 if (VAR_10->ocp_en)
  FUNC_2(VAR_7);

 FUNC_3(VAR_7);
 FUNC_1(VAR_7, VAR_6, VAR_0,
   VAR_3, VAR_4);
 FUNC_1(VAR_7, VAR_6, VAR_2,
   VAR_1, 0x02);
 VAR_9 = FUNC_4(VAR_7, 100);
 if (VAR_9 < 0)
  return VAR_9;

 FUNC_0(5);

 FUNC_3(VAR_7);
 FUNC_1(VAR_7, VAR_6, VAR_0,
   VAR_3, VAR_5);
 FUNC_1(VAR_7, VAR_6, VAR_2,
   VAR_1, 0x06);
 return FUNC_4(VAR_7, 100);
}
