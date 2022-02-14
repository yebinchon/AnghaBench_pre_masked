
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tb_service {int key; } ;
struct tb_property {int key; } ;
struct device {int dummy; } ;


 int FUNC_0 (int ,int ) ;
 struct tb_service* FUNC_1 (struct device*) ;

__attribute__((used)) static int FUNC_2(struct device *VAR_0, void *VAR_1)
{
 const struct tb_property *VAR_2 = VAR_1;
 struct tb_service *VAR_3;

 VAR_3 = FUNC_1(VAR_0);
 if (!VAR_3)
  return 0;

 return !FUNC_0(VAR_3->key, VAR_2->key);
}
