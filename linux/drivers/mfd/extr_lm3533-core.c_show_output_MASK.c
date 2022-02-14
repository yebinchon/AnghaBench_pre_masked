
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


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct lm3533* FUNC_0 (struct device*) ;
 int FUNC_1 (struct lm3533*,int,int*) ;
 int FUNC_2 (char*,int ,char*,int) ;
 struct lm3533_device_attribute* FUNC_3 (struct device_attribute*) ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_6,
    struct device_attribute *VAR_7, char *VAR_8)
{
 struct lm3533 *VAR_9 = FUNC_0(VAR_6);
 struct lm3533_device_attribute *VAR_10 = FUNC_3(VAR_7);
 int VAR_11 = VAR_10->u.output.id;
 u8 VAR_12;
 u8 VAR_13;
 u8 VAR_14;
 int VAR_15;
 int VAR_16;

 if (VAR_10->type == VAR_0) {
  VAR_12 = VAR_3;
  VAR_15 = VAR_11 - 1;
  VAR_14 = VAR_1 << VAR_15;
 } else {
  if (VAR_11 < 4) {
   VAR_12 = VAR_3;
   VAR_15 = 2 * VAR_11;
  } else {
   VAR_12 = VAR_4;
   VAR_15 = 2 * (VAR_11 - 4);
  }
  VAR_14 = VAR_2 << VAR_15;
 }

 VAR_16 = FUNC_1(VAR_9, VAR_12, &VAR_13);
 if (VAR_16)
  return VAR_16;

 VAR_13 = (VAR_13 & VAR_14) >> VAR_15;

 return FUNC_2(VAR_8, VAR_5, "%u\n", VAR_13);
}
