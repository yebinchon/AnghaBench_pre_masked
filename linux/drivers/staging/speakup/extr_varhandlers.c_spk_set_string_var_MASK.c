
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ default_val; } ;
struct TYPE_3__ {TYPE_2__ s; } ;
struct var_t {TYPE_1__ u; } ;
struct st_var_header {scalar_t__ p_val; struct var_t* data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,char const*) ;

int FUNC_1(const char *VAR_4, struct st_var_header *VAR_5, int VAR_6)
{
 struct var_t *VAR_7 = VAR_5->data;

 if (!VAR_7)
  return -VAR_1;
 if (VAR_6 > VAR_3)
  return -VAR_0;
 if (!VAR_6) {
  if (!VAR_7->u.s.default_val)
   return 0;
  if (!VAR_5->p_val)
   VAR_5->p_val = VAR_7->u.s.default_val;
  if (VAR_5->p_val != VAR_7->u.s.default_val)
   FUNC_0((char *)VAR_5->p_val, VAR_7->u.s.default_val);
  return -VAR_2;
 } else if (VAR_5->p_val) {
  FUNC_0((char *)VAR_5->p_val, VAR_4);
 } else {
  return -VAR_0;
 }
 return 0;
}
