
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct extent_state {unsigned int state; scalar_t__ end; scalar_t__ start; int rb_node; int wq; } ;
struct extent_io_tree {scalar_t__ dirty_bytes; int state; scalar_t__ private_data; } ;
struct extent_changeset {int dummy; } ;


 int FUNC_0 (int) ;
 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct extent_state*,unsigned int,struct extent_changeset*,int ) ;
 int FUNC_4 (scalar_t__,struct extent_state*,unsigned int*) ;
 scalar_t__ FUNC_5 (struct extent_state*) ;
 int FUNC_6 (struct extent_state*) ;
 scalar_t__ FUNC_7 (scalar_t__) ;
 int FUNC_8 (struct extent_io_tree*,struct extent_state*) ;
 struct extent_state* FUNC_9 (struct extent_state*) ;
 int FUNC_10 (int *,int *) ;
 int FUNC_11 (int *) ;

__attribute__((used)) static struct extent_state *FUNC_12(struct extent_io_tree *VAR_2,
         struct extent_state *VAR_3,
         unsigned *VAR_4, int VAR_5,
         struct extent_changeset *VAR_6)
{
 struct extent_state *VAR_7;
 unsigned VAR_8 = *VAR_4 & ~VAR_0;
 int VAR_9;

 if ((VAR_8 & VAR_1) && (VAR_3->state & VAR_1)) {
  u64 VAR_10 = VAR_3->end - VAR_3->start + 1;
  FUNC_2(VAR_10 > VAR_2->dirty_bytes);
  VAR_2->dirty_bytes -= VAR_10;
 }

 if (VAR_2->private_data && FUNC_7(VAR_2->private_data))
  FUNC_4(VAR_2->private_data, VAR_3, VAR_4);

 VAR_9 = FUNC_3(VAR_3, VAR_8, VAR_6, 0);
 FUNC_0(VAR_9 < 0);
 VAR_3->state &= ~VAR_8;
 if (VAR_5)
  FUNC_11(&VAR_3->wq);
 if (VAR_3->state == 0) {
  VAR_7 = FUNC_9(VAR_3);
  if (FUNC_5(VAR_3)) {
   FUNC_10(&VAR_3->rb_node, &VAR_2->state);
   FUNC_1(&VAR_3->rb_node);
   FUNC_6(VAR_3);
  } else {
   FUNC_2(1);
  }
 } else {
  FUNC_8(VAR_2, VAR_3);
  VAR_7 = FUNC_9(VAR_3);
 }
 return VAR_7;
}
