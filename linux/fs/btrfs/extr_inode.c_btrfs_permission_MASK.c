
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int umode_t ;
struct inode {int i_mode; } ;
struct btrfs_root {int dummy; } ;
struct TYPE_2__ {int flags; struct btrfs_root* root; } ;


 TYPE_1__* FUNC_0 (struct inode*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (struct btrfs_root*) ;
 int FUNC_5 (struct inode*,int) ;

__attribute__((used)) static int FUNC_6(struct inode *VAR_4, int VAR_5)
{
 struct btrfs_root *VAR_6 = FUNC_0(VAR_4)->root;
 umode_t VAR_7 = VAR_4->i_mode;

 if (VAR_5 & VAR_3 &&
     (FUNC_3(VAR_7) || FUNC_1(VAR_7) || FUNC_2(VAR_7))) {
  if (FUNC_4(VAR_6))
   return -VAR_2;
  if (FUNC_0(VAR_4)->flags & VAR_0)
   return -VAR_1;
 }
 return FUNC_5(VAR_4, VAR_5);
}
