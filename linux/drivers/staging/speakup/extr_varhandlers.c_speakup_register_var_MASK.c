
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct var_t {int var_id; } ;
struct st_var_header {size_t var_id; int var_type; struct var_t* data; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;



 int FUNC_1 (int ,struct st_var_header*,int ) ;
 int FUNC_2 (char*,struct st_var_header*,int ) ;
 struct st_var_header* VAR_2 ;
 struct st_var_header** VAR_3 ;

void FUNC_3(struct var_t *VAR_4)
{
 static char VAR_5[2] = "\0";
 int VAR_6;
 struct st_var_header *VAR_7;

 FUNC_0(!VAR_4 || VAR_4->var_id < 0 || VAR_4->var_id >= VAR_1);
 if (!VAR_3[0]) {
  for (VAR_6 = 0; VAR_6 < VAR_1; VAR_6++) {
   VAR_7 = &VAR_2[VAR_6];
   VAR_3[VAR_7->var_id] = VAR_7;
   VAR_7->data = ((void*)0);
  }
 }
 VAR_7 = VAR_3[VAR_4->var_id];
 if (VAR_7->data)
  return;
 VAR_7->data = VAR_4;
 switch (VAR_7->var_type) {
 case 129:
  FUNC_2(VAR_5, VAR_7, 0);
  break;
 case 130:
 case 128:
  FUNC_1(0, VAR_7, VAR_0);
  break;
 default:
  break;
 }
}
