
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct extent_buffer {int refs; } ;
struct btrfs_root {int node; } ;


 scalar_t__ FUNC_0 (int *) ;
 struct extent_buffer* FUNC_1 (int ) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 () ;

struct extent_buffer *FUNC_5(struct btrfs_root *VAR_0)
{
 struct extent_buffer *VAR_1;

 while (1) {
  FUNC_2();
  VAR_1 = FUNC_1(VAR_0->node);







  if (FUNC_0(&VAR_1->refs)) {
   FUNC_3();
   break;
  }
  FUNC_3();
  FUNC_4();
 }
 return VAR_1;
}
