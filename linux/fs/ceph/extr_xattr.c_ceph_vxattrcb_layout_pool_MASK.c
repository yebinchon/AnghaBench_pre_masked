
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct ceph_osd_client {int lock; int osdmap; } ;
struct TYPE_4__ {int pool_id; } ;
struct TYPE_5__ {int i_sb; } ;
struct ceph_inode_info {TYPE_1__ i_layout; TYPE_2__ vfs_inode; } ;
struct ceph_fs_client {TYPE_3__* client; } ;
typedef size_t ssize_t ;
typedef int s64 ;
struct TYPE_6__ {struct ceph_osd_client osdc; } ;


 size_t FUNC_0 (char*,size_t,char*,int ) ;
 char* FUNC_1 (int ,int ) ;
 struct ceph_fs_client* FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (char*,char const*,size_t) ;
 size_t FUNC_5 (char const*) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static ssize_t FUNC_7(struct ceph_inode_info *VAR_0,
      char *VAR_1, size_t VAR_2)
{
 ssize_t VAR_3;
 struct ceph_fs_client *VAR_4 = FUNC_2(VAR_0->vfs_inode.i_sb);
 struct ceph_osd_client *VAR_5 = &VAR_4->client->osdc;
 s64 VAR_6 = VAR_0->i_layout.pool_id;
 const char *VAR_7;

 FUNC_3(&VAR_5->lock);
 VAR_7 = FUNC_1(VAR_5->osdmap, VAR_6);
 if (VAR_7) {
  VAR_3 = FUNC_5(VAR_7);
  if (VAR_3 <= VAR_2)
   FUNC_4(VAR_1, VAR_7, VAR_3);
 } else {
  VAR_3 = FUNC_0(VAR_1, VAR_2, "%lld", VAR_6);
 }
 FUNC_6(&VAR_5->lock);
 return VAR_3;
}
