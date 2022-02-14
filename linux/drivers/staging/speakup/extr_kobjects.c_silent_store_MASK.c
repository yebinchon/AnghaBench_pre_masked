
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vc_data {int dummy; } ;
struct kobject {int dummy; } ;
struct kobj_attribute {int dummy; } ;
typedef size_t ssize_t ;
struct TYPE_4__ {int spinlock; } ;
struct TYPE_3__ {struct vc_data* d; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (char*,char) ;
 TYPE_2__ VAR_2 ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 () ;
 char VAR_3 ;
 int FUNC_4 (char const*) ;
 TYPE_1__* VAR_4 ;

__attribute__((used)) static ssize_t FUNC_5(struct kobject *VAR_5, struct kobj_attribute *VAR_6,
       const char *VAR_7, size_t VAR_8)
{
 int VAR_9;
 struct vc_data *VAR_10 = VAR_4[VAR_1].d;
 char VAR_11 = 0;
 char VAR_12;
 unsigned long VAR_13;

 VAR_9 = FUNC_4(VAR_7);
 if (VAR_9 > 0 && VAR_9 < 3) {
  VAR_11 = VAR_7[0];
  if (VAR_11 == '\n')
   VAR_11 = '0';
 }
 if (VAR_11 < '0' || VAR_11 > '7') {
  FUNC_0("silent value '%c' not in range (0,7)\n", VAR_11);
  return -VAR_0;
 }
 FUNC_1(&VAR_2.spinlock, VAR_13);
 if (VAR_11 & 2) {
  VAR_12 = 1;
  FUNC_3();
 } else {
  VAR_12 = 0;
 }
 if (VAR_11 & 4)
  VAR_12 |= 0x40;
 if (VAR_11 & 1)
  VAR_3 |= VAR_12;
 else
  VAR_3 &= ~VAR_12;
 FUNC_2(&VAR_2.spinlock, VAR_13);
 return VAR_8;
}
