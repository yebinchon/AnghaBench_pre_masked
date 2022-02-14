
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ceph_msg_header {int front_len; int type; } ;
struct ceph_msg {int dummy; } ;
struct ceph_connection {struct ceph_msg* in_msg; } ;


 int VAR_0 ;
 struct ceph_msg* FUNC_0 (int,int,int ,int) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (char*,int,int) ;

__attribute__((used)) static struct ceph_msg *FUNC_4(struct ceph_connection *VAR_1,
    struct ceph_msg_header *VAR_2, int *VAR_3)
{
 struct ceph_msg *VAR_4;
 int VAR_5 = (int) FUNC_1(VAR_2->type);
 int VAR_6 = (int) FUNC_2(VAR_2->front_len);

 if (VAR_1->in_msg)
  return VAR_1->in_msg;

 *VAR_3 = 0;
 VAR_4 = FUNC_0(VAR_5, VAR_6, VAR_0, 0);
 if (!VAR_4) {
  FUNC_3("unable to allocate msg type %d len %d\n",
         VAR_5, VAR_6);
  return ((void*)0);
 }

 return VAR_4;
}
