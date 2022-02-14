
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct extent_buffer {int dummy; } ;
struct btrfs_extent_data_ref {int dummy; } ;


 int FUNC_0 (struct extent_buffer*,struct btrfs_extent_data_ref*) ;
 int FUNC_1 (struct extent_buffer*,struct btrfs_extent_data_ref*) ;
 int FUNC_2 (struct extent_buffer*,struct btrfs_extent_data_ref*) ;
 int FUNC_3 (struct extent_buffer*,struct btrfs_extent_data_ref*) ;
 int FUNC_4 (char*,int ,int ,int ,int ) ;

__attribute__((used)) static void FUNC_5(struct extent_buffer *VAR_0,
      struct btrfs_extent_data_ref *VAR_1)
{
 FUNC_4("extent data backref root %llu objectid %llu offset %llu count %u\n",
        FUNC_3(VAR_0, VAR_1),
        FUNC_1(VAR_0, VAR_1),
        FUNC_2(VAR_0, VAR_1),
        FUNC_0(VAR_0, VAR_1));
}
