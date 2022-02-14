
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct inode {int dummy; } ;
struct ceph_string {int dummy; } ;
struct TYPE_4__ {scalar_t__ pool_id; int pool_ns; } ;
struct TYPE_3__ {scalar_t__ snap; } ;
struct ceph_inode_info {int i_ceph_flags; int i_ceph_lock; TYPE_2__ i_layout; TYPE_1__ i_vino; } ;
typedef scalar_t__ s64 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (struct ceph_inode_info*,scalar_t__,struct ceph_string*) ;
 struct ceph_inode_info* FUNC_1 (struct inode*) ;
 int FUNC_2 (struct inode*) ;
 int FUNC_3 (struct ceph_string*) ;
 scalar_t__ FUNC_4 (int ,int ) ;
 struct ceph_string* FUNC_5 (int ) ;
 int FUNC_6 (char*,scalar_t__) ;
 struct ceph_string* FUNC_7 (int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;

int FUNC_10(struct inode *VAR_10, int VAR_11)
{
 struct ceph_inode_info *VAR_12 = FUNC_1(VAR_10);
 struct ceph_string *VAR_13;
 s64 VAR_14;
 int VAR_15, VAR_16;

 if (VAR_12->i_vino.snap != VAR_5) {





  return 0;
 }

 if (FUNC_4(FUNC_2(VAR_10),
    VAR_7))
  return 0;

 FUNC_8(&VAR_12->i_ceph_lock);
 VAR_16 = VAR_12->i_ceph_flags;
 VAR_14 = VAR_12->i_layout.pool_id;
 FUNC_9(&VAR_12->i_ceph_lock);
check:
 if (VAR_16 & VAR_2) {
  if ((VAR_11 & VAR_0) && !(VAR_16 & VAR_3)) {
   FUNC_6("ceph_pool_perm_check pool %lld no read perm\n",
        VAR_14);
   return -VAR_6;
  }
  if ((VAR_11 & VAR_1) && !(VAR_16 & VAR_4)) {
   FUNC_6("ceph_pool_perm_check pool %lld no write perm\n",
        VAR_14);
   return -VAR_6;
  }
  return 0;
 }

 VAR_13 = FUNC_5(VAR_12->i_layout.pool_ns);
 VAR_15 = FUNC_0(VAR_12, VAR_14, VAR_13);
 FUNC_3(VAR_13);
 if (VAR_15 < 0)
  return VAR_15;

 VAR_16 = VAR_2;
 if (VAR_15 & VAR_8)
  VAR_16 |= VAR_3;
 if (VAR_15 & VAR_9)
  VAR_16 |= VAR_4;

 FUNC_8(&VAR_12->i_ceph_lock);
 if (VAR_14 == VAR_12->i_layout.pool_id &&
     VAR_13 == FUNC_7(VAR_12->i_layout.pool_ns)) {
  VAR_12->i_ceph_flags |= VAR_16;
        } else {
  VAR_14 = VAR_12->i_layout.pool_id;
  VAR_16 = VAR_12->i_ceph_flags;
 }
 FUNC_9(&VAR_12->i_ceph_lock);
 goto check;
}
