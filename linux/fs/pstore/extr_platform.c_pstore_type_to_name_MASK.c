
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum pstore_type_id { ____Placeholder_pstore_type_id } pstore_type_id ;


 scalar_t__ FUNC_0 (char const**) ;
 int FUNC_1 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_2 (int) ;
 char const** VAR_1 ;

const char *FUNC_3(enum pstore_type_id VAR_2)
{
 FUNC_1(FUNC_0(VAR_1) != VAR_0);

 if (FUNC_2(VAR_2 >= VAR_0))
  return "unknown";

 return VAR_1[VAR_2];
}
