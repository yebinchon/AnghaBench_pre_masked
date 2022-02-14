
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct extent_buffer {int dummy; } ;
struct btrfs_chunk {int dummy; } ;


 int FUNC_0 (struct extent_buffer*,struct btrfs_chunk*) ;
 int FUNC_1 (struct extent_buffer*,struct btrfs_chunk*) ;
 int FUNC_2 (struct extent_buffer*,struct btrfs_chunk*) ;
 int FUNC_3 (struct extent_buffer*,struct btrfs_chunk*) ;
 int FUNC_4 (struct extent_buffer*,struct btrfs_chunk*,int) ;
 int FUNC_5 (struct extent_buffer*,struct btrfs_chunk*,int) ;
 int FUNC_6 (char*,int,int ,int ,...) ;

__attribute__((used)) static void FUNC_7(struct extent_buffer *VAR_0, struct btrfs_chunk *VAR_1)
{
 int VAR_2 = FUNC_1(VAR_0, VAR_1);
 int VAR_3;
 FUNC_6("\t\tchunk length %llu owner %llu type %llu num_stripes %d\n",
        FUNC_0(VAR_0, VAR_1), FUNC_2(VAR_0, VAR_1),
        FUNC_3(VAR_0, VAR_1), VAR_2);
 for (VAR_3 = 0 ; VAR_3 < VAR_2 ; VAR_3++) {
  FUNC_6("\t\t\tstripe %d devid %llu offset %llu\n", VAR_3,
        FUNC_4(VAR_0, VAR_1, VAR_3),
        FUNC_5(VAR_0, VAR_1, VAR_3));
 }
}
