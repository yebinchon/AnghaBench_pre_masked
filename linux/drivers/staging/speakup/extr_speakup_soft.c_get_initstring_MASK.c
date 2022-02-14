
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char* synth_fmt; int value; } ;
struct TYPE_5__ {TYPE_1__ n; } ;
struct var_t {scalar_t__ var_id; TYPE_2__ u; } ;
typedef int buf ;
struct TYPE_6__ {struct var_t* vars; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (char*,int ,int) ;
 int FUNC_1 (char*,char*,...) ;
 TYPE_3__ VAR_5 ;

__attribute__((used)) static char *FUNC_2(void)
{
 static char VAR_6[40];
 char *VAR_7;
 struct var_t *VAR_8;

 FUNC_0(VAR_6, 0, sizeof(VAR_6));
 VAR_7 = VAR_6;
 VAR_8 = VAR_5.vars;
 while (VAR_8->var_id != VAR_3) {
  if (VAR_8->var_id != VAR_0 && VAR_8->var_id != VAR_1 &&
      VAR_8->var_id != VAR_4 && VAR_8->var_id != VAR_2)
   VAR_7 = VAR_7 + FUNC_1(VAR_7, VAR_8->u.n.synth_fmt,
       VAR_8->u.n.value);
  VAR_8++;
 }
 VAR_7 = VAR_7 + FUNC_1(VAR_7, "\n");
 return VAR_6;
}
