
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct page {scalar_t__ private; int index; TYPE_1__* mapping; } ;
struct inode {int dummy; } ;
struct ceph_snap_context {int dummy; } ;
struct ceph_inode_info {int dummy; } ;
struct TYPE_2__ {struct inode* host; } ;


 int FUNC_0 (struct page*) ;
 int FUNC_1 (struct page*) ;
 unsigned int VAR_0 ;
 int FUNC_2 (struct page*) ;
 int FUNC_3 (struct page*) ;
 int FUNC_4 (int) ;
 struct ceph_inode_info* FUNC_5 (struct inode*) ;
 int FUNC_6 (struct inode*,struct page*) ;
 int FUNC_7 (struct ceph_snap_context*) ;
 int FUNC_8 (struct ceph_inode_info*,int,struct ceph_snap_context*) ;
 int FUNC_9 (char*,struct inode*,struct page*,int ,...) ;
 struct ceph_snap_context* FUNC_10 (struct page*) ;

__attribute__((used)) static void FUNC_11(struct page *VAR_1, unsigned int VAR_2,
    unsigned int VAR_3)
{
 struct inode *VAR_4;
 struct ceph_inode_info *VAR_5;
 struct ceph_snap_context *VAR_6 = FUNC_10(VAR_1);

 VAR_4 = VAR_1->mapping->host;
 VAR_5 = FUNC_5(VAR_4);

 if (VAR_2 != 0 || VAR_3 != VAR_0) {
  FUNC_9("%p invalidatepage %p idx %lu partial dirty page %u~%u\n",
       VAR_4, VAR_1, VAR_1->index, VAR_2, VAR_3);
  return;
 }

 FUNC_6(VAR_4, VAR_1);

 FUNC_4(!FUNC_2(VAR_1));
 if (!FUNC_3(VAR_1))
  return;

 FUNC_0(VAR_1);

 FUNC_9("%p invalidatepage %p idx %lu full dirty page\n",
      VAR_4, VAR_1, VAR_1->index);

 FUNC_8(VAR_5, 1, VAR_6);
 FUNC_7(VAR_6);
 VAR_1->private = 0;
 FUNC_1(VAR_1);
}
