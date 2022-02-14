
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tb_xdomain {struct tb* tb; } ;
struct tb {int dummy; } ;
struct device {int dummy; } ;


 struct tb_xdomain* FUNC_0 (struct device*) ;
 int FUNC_1 (struct tb_xdomain*) ;

__attribute__((used)) static int FUNC_2(struct device *VAR_0, void *VAR_1)
{
 struct tb_xdomain *VAR_2;
 struct tb *VAR_3 = VAR_1;
 int VAR_4 = 0;

 VAR_2 = FUNC_0(VAR_0);
 if (VAR_2 && VAR_2->tb == VAR_3)
  VAR_4 = FUNC_1(VAR_2);

 return VAR_4;
}
