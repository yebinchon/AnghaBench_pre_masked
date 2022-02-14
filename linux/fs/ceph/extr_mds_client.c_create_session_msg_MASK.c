
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct TYPE_2__ {struct ceph_mds_session_head* iov_base; } ;
struct ceph_msg {TYPE_1__ front; } ;
struct ceph_mds_session_head {int seq; int op; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct ceph_msg* FUNC_0 (int ,int,int ,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*) ;

__attribute__((used)) static struct ceph_msg *FUNC_4(u32 VAR_2, u64 VAR_3)
{
 struct ceph_msg *VAR_4;
 struct ceph_mds_session_head *VAR_5;

 VAR_4 = FUNC_0(VAR_0, sizeof(*VAR_5), VAR_1,
      0);
 if (!VAR_4) {
  FUNC_3("create_session_msg ENOMEM creating msg\n");
  return ((void*)0);
 }
 VAR_5 = VAR_4->front.iov_base;
 VAR_5->op = FUNC_1(VAR_2);
 VAR_5->seq = FUNC_2(VAR_3);

 return VAR_4;
}
