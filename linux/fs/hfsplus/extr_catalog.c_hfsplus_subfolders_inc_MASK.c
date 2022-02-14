
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int i_sb; } ;
struct hfsplus_sb_info {int flags; } ;
struct TYPE_2__ {int subfolders; } ;


 TYPE_1__* FUNC_0 (struct inode*) ;
 struct hfsplus_sb_info* FUNC_1 (int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (int ,int *) ;

__attribute__((used)) static void FUNC_3(struct inode *VAR_1)
{
 struct hfsplus_sb_info *VAR_2 = FUNC_1(VAR_1->i_sb);

 if (FUNC_2(VAR_0, &VAR_2->flags)) {




  FUNC_0(VAR_1)->subfolders++;
 }
}
