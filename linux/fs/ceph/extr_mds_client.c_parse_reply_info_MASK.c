
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef scalar_t__ u32 ;
struct TYPE_2__ {int iov_len; void* iov_base; } ;
struct ceph_msg {TYPE_1__ front; } ;
struct ceph_mds_reply_info_parsed {void* snapblob; scalar_t__ snapblob_len; void* head; } ;
struct ceph_mds_reply_head {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (void**,void*,scalar_t__,int ) ;
 int FUNC_1 (void**,void*,scalar_t__,int ) ;
 int FUNC_2 (void**,void*,struct ceph_mds_reply_info_parsed*,int ) ;
 int FUNC_3 (void**,void*,struct ceph_mds_reply_info_parsed*,int ) ;
 int FUNC_4 (char*,int) ;

__attribute__((used)) static int FUNC_5(struct ceph_msg *VAR_2,
       struct ceph_mds_reply_info_parsed *VAR_3,
       u64 VAR_4)
{
 void *VAR_5, *VAR_6;
 u32 VAR_7;
 int VAR_8;

 VAR_3->head = VAR_2->front.iov_base;
 VAR_5 = VAR_2->front.iov_base + sizeof(struct ceph_mds_reply_head);
 VAR_6 = VAR_5 + VAR_2->front.iov_len - sizeof(struct ceph_mds_reply_head);


 FUNC_0(&VAR_5, VAR_6, VAR_7, VAR_1);
 if (VAR_7 > 0) {
  FUNC_1(&VAR_5, VAR_6, VAR_7, VAR_1);
  VAR_8 = FUNC_3(&VAR_5, VAR_5+VAR_7, VAR_3, VAR_4);
  if (VAR_8 < 0)
   goto out_bad;
 }


 FUNC_0(&VAR_5, VAR_6, VAR_7, VAR_1);
 if (VAR_7 > 0) {
  FUNC_1(&VAR_5, VAR_6, VAR_7, VAR_1);
  VAR_8 = FUNC_2(&VAR_5, VAR_5+VAR_7, VAR_3, VAR_4);
  if (VAR_8 < 0)
   goto out_bad;
 }


 FUNC_0(&VAR_5, VAR_6, VAR_7, VAR_1);
 VAR_3->snapblob_len = VAR_7;
 VAR_3->snapblob = VAR_5;
 VAR_5 += VAR_7;

 if (VAR_5 != VAR_6)
  goto bad;
 return 0;

bad:
 VAR_8 = -VAR_0;
out_bad:
 FUNC_4("mds parse_reply err %d\n", VAR_8);
 return VAR_8;
}
