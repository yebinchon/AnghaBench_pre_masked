
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct group_info* cr_group_info; int cr_gid; int cr_uid; } ;
struct svc_rqst {TYPE_1__ rq_cred; } ;
struct svc_export {int ex_anon_gid; int ex_anon_uid; } ;
struct group_info {int ngroups; int * gid; } ;
struct cred {int cap_permitted; int cap_effective; int fsuid; int fsgid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct cred*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 () ;
 int FUNC_4 (int ) ;
 struct group_info* FUNC_5 (struct group_info*) ;
 scalar_t__ FUNC_6 (int ,int ) ;
 struct group_info* FUNC_7 (int) ;
 int FUNC_8 (struct group_info*) ;
 int FUNC_9 (struct svc_rqst*,struct svc_export*) ;
 struct cred* FUNC_10 (struct cred*) ;
 struct cred* FUNC_11 () ;
 int FUNC_12 (struct cred*) ;
 int FUNC_13 (struct group_info*) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (struct cred*,struct group_info*) ;
 scalar_t__ FUNC_16 (int ,int ) ;
 int FUNC_17 () ;

int FUNC_18(struct svc_rqst *VAR_7, struct svc_export *VAR_8)
{
 struct group_info *VAR_9;
 struct group_info *VAR_10;
 struct cred *VAR_11;
 int VAR_12;
 int VAR_13 = FUNC_9(VAR_7, VAR_8);

 FUNC_17();


 FUNC_14(FUNC_4(FUNC_3()));
 VAR_11 = FUNC_11();
 if (!VAR_11)
  return -VAR_0;

 VAR_11->fsuid = VAR_7->rq_cred.cr_uid;
 VAR_11->fsgid = VAR_7->rq_cred.cr_gid;

 VAR_9 = VAR_7->rq_cred.cr_group_info;

 if (VAR_13 & VAR_5) {
  VAR_11->fsuid = VAR_8->ex_anon_uid;
  VAR_11->fsgid = VAR_8->ex_anon_gid;
  VAR_10 = FUNC_7(0);
  if (!VAR_10)
   goto oom;
 } else if (VAR_13 & VAR_6) {
  if (FUNC_16(VAR_11->fsuid, VAR_2))
   VAR_11->fsuid = VAR_8->ex_anon_uid;
  if (FUNC_6(VAR_11->fsgid, VAR_1))
   VAR_11->fsgid = VAR_8->ex_anon_gid;

  VAR_10 = FUNC_7(VAR_9->ngroups);
  if (!VAR_10)
   goto oom;

  for (VAR_12 = 0; VAR_12 < VAR_9->ngroups; VAR_12++) {
   if (FUNC_6(VAR_1, VAR_9->gid[VAR_12]))
    VAR_10->gid[VAR_12] = VAR_8->ex_anon_gid;
   else
    VAR_10->gid[VAR_12] = VAR_9->gid[VAR_12];
  }


  FUNC_8(VAR_10);
 } else {
  VAR_10 = FUNC_5(VAR_9);
 }

 if (FUNC_16(VAR_11->fsuid, VAR_4))
  VAR_11->fsuid = VAR_8->ex_anon_uid;
 if (FUNC_6(VAR_11->fsgid, VAR_3))
  VAR_11->fsgid = VAR_8->ex_anon_gid;

 FUNC_15(VAR_11, VAR_10);
 FUNC_13(VAR_10);

 if (!FUNC_16(VAR_11->fsuid, VAR_2))
  VAR_11->cap_effective = FUNC_1(VAR_11->cap_effective);
 else
  VAR_11->cap_effective = FUNC_2(VAR_11->cap_effective,
       VAR_11->cap_permitted);
 FUNC_17();
 FUNC_12(FUNC_10(VAR_11));
 FUNC_12(VAR_11);
 FUNC_17();
 return 0;

oom:
 FUNC_0(VAR_11);
 return -VAR_0;
}
