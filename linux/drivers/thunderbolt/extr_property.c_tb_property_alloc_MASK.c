
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tb_property {int type; int list; int key; } ;
typedef enum tb_property_type { ____Placeholder_tb_property_type } tb_property_type ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 struct tb_property* FUNC_1 (int,int ) ;
 int FUNC_2 (int ,char const*) ;

__attribute__((used)) static struct tb_property *
FUNC_3(const char *VAR_1, enum tb_property_type VAR_2)
{
 struct tb_property *VAR_3;

 VAR_3 = FUNC_1(sizeof(*VAR_3), VAR_0);
 if (!VAR_3)
  return ((void*)0);

 FUNC_2(VAR_3->key, VAR_1);
 VAR_3->type = VAR_2;
 FUNC_0(&VAR_3->list);

 return VAR_3;
}
