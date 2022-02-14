
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pnp_id {char* id; struct pnp_id* next; } ;
struct pnp_dev {struct pnp_id* id; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int FUNC_0 (char*,char*,char*) ;
 struct pnp_dev* FUNC_1 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_2(struct device *VAR_0, struct device_attribute *VAR_1,
         char *VAR_2)
{
 char *VAR_3 = VAR_2;
 struct pnp_dev *VAR_4 = FUNC_1(VAR_0);
 struct pnp_id *VAR_5 = VAR_4->id;

 while (VAR_5) {
  VAR_3 += FUNC_0(VAR_3, "%s\n", VAR_5->id);
  VAR_5 = VAR_5->next;
 }
 return (VAR_3 - VAR_2);
}
