
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct tb_switch {TYPE_1__* tb; int * key; scalar_t__ authorized; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;
typedef int key ;
struct TYPE_2__ {int lock; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int *,char const*,int) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int *,int,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 size_t FUNC_5 () ;
 int FUNC_6 (char const*,char*) ;
 struct tb_switch* FUNC_7 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_8(struct device *VAR_5, struct device_attribute *VAR_6,
    const char *VAR_7, size_t VAR_8)
{
 struct tb_switch *VAR_9 = FUNC_7(VAR_5);
 u8 VAR_10[VAR_4];
 ssize_t VAR_11 = VAR_8;
 bool VAR_12 = 0;

 if (!FUNC_6(VAR_7, "\n"))
  VAR_12 = 1;
 else if (FUNC_0(VAR_10, VAR_7, sizeof(VAR_10)))
  return -VAR_1;

 if (!FUNC_3(&VAR_9->tb->lock))
  return FUNC_5();

 if (VAR_9->authorized) {
  VAR_11 = -VAR_0;
 } else {
  FUNC_1(VAR_9->key);
  if (VAR_12) {
   VAR_9->key = ((void*)0);
  } else {
   VAR_9->key = FUNC_2(VAR_10, sizeof(VAR_10), VAR_3);
   if (!VAR_9->key)
    VAR_11 = -VAR_2;
  }
 }

 FUNC_4(&VAR_9->tb->lock);
 return VAR_11;
}
