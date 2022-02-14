
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int type; } ;
struct ceph_msg {TYPE_1__ hdr; } ;
struct ceph_fs_client {int mdsc; } ;
struct ceph_client {struct ceph_fs_client* private; } ;




 int FUNC_0 (int ,struct ceph_msg*) ;
 int FUNC_1 (int ,struct ceph_msg*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct ceph_client *VAR_0, struct ceph_msg *VAR_1)
{
 struct ceph_fs_client *VAR_2 = VAR_0->private;
 int VAR_3 = FUNC_2(VAR_1->hdr.type);

 switch (VAR_3) {
 case 128:
  FUNC_1(VAR_2->mdsc, VAR_1);
  return 0;
 case 129:
  FUNC_0(VAR_2->mdsc, VAR_1);
  return 0;
 default:
  return -1;
 }
}
