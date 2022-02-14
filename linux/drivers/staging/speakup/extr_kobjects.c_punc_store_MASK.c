
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct st_var_header {int var_id; } ;
struct punc_var_t {int value; } ;
struct kobject {int dummy; } ;
struct TYPE_3__ {int name; } ;
struct kobj_attribute {TYPE_1__ attr; } ;
typedef size_t ssize_t ;
struct TYPE_4__ {int spinlock; } ;


 size_t VAR_0 ;
 int FUNC_0 (char*,char const*,int) ;
 int FUNC_1 (char*,int ) ;
 TYPE_2__ VAR_1 ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 struct punc_var_t* FUNC_4 (int ) ;
 int FUNC_5 (char*,int ,int) ;
 struct st_var_header* FUNC_6 (int ) ;
 int FUNC_7 (char const*) ;

__attribute__((used)) static ssize_t FUNC_8(struct kobject *VAR_2, struct kobj_attribute *VAR_3,
     const char *VAR_4, size_t VAR_5)
{
 int VAR_6;
 struct st_var_header *VAR_7;
 struct punc_var_t *VAR_8;
 char VAR_9[100];
 unsigned long VAR_10;

 VAR_6 = FUNC_7(VAR_4);
 if (VAR_6 < 1 || VAR_6 > 99)
  return -VAR_0;

 VAR_7 = FUNC_6(VAR_3->attr.name);
 if (!VAR_7) {
  FUNC_1("p_header is null, attr->attr.name is %s\n",
   VAR_3->attr.name);
  return -VAR_0;
 }

 VAR_8 = FUNC_4(VAR_7->var_id);
 if (!VAR_8) {
  FUNC_1("var is null, p_header->var_id is %i\n",
   VAR_7->var_id);
  return -VAR_0;
 }

 FUNC_0(VAR_9, VAR_4, VAR_6);

 while (VAR_6 && VAR_9[VAR_6 - 1] == '\n')
  VAR_6--;
 VAR_9[VAR_6] = '\0';

 FUNC_2(&VAR_1.spinlock, VAR_10);

 if (*VAR_9 == 'd' || *VAR_9 == 'r')
  VAR_6 = FUNC_5(((void*)0), VAR_8->value, 3);
 else
  VAR_6 = FUNC_5(VAR_9, VAR_8->value, 3);

 FUNC_3(&VAR_1.spinlock, VAR_10);
 return VAR_5;
}
