
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum media_request_state { ____Placeholder_media_request_state } media_request_state ;


 int FUNC_0 (char const**) ;
 int FUNC_1 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_2 (int) ;
 char const** VAR_1 ;

__attribute__((used)) static const char *
FUNC_3(enum media_request_state VAR_2)
{
 FUNC_1(FUNC_0(VAR_1) != VAR_0);

 if (FUNC_2(VAR_2 >= FUNC_0(VAR_1)))
  return "invalid";
 return VAR_1[VAR_2];
}
