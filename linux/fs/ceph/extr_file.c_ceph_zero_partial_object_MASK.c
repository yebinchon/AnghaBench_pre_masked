
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int i_mtime; } ;
struct ceph_osd_request {int r_mtime; } ;
struct ceph_inode_info {int i_layout; } ;
struct ceph_fs_client {TYPE_1__* client; } ;
typedef scalar_t__ loff_t ;
struct TYPE_2__ {int osdc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (struct ceph_osd_request*) ;
 int FUNC_1 (struct ceph_osd_request*) ;
 struct ceph_inode_info* FUNC_2 (struct inode*) ;
 struct ceph_fs_client* FUNC_3 (struct inode*) ;
 struct ceph_osd_request* FUNC_4 (int *,int *,int ,scalar_t__,scalar_t__*,int ,int,int,int ,int *,int ,int ,int) ;
 int FUNC_5 (struct ceph_osd_request*) ;
 int FUNC_6 (int *,struct ceph_osd_request*,int) ;
 int FUNC_7 (int *,struct ceph_osd_request*) ;
 int FUNC_8 (struct inode*) ;

__attribute__((used)) static int FUNC_9(struct inode *VAR_5,
        loff_t VAR_6, loff_t *VAR_7)
{
 struct ceph_inode_info *VAR_8 = FUNC_2(VAR_5);
 struct ceph_fs_client *VAR_9 = FUNC_3(VAR_5);
 struct ceph_osd_request *VAR_10;
 int VAR_11 = 0;
 loff_t VAR_12 = 0;
 int VAR_13;

 if (!VAR_7) {
  VAR_13 = VAR_6 ? VAR_1 : VAR_2;
  VAR_7 = &VAR_12;
 } else {
  VAR_13 = VAR_3;
 }

 VAR_10 = FUNC_4(&VAR_9->client->osdc, &VAR_8->i_layout,
     FUNC_8(VAR_5),
     VAR_6, VAR_7,
     0, 1, VAR_13,
     VAR_0,
     ((void*)0), 0, 0, 0);
 if (FUNC_0(VAR_10)) {
  VAR_11 = FUNC_1(VAR_10);
  goto out;
 }

 VAR_10->r_mtime = VAR_5->i_mtime;
 VAR_11 = FUNC_6(&VAR_9->client->osdc, VAR_10, 0);
 if (!VAR_11) {
  VAR_11 = FUNC_7(&VAR_9->client->osdc, VAR_10);
  if (VAR_11 == -VAR_4)
   VAR_11 = 0;
 }
 FUNC_5(VAR_10);

out:
 return VAR_11;
}
