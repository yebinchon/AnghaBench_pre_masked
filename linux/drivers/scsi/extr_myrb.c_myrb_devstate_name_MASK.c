
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct myrb_devstate_name_entry {int state; char const* name; } ;
typedef enum myrb_devstate { ____Placeholder_myrb_devstate } myrb_devstate ;


 int FUNC_0 (struct myrb_devstate_name_entry*) ;
 struct myrb_devstate_name_entry* VAR_0 ;

__attribute__((used)) static const char *FUNC_1(enum myrb_devstate VAR_1)
{
 struct myrb_devstate_name_entry *VAR_2 = VAR_0;
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < FUNC_0(VAR_0); VAR_3++) {
  if (VAR_2[VAR_3].state == VAR_1)
   return VAR_2[VAR_3].name;
 }
 return "Unknown";
}
