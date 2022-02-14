
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct ext4_renament {int * bh; TYPE_2__* dir; int inlined; TYPE_1__* de; } ;
typedef int handle_t ;
struct TYPE_7__ {int i_sb; int i_mtime; int i_ctime; } ;
struct TYPE_6__ {unsigned int file_type; int inode; } ;


 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (unsigned int) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (int *,TYPE_2__*,int *) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (int *,TYPE_2__*) ;
 int FUNC_8 (int ,int) ;
 int FUNC_9 (TYPE_2__*) ;
 scalar_t__ FUNC_10 (int) ;

__attribute__((used)) static int FUNC_11(handle_t *VAR_0, struct ext4_renament *VAR_1,
         unsigned VAR_2, unsigned VAR_3)
{
 int VAR_4;

 FUNC_0(VAR_1->bh, "get write access");
 VAR_4 = FUNC_6(VAR_0, VAR_1->bh);
 if (VAR_4)
  return VAR_4;
 VAR_1->de->inode = FUNC_2(VAR_2);
 if (FUNC_5(VAR_1->dir->i_sb))
  VAR_1->de->file_type = VAR_3;
 FUNC_9(VAR_1->dir);
 VAR_1->dir->i_ctime = VAR_1->dir->i_mtime =
  FUNC_3(VAR_1->dir);
 FUNC_7(VAR_0, VAR_1->dir);
 FUNC_0(VAR_1->bh, "call ext4_handle_dirty_metadata");
 if (!VAR_1->inlined) {
  VAR_4 = FUNC_4(VAR_0, VAR_1->dir, VAR_1->bh);
  if (FUNC_10(VAR_4)) {
   FUNC_8(VAR_1->dir->i_sb, VAR_4);
   return VAR_4;
  }
 }
 FUNC_1(VAR_1->bh);
 VAR_1->bh = ((void*)0);

 return 0;
}
