
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_6__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct ocfs2_protocol_version {scalar_t__ pv_major; scalar_t__ pv_minor; } ;
struct TYPE_8__ {int sb_lvbptr; } ;
struct ocfs2_live_connection {int oc_lvb; TYPE_2__ oc_version_lksb; } ;
struct TYPE_9__ {scalar_t__ pv_major; scalar_t__ pv_minor; } ;
struct ocfs2_cluster_connection {TYPE_3__ cc_version; struct ocfs2_live_connection* cc_private; } ;
struct TYPE_7__ {scalar_t__ pv_major; scalar_t__ pv_minor; } ;
struct TYPE_11__ {TYPE_1__ sp_max_proto; } ;
struct TYPE_10__ {scalar_t__ pv_major; scalar_t__ pv_minor; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,struct ocfs2_protocol_version*) ;
 TYPE_6__ VAR_7 ;
 TYPE_4__ VAR_8 ;
 int FUNC_1 (struct ocfs2_cluster_connection*,int ,int) ;
 int FUNC_2 (TYPE_4__*,int ) ;

__attribute__((used)) static int FUNC_3(struct ocfs2_cluster_connection *VAR_9)
{
 int VAR_10;
 struct ocfs2_live_connection *VAR_11 = VAR_9->cc_private;
 struct ocfs2_protocol_version VAR_12;

 VAR_8.pv_major =
  VAR_7.sp_max_proto.pv_major;
 VAR_8.pv_minor =
  VAR_7.sp_max_proto.pv_minor;

 VAR_11->oc_version_lksb.sb_lvbptr = VAR_11->oc_lvb;
 VAR_10 = FUNC_1(VAR_9, VAR_3,
   VAR_2|VAR_1);
 if (!VAR_10) {
  VAR_9->cc_version.pv_major = VAR_8.pv_major;
  VAR_9->cc_version.pv_minor = VAR_8.pv_minor;
  FUNC_2(&VAR_8, VAR_11->oc_lvb);
  FUNC_1(VAR_9, VAR_4, VAR_0|VAR_2);
 } else if (VAR_10 == -VAR_5) {
  VAR_10 = FUNC_1(VAR_9, VAR_4, VAR_2);
  if (VAR_10)
   goto out;
  FUNC_0(VAR_11->oc_lvb, &VAR_12);

  if ((VAR_12.pv_major != VAR_8.pv_major) ||
    (VAR_12.pv_minor > VAR_8.pv_minor)) {
   VAR_10 = -VAR_6;
   goto out;
  }

  VAR_9->cc_version.pv_major = VAR_12.pv_major;
  VAR_9->cc_version.pv_minor = VAR_12.pv_minor;
 }
out:
 return VAR_10;
}
