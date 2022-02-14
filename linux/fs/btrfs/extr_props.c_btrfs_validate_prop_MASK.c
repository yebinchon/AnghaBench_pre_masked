
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct prop_handler {int (* validate ) (char const*,size_t) ;} ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 struct prop_handler* FUNC_0 (char const*,int *) ;
 scalar_t__ FUNC_1 (char const*) ;
 int FUNC_2 (char const*,size_t) ;

int FUNC_3(const char *VAR_2, const char *VAR_3, size_t VAR_4)
{
 const struct prop_handler *VAR_5;

 if (FUNC_1(VAR_2) <= VAR_1)
  return -VAR_0;

 VAR_5 = FUNC_0(VAR_2, ((void*)0));
 if (!VAR_5)
  return -VAR_0;

 if (VAR_4 == 0)
  return 0;

 return VAR_5->validate(VAR_3, VAR_4);
}
