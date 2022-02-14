
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct btrfs_path {int * slots; int * nodes; } ;
struct btrfs_key {int dummy; } ;


 int FUNC_0 (int ,struct btrfs_key*,int ) ;
 int FUNC_1 (int ,struct btrfs_key*,int ) ;
 int FUNC_2 (struct btrfs_path*,int*) ;
 int FUNC_3 (struct btrfs_path*,int*,int) ;

__attribute__((used)) static int FUNC_4(struct btrfs_path *VAR_0,
   int *VAR_1, int VAR_2,
   int VAR_3,
   struct btrfs_key *VAR_4)
{
 int VAR_5;

 if (*VAR_1 == 0 || !VAR_3) {
  VAR_5 = FUNC_3(VAR_0, VAR_1, VAR_2);
 } else {
  VAR_5 = FUNC_2(VAR_0, VAR_1);
 }
 if (VAR_5 >= 0) {
  if (*VAR_1 == 0)
   FUNC_0(VAR_0->nodes[*VAR_1], VAR_4,
     VAR_0->slots[*VAR_1]);
  else
   FUNC_1(VAR_0->nodes[*VAR_1], VAR_4,
     VAR_0->slots[*VAR_1]);
 }
 return VAR_5;
}
