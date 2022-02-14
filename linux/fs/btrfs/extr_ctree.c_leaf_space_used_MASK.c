
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct extent_buffer {int dummy; } ;
struct btrfs_map_token {int dummy; } ;
struct btrfs_item {int dummy; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct extent_buffer*) ;
 int FUNC_2 (struct btrfs_map_token*,struct extent_buffer*) ;
 struct btrfs_item* FUNC_3 (int) ;
 int FUNC_4 (struct extent_buffer*,struct btrfs_item*,struct btrfs_map_token*) ;
 int FUNC_5 (struct extent_buffer*,struct btrfs_item*,struct btrfs_map_token*) ;
 int FUNC_6 (int,int) ;

__attribute__((used)) static int FUNC_7(struct extent_buffer *VAR_0, int VAR_1, int VAR_2)
{
 struct btrfs_item *VAR_3;
 struct btrfs_item *VAR_4;
 struct btrfs_map_token VAR_5;
 int VAR_6;
 int VAR_7 = FUNC_1(VAR_0);
 int VAR_8 = FUNC_6(VAR_7, VAR_1 + VAR_2) - 1;

 if (!VAR_2)
  return 0;
 FUNC_2(&VAR_5, VAR_0);
 VAR_3 = FUNC_3(VAR_1);
 VAR_4 = FUNC_3(VAR_8);
 VAR_6 = FUNC_4(VAR_0, VAR_3, &VAR_5) +
  FUNC_5(VAR_0, VAR_3, &VAR_5);
 VAR_6 = VAR_6 - FUNC_4(VAR_0, VAR_4, &VAR_5);
 VAR_6 += sizeof(struct btrfs_item) * VAR_2;
 FUNC_0(VAR_6 < 0);
 return VAR_6;
}
