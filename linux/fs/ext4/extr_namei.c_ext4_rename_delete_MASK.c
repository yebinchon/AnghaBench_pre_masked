
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_7__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct ext4_renament {TYPE_3__* dir; TYPE_2__* dentry; int bh; TYPE_7__* de; TYPE_1__* inode; } ;
typedef int handle_t ;
struct TYPE_12__ {scalar_t__ name_len; int name; int inode; } ;
struct TYPE_11__ {scalar_t__ len; int name; } ;
struct TYPE_10__ {int i_nlink; } ;
struct TYPE_9__ {TYPE_5__ d_name; } ;
struct TYPE_8__ {scalar_t__ i_ino; } ;


 int VAR_0 ;
 int FUNC_0 (int *,TYPE_3__*,TYPE_7__*,int ) ;
 int FUNC_1 (int *,TYPE_3__*,TYPE_5__*) ;
 int FUNC_2 (TYPE_3__*,char*,int ,int) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ,int ,scalar_t__) ;

__attribute__((used)) static void FUNC_5(handle_t *VAR_1, struct ext4_renament *VAR_2,
          int VAR_3)
{
 int VAR_4;






 if (FUNC_3(VAR_2->de->inode) != VAR_2->inode->i_ino ||
     VAR_2->de->name_len != VAR_2->dentry->d_name.len ||
     FUNC_4(VAR_2->de->name, VAR_2->dentry->d_name.name,
      VAR_2->de->name_len) ||
     VAR_3) {
  VAR_4 = FUNC_1(VAR_1, VAR_2->dir,
      &VAR_2->dentry->d_name);
 } else {
  VAR_4 = FUNC_0(VAR_1, VAR_2->dir, VAR_2->de, VAR_2->bh);
  if (VAR_4 == -VAR_0) {
   VAR_4 = FUNC_1(VAR_1, VAR_2->dir,
       &VAR_2->dentry->d_name);
  }
 }

 if (VAR_4) {
  FUNC_2(VAR_2->dir,
       "Deleting old file: nlink %d, error=%d",
       VAR_2->dir->i_nlink, VAR_4);
 }
}
