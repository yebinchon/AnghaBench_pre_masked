
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct extent_buffer {int dummy; } ;
struct btrfs_key {int dummy; } ;


 int FUNC_0 (struct extent_buffer*,struct btrfs_key const*,int,int*) ;

__attribute__((used)) static int FUNC_1(struct extent_buffer *VAR_0, const struct btrfs_key *VAR_1,
        int VAR_2, int *VAR_3, int *VAR_4)
{
 if (*VAR_3 != 0) {
  *VAR_3 = FUNC_0(VAR_0, VAR_1, VAR_2, VAR_4);
  return *VAR_3;
 }

 *VAR_4 = 0;

 return 0;
}
