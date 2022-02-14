
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_int64_t ;
struct TYPE_4__ {int vi_immed; } ;
struct vxfs_inode_info {TYPE_2__ vii_immed; } ;
struct page {scalar_t__ index; TYPE_1__* mapping; } ;
struct file {int dummy; } ;
typedef int caddr_t ;
struct TYPE_3__ {int host; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct page*) ;
 struct vxfs_inode_info* FUNC_1 (int ) ;
 int FUNC_2 (struct page*) ;
 int FUNC_3 (struct page*) ;
 int FUNC_4 (struct page*) ;
 int FUNC_5 (int ,int,int ) ;
 int FUNC_6 (struct page*) ;

__attribute__((used)) static int
FUNC_7(struct file *VAR_2, struct page *VAR_3)
{
 struct vxfs_inode_info *VAR_4 = FUNC_1(VAR_3->mapping->host);
 u_int64_t VAR_5 = (u_int64_t)VAR_3->index << VAR_0;
 caddr_t VAR_6;

 VAR_6 = FUNC_3(VAR_3);
 FUNC_5(VAR_6, VAR_4->vii_immed.vi_immed + VAR_5, VAR_1);
 FUNC_4(VAR_3);

 FUNC_2(VAR_3);
 FUNC_0(VAR_3);
        FUNC_6(VAR_3);

 return 0;
}
