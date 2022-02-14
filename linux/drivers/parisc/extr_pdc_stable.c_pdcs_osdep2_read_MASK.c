
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct kobject {int dummy; } ;
struct kobj_attribute {int dummy; } ;
typedef int ssize_t ;
typedef int result ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_0 (scalar_t__,int*,int) ;
 int VAR_5 ;
 int FUNC_1 (char*,char*,int) ;
 scalar_t__ FUNC_2 (int) ;

__attribute__((used)) static ssize_t FUNC_3(struct kobject *VAR_6,
    struct kobj_attribute *VAR_7, char *VAR_8)
{
 char *VAR_9 = VAR_8;
 unsigned long VAR_10;
 unsigned short VAR_11;
 u32 VAR_12;

 if (FUNC_2(VAR_5 <= 224))
  return -VAR_2;

 VAR_10 = VAR_5 - 224;

 if (!VAR_8)
  return -VAR_0;

 for (VAR_11=0; VAR_11<VAR_10; VAR_11+=4) {
  if (FUNC_2(FUNC_0(VAR_3 + VAR_11, &VAR_12,
     sizeof(VAR_12)) != VAR_4))
   return -VAR_1;
  VAR_9 += FUNC_1(VAR_9, "0x%.8x\n", VAR_12);
 }

 return VAR_9 - VAR_8;
}
