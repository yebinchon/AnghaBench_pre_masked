
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct kobject {int dummy; } ;
struct kobj_attribute {int dummy; } ;
typedef size_t ssize_t ;
typedef int in ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,char const*,size_t) ;
 int FUNC_2 (int *,int ,int) ;
 scalar_t__ FUNC_3 (int ,int **,int) ;
 scalar_t__ VAR_9 ;
 scalar_t__ FUNC_4 (int) ;

__attribute__((used)) static ssize_t FUNC_5(struct kobject *VAR_10,
     struct kobj_attribute *VAR_11,
     const char *VAR_12, size_t VAR_13)
{
 u8 VAR_14[16];

 if (!FUNC_0(VAR_0))
  return -VAR_1;

 if (!VAR_12 || !VAR_13)
  return -VAR_2;

 if (FUNC_4(VAR_9 != VAR_6))
  return -VAR_5;

 if (VAR_13 > 16)
  return -VAR_4;


 FUNC_2(VAR_14, 0, 16);
 FUNC_1(VAR_14, VAR_12, VAR_13);

 if (FUNC_3(VAR_7, &VAR_14, sizeof(VAR_14)) != VAR_8)
  return -VAR_3;

 return VAR_13;
}
