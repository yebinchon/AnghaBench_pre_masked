
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct simple_xattr {size_t size; int value; } ;


 int VAR_0 ;
 struct simple_xattr* FUNC_0 (size_t,int ) ;
 int FUNC_1 (int ,void const*,size_t) ;

struct simple_xattr *FUNC_2(const void *VAR_1, size_t VAR_2)
{
 struct simple_xattr *VAR_3;
 size_t VAR_4;


 VAR_4 = sizeof(*VAR_3) + VAR_2;
 if (VAR_4 < sizeof(*VAR_3))
  return ((void*)0);

 VAR_3 = FUNC_0(VAR_4, VAR_0);
 if (!VAR_3)
  return ((void*)0);

 VAR_3->size = VAR_2;
 FUNC_1(VAR_3->value, VAR_1, VAR_2);
 return VAR_3;
}
