
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long u64 ;
struct btrfs_free_space_ctl {unsigned long unit; } ;
struct btrfs_free_space {unsigned long offset; unsigned long bytes; int bitmap; } ;


 int VAR_0 ;
 int FUNC_0 (struct btrfs_free_space_ctl*,struct btrfs_free_space*,unsigned long const,unsigned long) ;
 int FUNC_1 (struct btrfs_free_space_ctl*,struct btrfs_free_space*,unsigned long const,unsigned long) ;
 unsigned long FUNC_2 (int ,int ,unsigned long) ;
 int FUNC_3 (struct btrfs_free_space_ctl*,struct btrfs_free_space*) ;
 unsigned long FUNC_4 (unsigned long,unsigned long,unsigned long const) ;
 unsigned long FUNC_5 (struct btrfs_free_space_ctl*,unsigned long const) ;
 struct btrfs_free_space* FUNC_6 (struct btrfs_free_space_ctl*,unsigned long const,int,int ) ;

__attribute__((used)) static bool FUNC_7(struct btrfs_free_space_ctl *VAR_1,
         struct btrfs_free_space *VAR_2,
         bool VAR_3)
{
 struct btrfs_free_space *VAR_4;
 unsigned long VAR_5;
 unsigned long VAR_6;
 const u64 VAR_7 = VAR_2->offset + VAR_2->bytes;
 const u64 VAR_8 = FUNC_5(VAR_1, VAR_7);
 u64 VAR_9;

 VAR_4 = FUNC_6(VAR_1, VAR_8, 1, 0);
 if (!VAR_4)
  return 0;

 VAR_5 = FUNC_4(VAR_4->offset, VAR_1->unit, VAR_7);
 VAR_6 = FUNC_2(VAR_4->bitmap, VAR_0, VAR_5);
 if (VAR_6 == VAR_5)
  return 0;
 VAR_9 = (VAR_6 - VAR_5) * VAR_1->unit;
 VAR_2->bytes += VAR_9;

 if (VAR_3)
  FUNC_1(VAR_1, VAR_4, VAR_7, VAR_9);
 else
  FUNC_0(VAR_1, VAR_4, VAR_7, VAR_9);

 if (!VAR_4->bytes)
  FUNC_3(VAR_1, VAR_4);

 return 1;
}
