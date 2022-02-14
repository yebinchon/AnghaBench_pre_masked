
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ocfs2_protocol_version {int dummy; } ;
struct ocfs2_locking_protocol {int lp_max_version; } ;
struct ocfs2_cluster_connection {int cc_namelen; int cc_cluster_name_len; void (* cc_recovery_handler ) (int,void*) ;int cc_version; struct ocfs2_locking_protocol* cc_proto; void* cc_recovery_data; int cc_cluster_name; int cc_name; } ;
struct TYPE_4__ {TYPE_1__* sp_ops; } ;
struct TYPE_3__ {int (* connect ) (struct ocfs2_cluster_connection*) ;} ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_2__* VAR_5 ;
 int FUNC_1 (struct ocfs2_cluster_connection*) ;
 struct ocfs2_cluster_connection* FUNC_2 (int,int ) ;
 int VAR_6 ;
 scalar_t__ FUNC_3 (int *,int *,int) ;
 int FUNC_4 (char const*) ;
 int FUNC_5 () ;
 int FUNC_6 (int ,char const*,int) ;
 int FUNC_7 (struct ocfs2_cluster_connection*) ;

int FUNC_8(const char *VAR_7,
     const char *VAR_8,
     int VAR_9,
     const char *VAR_10,
     int VAR_11,
     struct ocfs2_locking_protocol *VAR_12,
     void (*VAR_13)(int VAR_14,
         void *VAR_15),
     void *VAR_16,
     struct ocfs2_cluster_connection **VAR_17)
{
 int VAR_18 = 0;
 struct ocfs2_cluster_connection *VAR_19;

 FUNC_0(VAR_10 == ((void*)0));
 FUNC_0(VAR_17 == ((void*)0));
 FUNC_0(VAR_13 == ((void*)0));

 if (VAR_11 > VAR_4) {
  VAR_18 = -VAR_1;
  goto out;
 }

 if (FUNC_3(&VAR_12->lp_max_version, &VAR_6,
     sizeof(struct ocfs2_protocol_version))) {
  VAR_18 = -VAR_1;
  goto out;
 }

 VAR_19 = FUNC_2(sizeof(struct ocfs2_cluster_connection),
      VAR_3);
 if (!VAR_19) {
  VAR_18 = -VAR_2;
  goto out;
 }

 FUNC_6(VAR_19->cc_name, VAR_10, VAR_4 + 1);
 VAR_19->cc_namelen = VAR_11;
 if (VAR_9)
  FUNC_6(VAR_19->cc_cluster_name, VAR_8,
   VAR_0 + 1);
 VAR_19->cc_cluster_name_len = VAR_9;
 VAR_19->cc_recovery_handler = VAR_13;
 VAR_19->cc_recovery_data = VAR_16;

 VAR_19->cc_proto = VAR_12;

 VAR_19->cc_version = VAR_12->lp_max_version;


 VAR_18 = FUNC_4(VAR_7);
 if (VAR_18)
  goto out_free;

 VAR_18 = VAR_5->sp_ops->connect(VAR_19);
 if (VAR_18) {
  FUNC_5();
  goto out_free;
 }

 *VAR_17 = VAR_19;

out_free:
 if (VAR_18)
  FUNC_1(VAR_19);

out:
 return VAR_18;
}
