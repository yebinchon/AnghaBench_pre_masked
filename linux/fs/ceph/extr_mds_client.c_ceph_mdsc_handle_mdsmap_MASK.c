
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {int iov_len; void* iov_base; } ;
struct ceph_msg {TYPE_1__ front; } ;
struct ceph_mdsmap {int m_epoch; scalar_t__ m_max_file_size; } ;
struct ceph_mds_client {int mutex; struct ceph_mdsmap* mdsmap; TYPE_2__* fsc; int waiting_for_map; } ;
struct ceph_fsid {int dummy; } ;
typedef int loff_t ;
typedef int fsid ;
struct TYPE_6__ {int monc; } ;
struct TYPE_5__ {TYPE_3__* client; int max_file_size; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct ceph_mdsmap*) ;
 int VAR_2 ;
 int FUNC_1 (struct ceph_mdsmap*) ;
 int FUNC_2 (struct ceph_mds_client*,int *) ;
 int VAR_3 ;
 scalar_t__ FUNC_3 (TYPE_3__*,struct ceph_fsid*) ;
 int FUNC_4 (void**) ;
 int FUNC_5 (void**,struct ceph_fsid*,int) ;
 int FUNC_6 (void**,void*,int,int ) ;
 struct ceph_mdsmap* FUNC_7 (void**,void*) ;
 int FUNC_8 (struct ceph_mdsmap*) ;
 int FUNC_9 (int *,int ,int) ;
 int FUNC_10 (struct ceph_mds_client*,struct ceph_mdsmap*,struct ceph_mdsmap*) ;
 int FUNC_11 (char*,int,int) ;
 int FUNC_12 (int ,int ) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (char*,int) ;
 int FUNC_16 (struct ceph_mds_client*) ;

void FUNC_17(struct ceph_mds_client *VAR_4, struct ceph_msg *VAR_5)
{
 u32 VAR_6;
 u32 VAR_7;
 void *VAR_8 = VAR_5->front.iov_base;
 void *VAR_9 = VAR_8 + VAR_5->front.iov_len;
 struct ceph_mdsmap *VAR_10, *VAR_11;
 struct ceph_fsid VAR_12;
 int VAR_13 = -VAR_1;

 FUNC_6(&VAR_8, VAR_9, sizeof(VAR_12)+2*sizeof(u32), VAR_3);
 FUNC_5(&VAR_8, &VAR_12, sizeof(VAR_12));
 if (FUNC_3(VAR_4->fsc->client, &VAR_12) < 0)
  return;
 VAR_6 = FUNC_4(&VAR_8);
 VAR_7 = FUNC_4(&VAR_8);
 FUNC_11("handle_map epoch %u len %d\n", VAR_6, (int)VAR_7);


 FUNC_13(&VAR_4->mutex);
 if (VAR_4->mdsmap && VAR_6 <= VAR_4->mdsmap->m_epoch) {
  FUNC_11("handle_map epoch %u <= our %u\n",
       VAR_6, VAR_4->mdsmap->m_epoch);
  FUNC_14(&VAR_4->mutex);
  return;
 }

 VAR_10 = FUNC_7(&VAR_8, VAR_9);
 if (FUNC_0(VAR_10)) {
  VAR_13 = FUNC_1(VAR_10);
  goto bad_unlock;
 }


 if (VAR_4->mdsmap) {
  VAR_11 = VAR_4->mdsmap;
  VAR_4->mdsmap = VAR_10;
  FUNC_10(VAR_4, VAR_10, VAR_11);
  FUNC_8(VAR_11);
 } else {
  VAR_4->mdsmap = VAR_10;
 }
 VAR_4->fsc->max_file_size = FUNC_12((loff_t)VAR_4->mdsmap->m_max_file_size,
     VAR_2);

 FUNC_2(VAR_4, &VAR_4->waiting_for_map);
 FUNC_9(&VAR_4->fsc->client->monc, VAR_0,
     VAR_4->mdsmap->m_epoch);

 FUNC_14(&VAR_4->mutex);
 FUNC_16(VAR_4);
 return;

bad_unlock:
 FUNC_14(&VAR_4->mutex);
bad:
 FUNC_15("error decoding mdsmap %d\n", VAR_13);
 return;
}
