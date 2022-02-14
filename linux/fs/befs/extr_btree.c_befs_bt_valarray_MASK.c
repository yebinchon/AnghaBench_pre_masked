
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int all_key_count; } ;
struct befs_btree_node {TYPE_1__ head; } ;
typedef int fs64 ;
typedef int fs16 ;


 scalar_t__ FUNC_0 (struct befs_btree_node*) ;

__attribute__((used)) static fs64 *
FUNC_1(struct befs_btree_node *VAR_0)
{
 void *VAR_1 = (void *) FUNC_0(VAR_0);
 size_t VAR_2 = VAR_0->head.all_key_count * sizeof (fs16);

 return (fs64 *) (VAR_1 + VAR_2);
}
