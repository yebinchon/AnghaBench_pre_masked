
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct snic_abort_stats {int fail; int io_not_found; int fw_tmo; } ;
struct TYPE_2__ {struct snic_abort_stats abts; } ;
struct snic {int shost; TYPE_1__ s_stats; } ;


 int FUNC_0 (int ,char*) ;



 int FUNC_1 (int *) ;

__attribute__((used)) static void
FUNC_2(struct snic *VAR_0, u8 VAR_1)
{
 struct snic_abort_stats *VAR_2 = &VAR_0->s_stats.abts;

 FUNC_0(VAR_0->shost, "Updating Abort stats.\n");

 switch (VAR_1) {
 case 129:
  break;

 case 128:
  FUNC_1(&VAR_2->fw_tmo);
  break;

 case 130:
  FUNC_1(&VAR_2->io_not_found);
  break;

 default:
  FUNC_1(&VAR_2->fail);
  break;
 }
}
