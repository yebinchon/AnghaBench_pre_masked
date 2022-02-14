
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct inode {int * i_op; int i_mode; } ;
struct ext4_renament {TYPE_2__* dir; TYPE_1__* dentry; } ;
typedef int handle_t ;
struct TYPE_4__ {int i_sb; } ;
struct TYPE_3__ {int d_name; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_1 (struct inode*) ;
 int FUNC_2 (struct inode*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int * FUNC_3 () ;
 int FUNC_4 (int *) ;
 struct inode* FUNC_5 (TYPE_2__*,int,int *,int ,int *,int ,int) ;
 scalar_t__ FUNC_6 (int ,int*) ;
 int VAR_6 ;
 int FUNC_7 (struct inode*,int ,int ) ;

__attribute__((used)) static struct inode *FUNC_8(struct ext4_renament *VAR_7,
           int VAR_8, handle_t **VAR_9)
{
 struct inode *VAR_10;
 handle_t *VAR_11;
 int VAR_12 = 0;





 VAR_8 += (FUNC_0(VAR_7->dir->i_sb) +
      VAR_2 + 4);
retry:
 VAR_10 = FUNC_5(VAR_7->dir, VAR_3 | VAR_5,
      &VAR_7->dentry->d_name, 0, ((void*)0),
      VAR_1, VAR_8);

 VAR_11 = FUNC_3();
 if (FUNC_1(VAR_10)) {
  if (VAR_11)
   FUNC_4(VAR_11);
  if (FUNC_2(VAR_10) == -VAR_0 &&
      FUNC_6(VAR_7->dir->i_sb, &VAR_12))
   goto retry;
 } else {
  *VAR_9 = VAR_11;
  FUNC_7(VAR_10, VAR_10->i_mode, VAR_4);
  VAR_10->i_op = &VAR_6;
 }
 return VAR_10;
}
