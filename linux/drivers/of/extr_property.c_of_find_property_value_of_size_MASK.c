
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
struct property {void* value; size_t length; } ;
struct device_node {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_0 (int ) ;
 struct property* FUNC_1 (struct device_node const*,char const*,int *) ;

__attribute__((used)) static void *FUNC_2(const struct device_node *VAR_3,
   const char *VAR_4, u32 VAR_5, u32 VAR_6, size_t *VAR_7)
{
 struct property *VAR_8 = FUNC_1(VAR_3, VAR_4, ((void*)0));

 if (!VAR_8)
  return FUNC_0(-VAR_0);
 if (!VAR_8->value)
  return FUNC_0(-VAR_1);
 if (VAR_8->length < VAR_5)
  return FUNC_0(-VAR_2);
 if (VAR_6 && VAR_8->length > VAR_6)
  return FUNC_0(-VAR_2);

 if (VAR_7)
  *VAR_7 = VAR_8->length;

 return VAR_8->value;
}
