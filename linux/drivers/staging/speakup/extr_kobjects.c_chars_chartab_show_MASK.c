
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct kobject {int dummy; } ;
struct TYPE_3__ {int name; } ;
struct kobj_attribute {TYPE_1__ attr; } ;
typedef int ssize_t ;
struct TYPE_4__ {int spinlock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int,int ) ;
 int VAR_6 ;
 size_t VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (char*,size_t,char*,int,char*) ;
 TYPE_2__ VAR_10 ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 char** VAR_11 ;
 scalar_t__ FUNC_4 (char*,int ) ;

__attribute__((used)) static ssize_t FUNC_5(struct kobject *VAR_12,
      struct kobj_attribute *VAR_13, char *VAR_14)
{
 int VAR_15;
 int VAR_16 = 0;
 char *VAR_17;
 char *VAR_18 = VAR_14;
 size_t VAR_19 = VAR_7;
 unsigned long VAR_20;

 FUNC_2(&VAR_10.spinlock, VAR_20);
 *VAR_18 = '\0';
 for (VAR_15 = 0; VAR_15 < 256; VAR_15++) {
  if (VAR_19 <= 1)
   break;
  if (FUNC_4("characters", VAR_13->attr.name) == 0) {
   VAR_16 = FUNC_1(VAR_18, VAR_19, "%d\t%s\n",
     VAR_15, VAR_11[VAR_15]);
  } else {
   if (FUNC_0(VAR_15, VAR_4))
    VAR_17 = "B_CTL";
   else if (FUNC_0(VAR_15, VAR_9))
    VAR_17 = "WDLM";
   else if (FUNC_0(VAR_15, VAR_2))
    VAR_17 = "A_PUNC";
   else if (FUNC_0(VAR_15, VAR_8))
    VAR_17 = "PUNC";
   else if (FUNC_0(VAR_15, VAR_6))
    VAR_17 = "NUM";
   else if (FUNC_0(VAR_15, VAR_1))
    VAR_17 = "A_CAP";
   else if (FUNC_0(VAR_15, VAR_0))
    VAR_17 = "ALPHA";
   else if (FUNC_0(VAR_15, VAR_3))
    VAR_17 = "B_CAPSYM";
   else if (FUNC_0(VAR_15, VAR_5))
    VAR_17 = "B_SYM";
   else
    VAR_17 = "0";
   VAR_16 =
       FUNC_1(VAR_18, VAR_19, "%d\t%s\n", VAR_15, VAR_17);
  }
  VAR_19 -= VAR_16;
  VAR_18 += VAR_16;
 }
 FUNC_3(&VAR_10.spinlock, VAR_20);
 return VAR_18 - VAR_14;
}
