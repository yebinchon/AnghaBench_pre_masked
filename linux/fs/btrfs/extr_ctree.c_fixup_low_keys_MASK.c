
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct extent_buffer {int dummy; } ;
struct btrfs_path {int* slots; struct extent_buffer** nodes; } ;
struct btrfs_disk_key {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct extent_buffer*) ;
 int FUNC_2 (struct extent_buffer*,struct btrfs_disk_key*,int) ;
 int FUNC_3 (struct extent_buffer*,int,int ,int ) ;

__attribute__((used)) static void FUNC_4(struct btrfs_path *VAR_3,
      struct btrfs_disk_key *VAR_4, int VAR_5)
{
 int VAR_6;
 struct extent_buffer *VAR_7;
 int VAR_8;

 for (VAR_6 = VAR_5; VAR_6 < VAR_0; VAR_6++) {
  int VAR_9 = VAR_3->slots[VAR_6];

  if (!VAR_3->nodes[VAR_6])
   break;
  VAR_7 = VAR_3->nodes[VAR_6];
  VAR_8 = FUNC_3(VAR_7, VAR_9, VAR_2,
    VAR_1);
  FUNC_0(VAR_8 < 0);
  FUNC_2(VAR_7, VAR_4, VAR_9);
  FUNC_1(VAR_3->nodes[VAR_6]);
  if (VAR_9 != 0)
   break;
 }
}
