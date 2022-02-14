
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct inode {scalar_t__ i_ino; } ;
typedef int ntfschar ;
struct TYPE_6__ {scalar_t__ type; int name_len; int name; } ;
typedef TYPE_1__ ntfs_inode ;
struct TYPE_7__ {scalar_t__ mft_no; scalar_t__ type; int name_len; int name; } ;
typedef TYPE_2__ ntfs_attr ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 TYPE_1__* FUNC_1 (struct inode*) ;
 scalar_t__ FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int ,int ,int) ;
 scalar_t__ FUNC_4 (int) ;

int FUNC_5(struct inode *VAR_1, ntfs_attr *VAR_2)
{
 ntfs_inode *VAR_3;

 if (VAR_1->i_ino != VAR_2->mft_no)
  return 0;
 VAR_3 = FUNC_1(VAR_1);

 if (FUNC_2(!FUNC_0(VAR_3))) {

  if (FUNC_4(VAR_2->type != VAR_0))
   return 0;
 } else {

  if (VAR_3->type != VAR_2->type)
   return 0;
  if (VAR_3->name_len != VAR_2->name_len)
   return 0;
  if (VAR_2->name_len && FUNC_3(VAR_3->name, VAR_2->name,
    VAR_2->name_len * sizeof(ntfschar)))
   return 0;
 }

 return 1;
}
