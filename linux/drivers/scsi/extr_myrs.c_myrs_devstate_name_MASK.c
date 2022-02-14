
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct myrs_devstate_name_entry {int state; char* name; } ;
typedef enum myrs_devstate { ____Placeholder_myrs_devstate } myrs_devstate ;


 int FUNC_0 (struct myrs_devstate_name_entry*) ;
 struct myrs_devstate_name_entry* VAR_0 ;

__attribute__((used)) static char *FUNC_1(enum myrs_devstate VAR_1)
{
 struct myrs_devstate_name_entry *VAR_2 = VAR_0;
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < FUNC_0(VAR_0); VAR_3++) {
  if (VAR_2[VAR_3].state == VAR_1)
   return VAR_2[VAR_3].name;
 }
 return ((void*)0);
}
