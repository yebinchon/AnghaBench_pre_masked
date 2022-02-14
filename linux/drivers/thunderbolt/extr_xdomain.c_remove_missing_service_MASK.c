
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tb_xdomain {int properties; } ;
struct tb_service {int key; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct device*) ;
 int FUNC_1 (int ,int ,int ) ;
 struct tb_service* FUNC_2 (struct device*) ;

__attribute__((used)) static int FUNC_3(struct device *VAR_1, void *VAR_2)
{
 struct tb_xdomain *VAR_3 = VAR_2;
 struct tb_service *VAR_4;

 VAR_4 = FUNC_2(VAR_1);
 if (!VAR_4)
  return 0;

 if (!FUNC_1(VAR_3->properties, VAR_4->key,
         VAR_0))
  FUNC_0(VAR_1);

 return 0;
}
