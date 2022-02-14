
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef enum qeth_ipa_return_codes { ____Placeholder_qeth_ipa_return_codes } qeth_ipa_return_codes ;
struct TYPE_3__ {int rc; char const* msg; } ;


 int FUNC_0 (TYPE_1__*) ;
 TYPE_1__* VAR_0 ;

const char *FUNC_1(enum qeth_ipa_return_codes VAR_1)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < FUNC_0(VAR_0) - 1; VAR_2++)
  if (VAR_0[VAR_2].rc == VAR_1)
   return VAR_0[VAR_2].msg;
 return VAR_0[VAR_2].msg;
}
