
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct btrfs_path {int * nodes; int * slots; } ;


 unsigned long FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,char*,unsigned long,int) ;
 int FUNC_3 (int ,char*,unsigned long,int) ;

__attribute__((used)) static int FUNC_4(struct btrfs_path *VAR_0,
        struct btrfs_path *VAR_1,
        char *VAR_2)
{
 int VAR_3;
 int VAR_4, VAR_5;
 unsigned long VAR_6, VAR_7;

 VAR_4 = FUNC_1(VAR_0->nodes[0], VAR_0->slots[0]);
 VAR_5 = FUNC_1(VAR_1->nodes[0], VAR_1->slots[0]);
 if (VAR_4 != VAR_5)
  return 1;

 VAR_6 = FUNC_0(VAR_0->nodes[0], VAR_0->slots[0]);
 VAR_7 = FUNC_0(VAR_1->nodes[0],
    VAR_1->slots[0]);

 FUNC_3(VAR_0->nodes[0], VAR_2, VAR_6, VAR_4);

 VAR_3 = FUNC_2(VAR_1->nodes[0], VAR_2, VAR_7, VAR_4);
 if (VAR_3)
  return 1;
 return 0;
}
