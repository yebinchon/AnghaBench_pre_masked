
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int type; } ;
struct ceph_msg {TYPE_1__ hdr; } ;
struct ceph_mds_session {struct ceph_mds_client* s_mdsc; } ;
struct ceph_mds_client {int mutex; } ;
struct ceph_connection {struct ceph_mds_session* private; } ;
 scalar_t__ FUNC_0 (struct ceph_mds_client*,struct ceph_mds_session*) ;
 int FUNC_1 (struct ceph_mds_session*,struct ceph_msg*) ;
 int FUNC_2 (struct ceph_mds_client*,struct ceph_mds_session*,struct ceph_msg*) ;
 int FUNC_3 (struct ceph_mds_client*,struct ceph_mds_session*,struct ceph_msg*) ;
 int FUNC_4 (struct ceph_mds_client*,struct ceph_msg*) ;
 int FUNC_5 (struct ceph_mds_client*,struct ceph_msg*) ;
 int FUNC_6 (struct ceph_msg*) ;
 int FUNC_7 (int) ;
 int FUNC_8 (struct ceph_mds_client*,struct ceph_mds_session*,struct ceph_msg*) ;
 int FUNC_9 (struct ceph_mds_client*,struct ceph_mds_session*,struct ceph_msg*) ;
 int FUNC_10 (struct ceph_mds_session*,struct ceph_msg*) ;
 int FUNC_11 (struct ceph_mds_session*,struct ceph_msg*) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (char*,int,int ) ;

__attribute__((used)) static void FUNC_16(struct ceph_connection *VAR_0, struct ceph_msg *VAR_1)
{
 struct ceph_mds_session *VAR_2 = VAR_0->private;
 struct ceph_mds_client *VAR_3 = VAR_2->s_mdsc;
 int VAR_4 = FUNC_12(VAR_1->hdr.type);

 FUNC_13(&VAR_3->mutex);
 if (FUNC_0(VAR_3, VAR_2) < 0) {
  FUNC_14(&VAR_3->mutex);
  goto out;
 }
 FUNC_14(&VAR_3->mutex);

 switch (VAR_4) {
 case 128:
  FUNC_5(VAR_3, VAR_1);
  break;
 case 129:
  FUNC_4(VAR_3, VAR_1);
  break;
 case 131:
  FUNC_11(VAR_2, VAR_1);
  break;
 case 133:
  FUNC_10(VAR_2, VAR_1);
  break;
 case 132:
  FUNC_8(VAR_3, VAR_2, VAR_1);
  break;
 case 136:
  FUNC_1(VAR_2, VAR_1);
  break;
 case 130:
  FUNC_3(VAR_3, VAR_2, VAR_1);
  break;
 case 135:
  FUNC_9(VAR_3, VAR_2, VAR_1);
  break;
 case 134:
  FUNC_2(VAR_3, VAR_2, VAR_1);
  break;

 default:
  FUNC_15("received unknown message type %d %s\n", VAR_4,
         FUNC_7(VAR_4));
 }
out:
 FUNC_6(VAR_1);
}
