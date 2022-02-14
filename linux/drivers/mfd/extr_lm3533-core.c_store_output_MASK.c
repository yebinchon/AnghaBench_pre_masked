
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_3__ {int id; } ;
struct TYPE_4__ {TYPE_1__ output; } ;
struct lm3533_device_attribute {scalar_t__ type; TYPE_2__ u; } ;
struct lm3533 {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 struct lm3533* FUNC_0 (struct device*) ;
 scalar_t__ FUNC_1 (char const*,int ,int *) ;
 int FUNC_2 (struct lm3533*,int,int ) ;
 int FUNC_3 (struct lm3533*,int,int ) ;
 struct lm3533_device_attribute* FUNC_4 (struct device_attribute*) ;

__attribute__((used)) static ssize_t FUNC_5(struct device *VAR_2,
     struct device_attribute *VAR_3,
     const char *VAR_4, size_t VAR_5)
{
 struct lm3533 *VAR_6 = FUNC_0(VAR_2);
 struct lm3533_device_attribute *VAR_7 = FUNC_4(VAR_3);
 int VAR_8 = VAR_7->u.output.id;
 u8 VAR_9;
 int VAR_10;

 if (FUNC_1(VAR_4, 0, &VAR_9))
  return -VAR_0;

 if (VAR_7->type == VAR_1)
  VAR_10 = FUNC_2(VAR_6, VAR_8, VAR_9);
 else
  VAR_10 = FUNC_3(VAR_6, VAR_8, VAR_9);

 if (VAR_10)
  return VAR_10;

 return VAR_5;
}
