
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ xfs_fileoff_t ;
struct xfs_inode {int i_mount; } ;
struct iomap {int dax_dev; int bdev; void* length; void* offset; int type; int addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct xfs_inode*) ;
 void* FUNC_1 (int ,scalar_t__) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void
FUNC_4(
 struct xfs_inode *VAR_2,
 struct iomap *VAR_3,
 xfs_fileoff_t VAR_4,
 xfs_fileoff_t VAR_5)
{
 VAR_3->addr = VAR_1;
 VAR_3->type = VAR_0;
 VAR_3->offset = FUNC_1(VAR_2->i_mount, VAR_4);
 VAR_3->length = FUNC_1(VAR_2->i_mount, VAR_5 - VAR_4);
 VAR_3->bdev = FUNC_2(FUNC_0(VAR_2));
 VAR_3->dax_dev = FUNC_3(FUNC_0(VAR_2));
}
