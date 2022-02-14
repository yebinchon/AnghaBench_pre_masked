
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct st_var_header {int var_id; } ;
struct st_bits_data {short mask; } ;
struct punc_var_t {size_t value; } ;
struct kobject {int dummy; } ;
struct TYPE_3__ {int name; } ;
struct kobj_attribute {TYPE_1__ attr; } ;
typedef int ssize_t ;
struct TYPE_4__ {int spinlock; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int ) ;
 TYPE_2__ VAR_1 ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 short* VAR_2 ;
 struct punc_var_t* FUNC_3 (int ) ;
 int * VAR_3 ;
 struct st_var_header* FUNC_4 (int ) ;

__attribute__((used)) static ssize_t FUNC_5(struct kobject *VAR_4, struct kobj_attribute *VAR_5,
    char *VAR_6)
{
 int VAR_7;
 char *VAR_8 = VAR_6;
 struct st_var_header *VAR_9;
 struct punc_var_t *VAR_10;
 struct st_bits_data *VAR_11;
 short VAR_12;
 unsigned long VAR_13;

 VAR_9 = FUNC_4(VAR_5->attr.name);
 if (!VAR_9) {
  FUNC_0("p_header is null, attr->attr.name is %s\n",
   VAR_5->attr.name);
  return -VAR_0;
 }

 VAR_10 = FUNC_3(VAR_9->var_id);
 if (!VAR_10) {
  FUNC_0("var is null, p_header->var_id is %i\n",
   VAR_9->var_id);
  return -VAR_0;
 }

 FUNC_1(&VAR_1.spinlock, VAR_13);
 VAR_11 = (struct st_bits_data *)&VAR_3[VAR_10->value];
 VAR_12 = VAR_11->mask;
 for (VAR_7 = 33; VAR_7 < 128; VAR_7++) {
  if (!(VAR_2[VAR_7] & VAR_12))
   continue;
  *VAR_8++ = (char)VAR_7;
 }
 FUNC_2(&VAR_1.spinlock, VAR_13);
 return VAR_8 - VAR_6;
}
