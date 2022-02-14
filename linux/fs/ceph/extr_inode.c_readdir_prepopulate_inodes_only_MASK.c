
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct inode {int dummy; } ;
struct ceph_vino {void* snap; void* ino; } ;
struct ceph_mds_session {int dummy; } ;
struct ceph_mds_reply_info_parsed {int dir_nr; struct ceph_mds_reply_dir_entry* dir_entries; } ;
struct ceph_mds_request {int r_caps_reservation; int r_request_started; TYPE_2__* r_dentry; struct ceph_mds_reply_info_parsed r_reply_info; } ;
struct TYPE_6__ {TYPE_1__* in; } ;
struct ceph_mds_reply_dir_entry {TYPE_3__ inode; } ;
struct TYPE_5__ {int d_sb; } ;
struct TYPE_4__ {int snapid; int ino; } ;


 scalar_t__ FUNC_0 (struct inode*) ;
 int FUNC_1 (struct inode*) ;
 int FUNC_2 (struct inode*) ;
 struct inode* FUNC_3 (int ,struct ceph_vino) ;
 int FUNC_4 (char*,int) ;
 int FUNC_5 (struct inode*,int *,TYPE_3__*,int *,struct ceph_mds_session*,int ,int,int *) ;
 void* FUNC_6 (int ) ;
 int FUNC_7 (char*,struct inode*,int) ;

__attribute__((used)) static int FUNC_8(struct ceph_mds_request *VAR_0,
        struct ceph_mds_session *VAR_1)
{
 struct ceph_mds_reply_info_parsed *VAR_2 = &VAR_0->r_reply_info;
 int VAR_3, VAR_4 = 0;

 for (VAR_3 = 0; VAR_3 < VAR_2->dir_nr; VAR_3++) {
  struct ceph_mds_reply_dir_entry *VAR_5 = VAR_2->dir_entries + VAR_3;
  struct ceph_vino VAR_6;
  struct inode *VAR_7;
  int VAR_8;

  VAR_6.ino = FUNC_6(VAR_5->inode.in->ino);
  VAR_6.snap = FUNC_6(VAR_5->inode.in->snapid);

  VAR_7 = FUNC_3(VAR_0->r_dentry->d_sb, VAR_6);
  if (FUNC_0(VAR_7)) {
   VAR_4 = FUNC_1(VAR_7);
   FUNC_4("new_inode badness got %d\n", VAR_4);
   continue;
  }
  VAR_8 = FUNC_5(VAR_7, ((void*)0), &VAR_5->inode, ((void*)0), VAR_1,
    VAR_0->r_request_started, -1,
    &VAR_0->r_caps_reservation);
  if (VAR_8 < 0) {
   FUNC_7("fill_inode badness on %p got %d\n", VAR_7, VAR_8);
   VAR_4 = VAR_8;
  }

  FUNC_2(VAR_7);
 }

 return VAR_4;
}
