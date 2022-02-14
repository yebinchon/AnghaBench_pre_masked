
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int value; } ;
struct TYPE_7__ {TYPE_2__ n; } ;
struct var_t {TYPE_3__ u; } ;
struct st_var_header {int var_type; char* name; scalar_t__ p_val; scalar_t__ data; } ;
struct kobject {int dummy; } ;
struct TYPE_5__ {int name; } ;
struct kobj_attribute {TYPE_1__ attr; } ;
typedef int ssize_t ;
struct TYPE_8__ {int spinlock; } ;


 int VAR_0 ;



 TYPE_4__ VAR_1 ;
 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;
 struct st_var_header* FUNC_2 (int ) ;
 int FUNC_3 (char*,char*,...) ;

ssize_t FUNC_4(struct kobject *VAR_2, struct kobj_attribute *VAR_3,
       char *VAR_4)
{
 int VAR_5 = 0;
 struct st_var_header *VAR_6;
 struct var_t *VAR_7;
 char *VAR_8;
 char *VAR_9;
 char VAR_10;
 unsigned long VAR_11;

 VAR_6 = FUNC_2(VAR_3->attr.name);
 if (!VAR_6)
  return -VAR_0;

 FUNC_0(&VAR_1.spinlock, VAR_11);
 VAR_7 = (struct var_t *)VAR_6->data;
 switch (VAR_6->var_type) {
 case 130:
 case 128:
  if (VAR_7)
   VAR_5 = FUNC_3(VAR_4, "%i\n", VAR_7->u.n.value);
  else
   VAR_5 = FUNC_3(VAR_4, "0\n");
  break;
 case 129:
  if (VAR_7) {
   VAR_8 = VAR_4;
   *VAR_8++ = '"';
   for (VAR_9 = (char *)VAR_6->p_val; (VAR_10 = *VAR_9); VAR_9++) {
    if (VAR_10 >= ' ' && VAR_10 < '~')
     *VAR_8++ = VAR_10;
    else
     VAR_8 += FUNC_3(VAR_8, "\\x%02x", VAR_10);
   }
   *VAR_8++ = '"';
   *VAR_8++ = '\n';
   *VAR_8 = '\0';
   VAR_5 = VAR_8 - VAR_4;
  } else {
   VAR_5 = FUNC_3(VAR_4, "\"\"\n");
  }
  break;
 default:
  VAR_5 = FUNC_3(VAR_4, "Bad parameter  %s, type %i\n",
        VAR_6->name, VAR_6->var_type);
  break;
 }
 FUNC_1(&VAR_1.spinlock, VAR_11);
 return VAR_5;
}
