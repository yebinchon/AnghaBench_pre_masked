
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef enum ibmvfc_ae_link_state { ____Placeholder_ibmvfc_ae_link_state } ibmvfc_ae_link_state ;
struct TYPE_3__ {int state; char const* desc; } ;


 int FUNC_0 (TYPE_1__*) ;
 TYPE_1__* VAR_0 ;

__attribute__((used)) static const char *FUNC_1(enum ibmvfc_ae_link_state VAR_1)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < FUNC_0(VAR_0); VAR_2++)
  if (VAR_0[VAR_2].state == VAR_1)
   return VAR_0[VAR_2].desc;

 return "";
}
