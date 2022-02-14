
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u_char ;
struct TYPE_3__ {int value; } ;
struct TYPE_4__ {TYPE_1__ n; } ;
struct var_t {TYPE_2__ u; } ;
struct st_var_header {scalar_t__ var_type; char* name; struct var_t* data; } ;
typedef int num_buf ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (char*,int,char*,int) ;
 int VAR_6 ;
 struct st_var_header* FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int,struct st_var_header*,int) ;
 int FUNC_3 (char*,char*) ;

__attribute__((used)) static int FUNC_4(u_char VAR_7)
{
 struct st_var_header *VAR_8;
 struct var_t *VAR_9;
 char VAR_10[32];
 char *VAR_11 = VAR_10;
 char *VAR_12;
 int VAR_13 = (int)VAR_7 - VAR_5;
 int VAR_14 = (VAR_13 & 1) ? VAR_1 : VAR_0;

 VAR_13 = VAR_13 / 2 + VAR_2;
 VAR_8 = FUNC_1(VAR_13);
 if (!VAR_8)
  return -1;
 if (VAR_8->var_type != VAR_4)
  return -1;
 VAR_9 = VAR_8->data;
 if (FUNC_2(1, VAR_8, VAR_14) != 0)
  return -1;
 if (!VAR_6) {
  for (VAR_12 = VAR_8->name; *VAR_12; VAR_12++) {
   if (*VAR_12 == '_')
    *VAR_11 = VAR_3;
   else
    *VAR_11++ = *VAR_12;
  }
 }
 FUNC_0(VAR_11, sizeof(VAR_10) - (VAR_11 - VAR_10), " %d ",
   VAR_9->u.n.value);
 FUNC_3("%s", VAR_10);
 return 0;
}
