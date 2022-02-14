
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct super_block {int dummy; } ;
struct TYPE_3__ {int mode; int flags; } ;
struct TYPE_4__ {TYPE_1__ open; } ;
struct ceph_mds_request {TYPE_2__ r_args; int r_fmode; } ;
struct ceph_mds_client {int dummy; } ;
struct ceph_fs_client {struct ceph_mds_client* mdsc; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct ceph_mds_request*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 struct ceph_mds_request* FUNC_3 (struct ceph_mds_client*,int,int) ;
 struct ceph_fs_client* FUNC_4 (struct super_block*) ;
 int FUNC_5 (int) ;

__attribute__((used)) static struct ceph_mds_request *
FUNC_6(struct super_block *VAR_8, int VAR_9, int VAR_10)
{
 struct ceph_fs_client *VAR_11 = FUNC_4(VAR_8);
 struct ceph_mds_client *VAR_12 = VAR_11->mdsc;
 struct ceph_mds_request *VAR_13;
 int VAR_14 = VAR_6;
 int VAR_15 = (VAR_9 & VAR_2) ? VAR_0 : VAR_1;

 if (VAR_9 & (VAR_5|VAR_3|VAR_2|VAR_4))
  VAR_14 = VAR_7;

 VAR_13 = FUNC_3(VAR_12, VAR_15, VAR_14);
 if (FUNC_0(VAR_13))
  goto out;
 VAR_13->r_fmode = FUNC_2(VAR_9);
 VAR_13->r_args.open.flags = FUNC_1(VAR_9);
 VAR_13->r_args.open.mode = FUNC_5(VAR_10);
out:
 return VAR_13;
}
