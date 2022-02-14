
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef enum iscsi_error_types { ____Placeholder_iscsi_error_types } iscsi_error_types ;
struct TYPE_3__ {int error_code; char* err_string; } ;


 int FUNC_0 (TYPE_1__*) ;
 TYPE_1__* VAR_0 ;

char *FUNC_1(enum iscsi_error_types VAR_1)
{
 int VAR_2;
 char *VAR_3 = ((void*)0);

 for (VAR_2 = 0; VAR_2 < FUNC_0(VAR_0); VAR_2++) {
  if (VAR_0[VAR_2].error_code == VAR_1) {
   VAR_3 = VAR_0[VAR_2].err_string;
   break;
  }
 }
 return VAR_3;
}
