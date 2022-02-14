
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nfs_client {int cl_hostname; int cl_state; TYPE_1__* cl_mvops; int cl_count; } ;
struct TYPE_2__ {int nograce_recovery_ops; int reboot_recovery_ops; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (struct nfs_client*) ;
 int FUNC_2 (struct nfs_client*) ;
 int FUNC_3 (struct nfs_client*) ;
 int FUNC_4 (struct nfs_client*,int ) ;
 int FUNC_5 (struct nfs_client*) ;
 int FUNC_6 (struct nfs_client*) ;
 int FUNC_7 (struct nfs_client*) ;
 int FUNC_8 (struct nfs_client*) ;
 int FUNC_9 (struct nfs_client*) ;
 int FUNC_10 (struct nfs_client*) ;
 int FUNC_11 (struct nfs_client*) ;
 int FUNC_12 (struct nfs_client*) ;
 int FUNC_13 (struct nfs_client*) ;
 int FUNC_14 (char*,char const*,char const*,int ,int) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int ,int *) ;
 int FUNC_17 () ;
 int FUNC_18 (int) ;
 scalar_t__ FUNC_19 (char const*) ;
 scalar_t__ FUNC_20 (int ,int *) ;
 scalar_t__ FUNC_21 (int ,int *) ;
 scalar_t__ FUNC_22 (int ,int *) ;

__attribute__((used)) static void FUNC_23(struct nfs_client *VAR_15)
{
 int VAR_16 = 0;
 const char *VAR_17 = "", *VAR_18 = "";


 do {
  FUNC_0(VAR_13, &VAR_15->cl_state);
  if (FUNC_22(VAR_10, &VAR_15->cl_state)) {
   VAR_17 = "purge state";
   VAR_16 = FUNC_8(VAR_15);
   if (VAR_16 < 0)
    goto out_error;
   continue;
  }

  if (FUNC_22(VAR_6, &VAR_15->cl_state)) {
   VAR_17 = "lease expired";

   VAR_16 = FUNC_9(VAR_15);
   if (VAR_16 < 0)
    goto out_error;
   continue;
  }


  if (FUNC_20(VAR_14, &VAR_15->cl_state)) {
   VAR_17 = "reset session";
   VAR_16 = FUNC_10(VAR_15);
   if (FUNC_22(VAR_6, &VAR_15->cl_state))
    continue;
   if (VAR_16 < 0)
    goto out_error;
  }


  if (FUNC_20(VAR_1,
    &VAR_15->cl_state)) {
   VAR_17 = "bind conn to session";
   VAR_16 = FUNC_1(VAR_15);
   if (VAR_16 < 0)
    goto out_error;
   continue;
  }

  if (FUNC_20(VAR_2, &VAR_15->cl_state)) {
   VAR_17 = "check lease";
   VAR_16 = FUNC_2(VAR_15);
   if (VAR_16 < 0)
    goto out_error;
   continue;
  }

  if (FUNC_20(VAR_9, &VAR_15->cl_state)) {
   VAR_17 = "migration";
   VAR_16 = FUNC_7(VAR_15);
   if (VAR_16 < 0)
    goto out_error;
  }

  if (FUNC_20(VAR_7, &VAR_15->cl_state)) {
   VAR_17 = "lease moved";
   VAR_16 = FUNC_6(VAR_15);
   if (VAR_16 < 0)
    goto out_error;
  }


  if (FUNC_22(VAR_12, &VAR_15->cl_state)) {
   VAR_17 = "reclaim reboot";
   VAR_16 = FUNC_4(VAR_15,
    VAR_15->cl_mvops->reboot_recovery_ops);
   if (VAR_16 == -VAR_0)
    continue;
   if (VAR_16 < 0)
    goto out_error;
   FUNC_11(VAR_15);
  }


  if (FUNC_20(VAR_3, &VAR_15->cl_state)) {
   VAR_17 = "detect expired delegations";
   FUNC_13(VAR_15);
   continue;
  }


  if (FUNC_22(VAR_11, &VAR_15->cl_state)) {
   VAR_17 = "reclaim nograce";
   VAR_16 = FUNC_4(VAR_15,
    VAR_15->cl_mvops->nograce_recovery_ops);
   if (VAR_16 == -VAR_0)
    continue;
   if (VAR_16 < 0)
    goto out_error;
   FUNC_0(VAR_11, &VAR_15->cl_state);
  }

  FUNC_5(VAR_15);
  FUNC_3(VAR_15);

  if (!FUNC_21(VAR_5, &VAR_15->cl_state)) {
   if (FUNC_20(VAR_4, &VAR_15->cl_state)) {
    FUNC_12(VAR_15);
    FUNC_16(VAR_13, &VAR_15->cl_state);
   }
   FUNC_0(VAR_5, &VAR_15->cl_state);
  }


  if (!FUNC_22(VAR_13, &VAR_15->cl_state))
   return;
  if (FUNC_21(VAR_8, &VAR_15->cl_state) != 0)
   return;
 } while (FUNC_15(&VAR_15->cl_count) > 1 && !FUNC_17());
 goto out_drain;

out_error:
 if (FUNC_19(VAR_17))
  VAR_18 = ": ";
 FUNC_14("NFS: state manager%s%s failed on NFSv4 server %s"
   " with error %d\n", VAR_18, VAR_17,
   VAR_15->cl_hostname, -VAR_16);
 FUNC_18(1);
out_drain:
 FUNC_5(VAR_15);
 FUNC_3(VAR_15);
}
