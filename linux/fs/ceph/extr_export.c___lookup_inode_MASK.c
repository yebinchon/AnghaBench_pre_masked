
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u64 ;
struct super_block {int s_root; } ;
struct inode {int dummy; } ;
struct ceph_vino {int snap; int ino; } ;
struct TYPE_4__ {int mask; } ;
struct TYPE_5__ {TYPE_1__ lookupino; } ;
struct ceph_mds_request {int r_num_caps; struct inode* r_target_inode; struct ceph_vino r_ino1; TYPE_2__ r_args; } ;
struct ceph_mds_client {int dummy; } ;
struct TYPE_6__ {struct ceph_mds_client* mdsc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct inode* FUNC_0 (struct ceph_mds_request*) ;
 struct inode* FUNC_1 (int) ;
 int VAR_4 ;
 scalar_t__ FUNC_2 (struct ceph_mds_request*) ;
 int VAR_5 ;
 struct inode* FUNC_3 (struct super_block*,struct ceph_vino) ;
 struct ceph_mds_request* FUNC_4 (struct ceph_mds_client*,int ,int ) ;
 int FUNC_5 (struct ceph_mds_client*,int *,struct ceph_mds_request*) ;
 int FUNC_6 (struct ceph_mds_request*) ;
 TYPE_3__* FUNC_7 (struct super_block*) ;
 scalar_t__ FUNC_8 (int ) ;
 int FUNC_9 (int) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (struct inode*) ;

__attribute__((used)) static struct inode *FUNC_12(struct super_block *VAR_6, u64 VAR_7)
{
 struct ceph_mds_client *VAR_8 = FUNC_7(VAR_6)->mdsc;
 struct inode *VAR_9;
 struct ceph_vino VAR_10;
 int VAR_11;

 VAR_10.ino = VAR_7;
 VAR_10.snap = VAR_2;
 VAR_9 = FUNC_3(VAR_6, VAR_10);
 if (!VAR_9) {
  struct ceph_mds_request *VAR_12;
  int VAR_13;

  VAR_12 = FUNC_4(VAR_8, VAR_1,
            VAR_5);
  if (FUNC_2(VAR_12))
   return FUNC_0(VAR_12);

  VAR_13 = VAR_3;
  if (FUNC_8(FUNC_10(VAR_6->s_root)))
   VAR_13 |= VAR_0;
  VAR_12->r_args.lookupino.mask = FUNC_9(VAR_13);

  VAR_12->r_ino1 = VAR_10;
  VAR_12->r_num_caps = 1;
  VAR_11 = FUNC_5(VAR_8, ((void*)0), VAR_12);
  VAR_9 = VAR_12->r_target_inode;
  if (VAR_9)
   FUNC_11(VAR_9);
  FUNC_6(VAR_12);
  if (!VAR_9)
   return VAR_11 < 0 ? FUNC_1(VAR_11) : FUNC_1(-VAR_4);
 }
 return VAR_9;
}
