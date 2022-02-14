
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum place_holder_in_cap_bitmap { ____Placeholder_place_holder_in_cap_bitmap } place_holder_in_cap_bitmap ;


 int FUNC_0 (char const**) ;
 char const** VAR_0 ;

__attribute__((used)) static const char *FUNC_1(enum place_holder_in_cap_bitmap VAR_1)
{
 if (VAR_1 >= FUNC_0(VAR_0))
  return "UNKNOWN";
 return VAR_0[VAR_1];
}
