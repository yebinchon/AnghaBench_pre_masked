
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct btrfs_io_ctl {int cur; int index; } ;
struct btrfs_free_space {int bitmap; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct btrfs_io_ctl*,int ) ;
 int FUNC_2 (struct btrfs_io_ctl*) ;

__attribute__((used)) static int FUNC_3(struct btrfs_io_ctl *VAR_0,
         struct btrfs_free_space *VAR_1)
{
 int VAR_2;

 VAR_2 = FUNC_1(VAR_0, VAR_0->index);
 if (VAR_2)
  return VAR_2;

 FUNC_0(VAR_1->bitmap, VAR_0->cur);
 FUNC_2(VAR_0);

 return 0;
}
