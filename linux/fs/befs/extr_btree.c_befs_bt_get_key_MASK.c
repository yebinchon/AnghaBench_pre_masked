
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct super_block {int dummy; } ;
struct TYPE_2__ {int all_key_count; } ;
struct befs_btree_node {TYPE_1__ head; } ;
typedef int fs16 ;


 char* FUNC_0 (struct befs_btree_node*) ;
 int * FUNC_1 (struct befs_btree_node*) ;
 int FUNC_2 (struct super_block*,int ) ;

__attribute__((used)) static char *
FUNC_3(struct super_block *VAR_0, struct befs_btree_node *VAR_1,
  int VAR_2, u16 * VAR_3)
{
 int VAR_4;
 char *VAR_5;
 fs16 *VAR_6;

 if (VAR_2 < 0 || VAR_2 > VAR_1->head.all_key_count) {
  *VAR_3 = 0;
  return ((void*)0);
 }

 VAR_5 = FUNC_0(VAR_1);
 VAR_6 = FUNC_1(VAR_1);

 if (VAR_2 == 0)
  VAR_4 = 0;
 else
  VAR_4 = FUNC_2(VAR_0, VAR_6[VAR_2 - 1]);

 *VAR_3 = FUNC_2(VAR_0, VAR_6[VAR_2]) - VAR_4;

 return VAR_5 + VAR_4;
}
