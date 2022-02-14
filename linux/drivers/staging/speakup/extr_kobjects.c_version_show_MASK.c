
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kobject {int dummy; } ;
struct kobj_attribute {int dummy; } ;
typedef int ssize_t ;
struct TYPE_2__ {char* name; char* version; } ;


 char* VAR_0 ;
 int FUNC_0 (char*,char*,char*,...) ;
 TYPE_1__* VAR_1 ;

__attribute__((used)) static ssize_t FUNC_1(struct kobject *VAR_2, struct kobj_attribute *VAR_3,
       char *VAR_4)
{
 char *VAR_5;

 VAR_5 = VAR_4;
 VAR_5 += FUNC_0(VAR_5, "Speakup version %s\n", VAR_0);
 if (VAR_1)
  VAR_5 += FUNC_0(VAR_5, "%s synthesizer driver version %s\n",
  VAR_1->name, VAR_1->version);
 return VAR_5 - VAR_4;
}
