
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int dentry; } ;
struct TYPE_4__ {scalar_t__ expiry_time; int flags; } ;
struct svc_export {int ex_flags; int ex_fsid; char* ex_uuid; TYPE_2__ ex_path; int ex_fslocs; int ex_anon_gid; int ex_anon_uid; TYPE_1__ h; int * ex_devid_map; struct cache_detail* cd; struct auth_domain* ex_client; } ;
struct cache_detail {int dummy; } ;
struct auth_domain {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct auth_domain* FUNC_0 (char*) ;
 int FUNC_1 (struct auth_domain*) ;
 int FUNC_2 () ;
 int FUNC_3 (int ,int*,char*) ;
 int FUNC_4 () ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct svc_export*) ;
 int FUNC_7 (char**,char*,int *) ;
 scalar_t__ FUNC_8 (char**) ;
 int FUNC_9 (char**,int*) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (char*,int ,TYPE_2__*) ;
 int FUNC_12 (char*) ;
 char* FUNC_13 (int ,int ) ;
 int FUNC_14 (int ,int) ;
 int FUNC_15 (int ,int) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (struct svc_export*) ;
 int FUNC_18 (char**,char*,char**) ;
 int FUNC_19 (TYPE_2__*) ;
 int FUNC_20 (char**,char*,int ) ;
 int FUNC_21 (char**,char*,struct svc_export*) ;
 scalar_t__ FUNC_22 () ;
 int FUNC_23 (int ,int *) ;
 scalar_t__ FUNC_24 (char*,char*) ;
 struct svc_export* FUNC_25 (struct svc_export*) ;
 struct svc_export* FUNC_26 (struct svc_export*,struct svc_export*) ;
 int FUNC_27 (int ) ;

__attribute__((used)) static int FUNC_28(struct cache_detail *VAR_6, char *VAR_7, int VAR_8)
{

 char *VAR_9;
 int VAR_10;
 int VAR_11;
 struct auth_domain *VAR_12 = ((void*)0);
 struct svc_export VAR_13 = {}, *VAR_14;
 int VAR_15;

 if (VAR_7[VAR_8-1] != '\n')
  return -VAR_1;
 VAR_7[VAR_8-1] = 0;

 VAR_9 = FUNC_13(VAR_5, VAR_4);
 if (!VAR_9)
  return -VAR_3;


 VAR_11 = -VAR_1;
 VAR_10 = FUNC_20(&VAR_7, VAR_9, VAR_5);
 if (VAR_10 <= 0)
  goto out;

 VAR_11 = -VAR_2;
 VAR_12 = FUNC_0(VAR_9);
 if (!VAR_12)
  goto out;


 VAR_11 = -VAR_1;
 if ((VAR_10 = FUNC_20(&VAR_7, VAR_9, VAR_5)) <= 0)
  goto out1;

 VAR_11 = FUNC_11(VAR_9, 0, &VAR_13.ex_path);
 if (VAR_11)
  goto out1;

 VAR_13.ex_client = VAR_12;
 VAR_13.cd = VAR_6;
 VAR_13.ex_devid_map = ((void*)0);


 VAR_11 = -VAR_1;
 VAR_13.h.expiry_time = FUNC_8(&VAR_7);
 if (VAR_13.h.expiry_time == 0)
  goto out3;


 VAR_11 = FUNC_9(&VAR_7, &VAR_15);
 if (VAR_11 == -VAR_2) {
  VAR_11 = 0;
  FUNC_23(VAR_0, &VAR_13.h.flags);
 } else {
  if (VAR_11 || VAR_15 < 0)
   goto out3;
  VAR_13.ex_flags= VAR_15;


  VAR_11 = FUNC_9(&VAR_7, &VAR_15);
  if (VAR_11)
   goto out3;
  VAR_13.ex_anon_uid= FUNC_15(FUNC_4(), VAR_15);


  VAR_11 = FUNC_9(&VAR_7, &VAR_15);
  if (VAR_11)
   goto out3;
  VAR_13.ex_anon_gid= FUNC_14(FUNC_4(), VAR_15);


  VAR_11 = FUNC_9(&VAR_7, &VAR_15);
  if (VAR_11)
   goto out3;
  VAR_13.ex_fsid = VAR_15;

  while ((VAR_10 = FUNC_20(&VAR_7, VAR_9, VAR_5)) > 0) {
   if (FUNC_24(VAR_9, "fsloc") == 0)
    VAR_11 = FUNC_7(&VAR_7, VAR_9, &VAR_13.ex_fslocs);
   else if (FUNC_24(VAR_9, "uuid") == 0)
    VAR_11 = FUNC_18(&VAR_7, VAR_9, &VAR_13.ex_uuid);
   else if (FUNC_24(VAR_9, "secinfo") == 0)
    VAR_11 = FUNC_21(&VAR_7, VAR_9, &VAR_13);
   else




    break;
   if (VAR_11)
    goto out4;
  }

  VAR_11 = FUNC_3(FUNC_5(VAR_13.ex_path.dentry), &VAR_13.ex_flags,
       VAR_13.ex_uuid);
  if (VAR_11)
   goto out4;





  if (VAR_13.h.expiry_time < FUNC_22())
   goto out4;







  VAR_11 = -VAR_1;
  if (!FUNC_27(VAR_13.ex_anon_uid))
   goto out4;
  if (!FUNC_10(VAR_13.ex_anon_gid))
   goto out4;
  VAR_11 = 0;

  FUNC_17(&VAR_13);
 }

 VAR_14 = FUNC_25(&VAR_13);
 if (VAR_14)
  VAR_14 = FUNC_26(&VAR_13, VAR_14);
 else
  VAR_11 = -VAR_3;
 FUNC_2();
 if (VAR_14 == ((void*)0))
  VAR_11 = -VAR_3;
 else
  FUNC_6(VAR_14);
out4:
 FUNC_16(&VAR_13.ex_fslocs);
 FUNC_12(VAR_13.ex_uuid);
out3:
 FUNC_19(&VAR_13.ex_path);
out1:
 FUNC_1(VAR_12);
out:
 FUNC_12(VAR_9);
 return VAR_11;
}
