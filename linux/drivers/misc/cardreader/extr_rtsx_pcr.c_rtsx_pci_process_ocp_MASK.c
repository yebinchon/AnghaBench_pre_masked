
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int ocp_en; } ;
struct rtsx_pcr {int ocp_stat; TYPE_2__ option; TYPE_1__* ops; } ;
struct TYPE_3__ {int (* process_ocp ) (struct rtsx_pcr*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct rtsx_pcr*,int ) ;
 int FUNC_1 (struct rtsx_pcr*) ;
 int FUNC_2 (struct rtsx_pcr*,int*) ;
 int FUNC_3 (struct rtsx_pcr*,int ,int ,int ) ;
 int FUNC_4 (struct rtsx_pcr*) ;

__attribute__((used)) static void FUNC_5(struct rtsx_pcr *VAR_5)
{
 if (VAR_5->ops->process_ocp) {
  VAR_5->ops->process_ocp(VAR_5);
 } else {
  if (!VAR_5->option.ocp_en)
   return;
  FUNC_2(VAR_5, &VAR_5->ocp_stat);
  if (VAR_5->ocp_stat & (VAR_3 | VAR_2)) {
   FUNC_0(VAR_5, VAR_1);
   FUNC_3(VAR_5, VAR_0, VAR_4, 0);
   FUNC_1(VAR_5);
   VAR_5->ocp_stat = 0;
  }
 }
}
