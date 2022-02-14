
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rb_root {int dummy; } ;
struct rb_node {int dummy; } ;


 struct rb_node* FUNC_0 (struct rb_root*) ;
 struct rb_node* FUNC_1 (struct rb_node*) ;

__attribute__((used)) static struct rb_node *FUNC_2(struct rb_root *VAR_0, unsigned int VAR_1)
{
 struct rb_node *VAR_2;
 unsigned int VAR_3;

 VAR_2 = FUNC_0(VAR_0);
 VAR_3 = 0;
 while (VAR_3 < VAR_1 && VAR_2) {
  VAR_2 = FUNC_1(VAR_2);
  VAR_3++;
 }

 return VAR_2;
}
