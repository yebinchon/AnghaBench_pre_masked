
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct buffer_head {int b_state; int b_count; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;

__attribute__((used)) static inline int FUNC_1(struct buffer_head *VAR_2)
{
 return FUNC_0(&VAR_2->b_count) |
  (VAR_2->b_state & ((1 << VAR_0) | (1 << VAR_1)));
}
