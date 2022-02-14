
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct ceph_string {size_t len; char const* str; } ;
struct ceph_osd_client {int lock; int osdmap; } ;
struct TYPE_5__ {int stripe_unit; int stripe_count; int object_size; int pool_ns; int pool_id; } ;
struct TYPE_6__ {int i_sb; } ;
struct ceph_inode_info {TYPE_2__ i_layout; TYPE_3__ vfs_inode; } ;
struct ceph_fs_client {TYPE_1__* client; } ;
typedef size_t ssize_t ;
typedef int s64 ;
typedef int buf ;
struct TYPE_4__ {struct ceph_osd_client osdc; } ;


 char* FUNC_0 (int ,int ) ;
 int FUNC_1 (struct ceph_string*) ;
 struct ceph_fs_client* FUNC_2 (int ) ;
 struct ceph_string* FUNC_3 (int ) ;
 int FUNC_4 (char*,TYPE_3__*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (char*,char const*,size_t) ;
 size_t FUNC_7 (char*,int,char*,int,int,int,...) ;
 size_t FUNC_8 (char const*) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static ssize_t FUNC_10(struct ceph_inode_info *VAR_0, char *VAR_1,
        size_t VAR_2)
{
 struct ceph_fs_client *VAR_3 = FUNC_2(VAR_0->vfs_inode.i_sb);
 struct ceph_osd_client *VAR_4 = &VAR_3->client->osdc;
 struct ceph_string *VAR_5;
 s64 VAR_6 = VAR_0->i_layout.pool_id;
 const char *VAR_7;
 const char *VAR_8 = " pool_namespace=";
 char VAR_9[128];
 size_t VAR_10, VAR_11 = 0;
 ssize_t VAR_12;

 VAR_5 = FUNC_3(VAR_0->i_layout.pool_ns);

 FUNC_4("ceph_vxattrcb_layout %p\n", &VAR_0->vfs_inode);
 FUNC_5(&VAR_4->lock);
 VAR_7 = FUNC_0(VAR_4->osdmap, VAR_6);
 if (VAR_7) {
  VAR_10 = FUNC_7(VAR_9, sizeof(VAR_9),
  "stripe_unit=%u stripe_count=%u object_size=%u pool=",
  VAR_0->i_layout.stripe_unit, VAR_0->i_layout.stripe_count,
         VAR_0->i_layout.object_size);
  VAR_11 = VAR_10 + FUNC_8(VAR_7);
 } else {
  VAR_10 = FUNC_7(VAR_9, sizeof(VAR_9),
  "stripe_unit=%u stripe_count=%u object_size=%u pool=%lld",
  VAR_0->i_layout.stripe_unit, VAR_0->i_layout.stripe_count,
  VAR_0->i_layout.object_size, VAR_6);
  VAR_11 = VAR_10;
 }

 if (VAR_5)
  VAR_11 += FUNC_8(VAR_8) + VAR_5->len;

 VAR_12 = VAR_11;
 if (VAR_2 >= VAR_11) {
  FUNC_6(VAR_1, VAR_9, VAR_10);
  VAR_12 = VAR_10;
  if (VAR_7) {
   VAR_10 = FUNC_8(VAR_7);
   FUNC_6(VAR_1 + VAR_12, VAR_7, VAR_10);
   VAR_12 += VAR_10;
  }
  if (VAR_5) {
   VAR_10 = FUNC_8(VAR_8);
   FUNC_6(VAR_1 + VAR_12, VAR_8, VAR_10);
   VAR_12 += VAR_10;
   FUNC_6(VAR_1 + VAR_12, VAR_5->str, VAR_5->len);
   VAR_12 += VAR_5->len;
  }
 }
 FUNC_9(&VAR_4->lock);
 FUNC_1(VAR_5);
 return VAR_12;
}
