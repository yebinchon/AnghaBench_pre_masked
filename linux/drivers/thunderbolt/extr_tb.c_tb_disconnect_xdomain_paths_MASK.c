
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tb_xdomain {int is_unplugged; } ;
struct tb {int lock; } ;


 int FUNC_0 (struct tb*,struct tb_xdomain*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct tb *VAR_0, struct tb_xdomain *VAR_1)
{
 if (!VAR_1->is_unplugged) {
  FUNC_1(&VAR_0->lock);
  FUNC_0(VAR_0, VAR_1);
  FUNC_2(&VAR_0->lock);
 }
 return 0;
}
