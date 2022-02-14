
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct page {scalar_t__ index; } ;
struct inode {int i_mapping; } ;
struct TYPE_3__ {int file; } ;
typedef TYPE_1__ nfs_readdir_descriptor_t ;


 int FUNC_0 (struct page*) ;
 struct inode* FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ,scalar_t__,int) ;
 int FUNC_3 (TYPE_1__*,struct page*,struct inode*) ;
 int FUNC_4 (struct inode*,int ) ;
 int FUNC_5 (struct page*) ;

__attribute__((used)) static
int FUNC_6(void *VAR_0, struct page* VAR_1)
{
 nfs_readdir_descriptor_t *VAR_2 = VAR_0;
 struct inode *VAR_3 = FUNC_1(VAR_2->file);
 int VAR_4;

 VAR_4 = FUNC_3(VAR_2, VAR_1, VAR_3);
 if (VAR_4 < 0)
  goto error;
 FUNC_0(VAR_1);

 if (FUNC_2(VAR_3->i_mapping, VAR_1->index + 1, -1) < 0) {

  FUNC_4(VAR_3, VAR_3->i_mapping);
 }
 FUNC_5(VAR_1);
 return 0;
 error:
 FUNC_5(VAR_1);
 return VAR_4;
}
