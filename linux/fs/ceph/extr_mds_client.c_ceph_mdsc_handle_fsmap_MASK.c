
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_8__ {int iov_len; void* iov_base; } ;
struct ceph_msg {TYPE_2__ front; } ;
struct ceph_mds_client {int mdsmap_err; int mutex; int waiting_for_map; struct ceph_fs_client* fsc; } ;
struct ceph_fs_client {TYPE_3__* client; TYPE_1__* mount_options; } ;
struct TYPE_10__ {int fs_cluster_id; } ;
struct TYPE_9__ {TYPE_4__ monc; } ;
struct TYPE_7__ {char* mds_namespace; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct ceph_mds_client*,int *) ;
 int VAR_4 ;
 int FUNC_1 (void**) ;
 int FUNC_2 (void**) ;
 int FUNC_3 (void**,void*,int,int ) ;
 int FUNC_4 (TYPE_4__*,int ,int) ;
 int FUNC_5 (TYPE_4__*) ;
 int FUNC_6 (TYPE_4__*,int ,int ,int) ;
 int FUNC_7 (char*,int) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (char*) ;
 int FUNC_11 (char const*) ;
 int FUNC_12 (char const*,char*,int) ;

void FUNC_13(struct ceph_mds_client *VAR_5, struct ceph_msg *VAR_6)
{
 struct ceph_fs_client *VAR_7 = VAR_5->fsc;
 const char *VAR_8 = VAR_7->mount_options->mds_namespace;
 void *VAR_9 = VAR_6->front.iov_base;
 void *VAR_10 = VAR_9 + VAR_6->front.iov_len;
 u32 VAR_11;
 u32 VAR_12;
 u32 VAR_13;
 u32 VAR_14 = (u32)-1;
 u8 VAR_15, VAR_16;
 int VAR_17 = -VAR_2;

 FUNC_3(&VAR_9, VAR_10, sizeof(u32), VAR_4);
 VAR_11 = FUNC_1(&VAR_9);

 FUNC_7("handle_fsmap epoch %u\n", VAR_11);

 FUNC_3(&VAR_9, VAR_10, 2 + sizeof(u32), VAR_4);
 VAR_15 = FUNC_2(&VAR_9);
 VAR_16 = FUNC_2(&VAR_9);
 VAR_12 = FUNC_1(&VAR_9);

 FUNC_3(&VAR_9, VAR_10, sizeof(u32) * 3, VAR_4);
 VAR_9 += sizeof(u32) * 2;

 VAR_13 = FUNC_1(&VAR_9);
 while (VAR_13-- > 0) {
  void *VAR_18, *VAR_19;
  u32 VAR_20;
  u8 VAR_21, VAR_22;
  u32 VAR_23, VAR_24;

  FUNC_3(&VAR_9, VAR_10, 2 + sizeof(u32), VAR_4);
  VAR_21 = FUNC_2(&VAR_9);
  VAR_22 = FUNC_2(&VAR_9);
  VAR_20 = FUNC_1(&VAR_9);
  FUNC_3(&VAR_9, VAR_10, VAR_20, VAR_4);
  VAR_18 = VAR_9;
  VAR_19 = VAR_9 + VAR_20;
  VAR_9 = VAR_19;

  FUNC_3(&VAR_18, VAR_19, sizeof(u32) * 2, VAR_4);
  VAR_23 = FUNC_1(&VAR_18);
  VAR_24 = FUNC_1(&VAR_18);
  FUNC_3(&VAR_18, VAR_19, VAR_24, VAR_4);

  if (VAR_8 &&
      FUNC_11(VAR_8) == VAR_24 &&
      !FUNC_12(VAR_8, (char *)VAR_18, VAR_24)) {
   VAR_14 = VAR_23;
   break;
  }
 }

 FUNC_4(&VAR_7->client->monc, VAR_0, VAR_11);
 if (VAR_14 != (u32)-1) {
  VAR_7->client->monc.fs_cluster_id = VAR_14;
  FUNC_6(&VAR_7->client->monc, VAR_1,
       0, 1);
  FUNC_5(&VAR_7->client->monc);
 } else {
  VAR_17 = -VAR_3;
  goto err_out;
 }
 return;

bad:
 FUNC_10("error decoding fsmap\n");
err_out:
 FUNC_8(&VAR_5->mutex);
 VAR_5->mdsmap_err = VAR_17;
 FUNC_0(VAR_5, &VAR_5->waiting_for_map);
 FUNC_9(&VAR_5->mutex);
}
