
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct property {struct property* value; struct property* name; int length; } ;
typedef int gfp_t ;


 int VAR_0 ;
 int FUNC_0 (struct property*) ;
 struct property* FUNC_1 (struct property*,int ,int ) ;
 struct property* FUNC_2 (struct property*,int ) ;
 struct property* FUNC_3 (int,int ) ;
 int FUNC_4 (struct property*,int ) ;

struct property *FUNC_5(const struct property *VAR_1, gfp_t VAR_2)
{
 struct property *VAR_3;

 VAR_3 = FUNC_3(sizeof(*VAR_3), VAR_2);
 if (!VAR_3)
  return ((void*)0);







 VAR_3->name = FUNC_2(VAR_1->name, VAR_2);
 VAR_3->value = FUNC_1(VAR_1->value, VAR_1->length, VAR_2);
 VAR_3->length = VAR_1->length;
 if (!VAR_3->name || !VAR_3->value)
  goto err_free;


 FUNC_4(VAR_3, VAR_0);

 return VAR_3;

 err_free:
 FUNC_0(VAR_3->name);
 FUNC_0(VAR_3->value);
 FUNC_0(VAR_3);
 return ((void*)0);
}
