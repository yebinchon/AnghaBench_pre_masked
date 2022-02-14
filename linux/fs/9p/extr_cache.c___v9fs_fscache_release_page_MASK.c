
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v9fs_inode {int fscache; } ;
struct page {TYPE_1__* mapping; } ;
struct inode {int dummy; } ;
typedef int gfp_t ;
struct TYPE_2__ {struct inode* host; } ;


 int FUNC_0 (int) ;
 struct v9fs_inode* FUNC_1 (struct inode*) ;
 int FUNC_2 (int ,struct page*,int ) ;

int FUNC_3(struct page *VAR_0, gfp_t VAR_1)
{
 struct inode *VAR_2 = VAR_0->mapping->host;
 struct v9fs_inode *VAR_3 = FUNC_1(VAR_2);

 FUNC_0(!VAR_3->fscache);

 return FUNC_2(VAR_3->fscache, VAR_0, VAR_1);
}
