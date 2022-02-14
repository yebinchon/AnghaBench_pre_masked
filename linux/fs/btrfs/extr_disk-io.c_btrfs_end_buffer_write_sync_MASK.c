
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct buffer_head {scalar_t__ b_private; } ;
struct btrfs_device {int name; int fs_info; } ;


 int VAR_0 ;
 int FUNC_0 (struct btrfs_device*,int ) ;
 int FUNC_1 (int ,char*,int ) ;
 int FUNC_2 (struct buffer_head*) ;
 int FUNC_3 (struct buffer_head*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct buffer_head*) ;
 int FUNC_6 (struct buffer_head*) ;

__attribute__((used)) static void FUNC_7(struct buffer_head *VAR_1, int VAR_2)
{
 if (VAR_2) {
  FUNC_5(VAR_1);
 } else {
  struct btrfs_device *VAR_3 = (struct btrfs_device *)
   VAR_1->b_private;

  FUNC_1(VAR_3->fs_info,
    "lost page write due to IO error on %s",
       FUNC_4(VAR_3->name));



  FUNC_2(VAR_1);
  FUNC_0(VAR_3, VAR_0);
 }
 FUNC_6(VAR_1);
 FUNC_3(VAR_1);
}
