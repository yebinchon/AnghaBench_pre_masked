
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tb_xdomain {int dummy; } ;
struct tb {int dummy; } ;


 int FUNC_0 (struct tb*,struct tb_xdomain*,int) ;
 int FUNC_1 (int,int) ;

__attribute__((used)) static int FUNC_2(struct tb *VAR_0, struct tb_xdomain *VAR_1)
{
 int VAR_2;

 VAR_2 = FUNC_0(VAR_0, VAR_1, 1);
 if (VAR_2)
  return VAR_2;

 FUNC_1(10, 50);
 return FUNC_0(VAR_0, VAR_1, 2);
}
