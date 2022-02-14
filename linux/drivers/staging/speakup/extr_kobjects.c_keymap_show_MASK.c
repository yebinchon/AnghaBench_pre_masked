
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u_char ;
struct kobject {int dummy; } ;
struct kobj_attribute {int dummy; } ;
typedef int ssize_t ;
struct TYPE_2__ {int spinlock; } ;


 int VAR_0 ;
 int VAR_1 ;
 char VAR_2 ;
 TYPE_1__ VAR_3 ;
 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;
 scalar_t__* VAR_4 ;
 int FUNC_2 (char*,char*,int,...) ;

__attribute__((used)) static ssize_t FUNC_3(struct kobject *VAR_5, struct kobj_attribute *VAR_6,
      char *VAR_7)
{
 char *VAR_8 = VAR_7;
 int VAR_9;
 int VAR_10;
 int VAR_11;
 int VAR_12;
 u_char *VAR_13;
 u_char VAR_14;
 unsigned long VAR_15;

 FUNC_0(&VAR_3.spinlock, VAR_15);
 VAR_13 = VAR_4 + VAR_1;
 VAR_11 = (int)(*VAR_13);
 VAR_12 = (int)VAR_13[1];
 VAR_8 += FUNC_2(VAR_8, "%d, %d, %d,\n", VAR_0, VAR_11, VAR_12);
 VAR_13 += 2;



 for (VAR_10 = 0; VAR_10 <= VAR_11; VAR_10++) {
  for (VAR_9 = 0; VAR_9 <= VAR_12; VAR_9++) {
   VAR_14 = *VAR_13++;
   VAR_8 += FUNC_2(VAR_8, "%d,", (int)VAR_14);
   *VAR_8++ = (VAR_9 < VAR_12) ? VAR_2 : '\n';
  }
 }
 VAR_8 += FUNC_2(VAR_8, "0, %d\n", VAR_0);
 FUNC_1(&VAR_3.spinlock, VAR_15);
 return (int)(VAR_8 - VAR_7);
}
