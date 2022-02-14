
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct nvme_feat_auto_pst {int * entries; } ;
struct nvme_ctrl {int npss; scalar_t__ ps_max_latency_us; int quirks; int device; TYPE_1__* psd; int apst_enabled; int apsta; } ;
typedef int __le64 ;
struct TYPE_2__ {int flags; int entry_lat; int exit_lat; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (int ,char*,int) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (scalar_t__,int) ;
 int FUNC_5 (struct nvme_feat_auto_pst*) ;
 struct nvme_feat_auto_pst* FUNC_6 (int,int ) ;
 scalar_t__ FUNC_7 (int ) ;
 int FUNC_8 (struct nvme_ctrl*,int ,unsigned int,struct nvme_feat_auto_pst*,int,int *) ;

__attribute__((used)) static int FUNC_9(struct nvme_ctrl *VAR_4)
{
 unsigned VAR_5;
 struct nvme_feat_auto_pst *VAR_6;
 u64 VAR_7 = 0;
 int VAR_8 = -1;
 int VAR_9;





 if (!VAR_4->apsta)
  return 0;

 if (VAR_4->npss > 31) {
  FUNC_3(VAR_4->device, "NPSS is invalid; not using APST\n");
  return 0;
 }

 VAR_6 = FUNC_6(sizeof(*VAR_6), VAR_0);
 if (!VAR_6)
  return 0;

 if (!VAR_4->apst_enabled || VAR_4->ps_max_latency_us == 0) {

  VAR_5 = 0;
  FUNC_1(VAR_4->device, "APST disabled\n");
 } else {
  __le64 VAR_10 = FUNC_0(0);
  int VAR_11;







  for (VAR_11 = (int)VAR_4->npss; VAR_11 >= 0; VAR_11--) {
   u64 VAR_12, VAR_13, VAR_14;

   if (VAR_10)
    VAR_6->entries[VAR_11] = VAR_10;





   if (VAR_11 == VAR_4->npss &&
       (VAR_4->quirks & VAR_3))
    continue;





   if (!(VAR_4->psd[VAR_11].flags &
         VAR_2))
    continue;

   VAR_13 =
    (u64)FUNC_7(VAR_4->psd[VAR_11].exit_lat);
   if (VAR_13 > VAR_4->ps_max_latency_us)
    continue;

   VAR_12 =
    VAR_13 +
    FUNC_7(VAR_4->psd[VAR_11].entry_lat);





   VAR_14 = VAR_12 + 19;
   FUNC_4(VAR_14, 20);
   if (VAR_14 > (1 << 24) - 1)
    VAR_14 = (1 << 24) - 1;

   VAR_10 = FUNC_0((VAR_11 << 3) |
          (VAR_14 << 8));

   if (VAR_8 == -1)
    VAR_8 = VAR_11;

   if (VAR_12 > VAR_7)
    VAR_7 = VAR_12;
  }

  VAR_5 = 1;

  if (VAR_8 == -1) {
   FUNC_1(VAR_4->device, "APST enabled but no non-operational states are available\n");
  } else {
   FUNC_1(VAR_4->device, "APST enabled: max PS = %d, max round-trip latency = %lluus, table = %*phN\n",
    VAR_8, VAR_7, (int)sizeof(*VAR_6), VAR_6);
  }
 }

 VAR_9 = FUNC_8(VAR_4, VAR_1, VAR_5,
    VAR_6, sizeof(*VAR_6), ((void*)0));
 if (VAR_9)
  FUNC_2(VAR_4->device, "failed to set APST feature (%d)\n", VAR_9);

 FUNC_5(VAR_6);
 return VAR_9;
}
