
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int ocp_en; } ;
struct rtsx_pcr {int ocp_stat; int ocp_stat2; TYPE_1__ option; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct rtsx_pcr*,int*) ;
 int FUNC_1 (struct rtsx_pcr*,int ) ;
 int FUNC_2 (struct rtsx_pcr*) ;
 int FUNC_3 (struct rtsx_pcr*,int*) ;
 int FUNC_4 (struct rtsx_pcr*,int ,int ,int ) ;

__attribute__((used)) static void FUNC_5(struct rtsx_pcr *VAR_7)
{
 if (!VAR_7->option.ocp_en)
  return;

 FUNC_3(VAR_7, &VAR_7->ocp_stat);
 FUNC_0(VAR_7, &VAR_7->ocp_stat2);

 if ((VAR_7->ocp_stat & (VAR_5 | VAR_4)) ||
  (VAR_7->ocp_stat2 & (VAR_2 | VAR_1))) {
  FUNC_1(VAR_7, VAR_3);
  FUNC_4(VAR_7, VAR_0, VAR_6, 0);
  FUNC_2(VAR_7);
  VAR_7->ocp_stat = 0;
  VAR_7->ocp_stat2 = 0;
 }

}
