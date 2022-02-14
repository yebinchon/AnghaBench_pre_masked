
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int dummy; } ;
struct ceph_inode_info {int i_ceph_lock; int i_inline_version; } ;
struct ceph_aio_request {int error; int total_len; int prealloc_cf; TYPE_1__* iocb; scalar_t__ write; int pending_reqs; } ;
typedef scalar_t__ loff_t ;
struct TYPE_2__ {scalar_t__ ki_pos; int (* ki_complete ) (TYPE_1__*,int,int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct ceph_inode_info*,int ,int *) ;
 int FUNC_1 (struct inode*,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct ceph_inode_info*,int ,int *) ;
 int FUNC_4 (int ) ;
 struct ceph_inode_info* FUNC_5 (struct inode*) ;
 scalar_t__ FUNC_6 (struct inode*,scalar_t__) ;
 int FUNC_7 (struct ceph_inode_info*,int ) ;
 int FUNC_8 (char*,struct inode*,int) ;
 scalar_t__ FUNC_9 (struct inode*) ;
 int FUNC_10 (struct ceph_aio_request*) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (TYPE_1__*,int,int ) ;

__attribute__((used)) static void FUNC_14(struct inode *VAR_4,
         struct ceph_aio_request *VAR_5)
{
 struct ceph_inode_info *VAR_6 = FUNC_5(VAR_4);
 int VAR_7;

 if (!FUNC_2(&VAR_5->pending_reqs))
  return;

 VAR_7 = VAR_5->error;
 if (!VAR_7)
  VAR_7 = VAR_5->total_len;

 FUNC_8("ceph_aio_complete %p rc %d\n", VAR_4, VAR_7);

 if (VAR_7 >= 0 && VAR_5->write) {
  int VAR_8;

  loff_t VAR_9 = VAR_5->iocb->ki_pos + VAR_5->total_len;
  if (VAR_9 > FUNC_9(VAR_4)) {
   if (FUNC_6(VAR_4, VAR_9))
    FUNC_3(VAR_6, VAR_3, ((void*)0));
  }

  FUNC_11(&VAR_6->i_ceph_lock);
  VAR_6->i_inline_version = VAR_2;
  VAR_8 = FUNC_0(VAR_6, VAR_1,
            &VAR_5->prealloc_cf);
  FUNC_12(&VAR_6->i_ceph_lock);
  if (VAR_8)
   FUNC_1(VAR_4, VAR_8);

 }

 FUNC_7(VAR_6, (VAR_5->write ? VAR_1 :
      VAR_0));

 VAR_5->iocb->ki_complete(VAR_5->iocb, VAR_7, 0);

 FUNC_4(VAR_5->prealloc_cf);
 FUNC_10(VAR_5);
}
