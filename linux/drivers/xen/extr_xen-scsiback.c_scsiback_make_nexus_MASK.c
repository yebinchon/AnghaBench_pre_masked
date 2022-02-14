
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vscsibk_pend {int dummy; } ;
struct scsiback_tpg {int tv_tpg_mutex; int se_tpg; scalar_t__ tpg_nexus; } ;
struct scsiback_nexus {int tvn_se_sess; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct scsiback_nexus*) ;
 struct scsiback_nexus* FUNC_2 (int,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (char*) ;
 int VAR_5 ;
 int FUNC_6 (int *,int ,int,int ,char const*,struct scsiback_nexus*,int ) ;

__attribute__((used)) static int FUNC_7(struct scsiback_tpg *VAR_6,
    const char *VAR_7)
{
 struct scsiback_nexus *VAR_8;
 int VAR_9 = 0;

 FUNC_3(&VAR_6->tv_tpg_mutex);
 if (VAR_6->tpg_nexus) {
  FUNC_5("tpg->tpg_nexus already exists\n");
  VAR_9 = -VAR_0;
  goto out_unlock;
 }

 VAR_8 = FUNC_2(sizeof(struct scsiback_nexus), VAR_2);
 if (!VAR_8) {
  VAR_9 = -VAR_1;
  goto out_unlock;
 }

 VAR_8->tvn_se_sess = FUNC_6(&VAR_6->se_tpg,
           VAR_4,
           sizeof(struct vscsibk_pend),
           VAR_3, VAR_7,
           VAR_8, VAR_5);
 if (FUNC_0(VAR_8->tvn_se_sess)) {
  FUNC_1(VAR_8);
  VAR_9 = -VAR_1;
  goto out_unlock;
 }

out_unlock:
 FUNC_4(&VAR_6->tv_tpg_mutex);
 return VAR_9;
}
