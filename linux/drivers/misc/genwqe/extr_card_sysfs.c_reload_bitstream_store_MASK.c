
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct genwqe_dev {scalar_t__ card_state; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 struct genwqe_dev* FUNC_0 (struct device*) ;
 scalar_t__ FUNC_1 (char const*,int ,int*) ;

__attribute__((used)) static ssize_t FUNC_2(struct device *VAR_5,
    struct device_attribute *VAR_6,
    const char *VAR_7, size_t VAR_8)
{
 int VAR_9;
 struct genwqe_dev *VAR_10 = FUNC_0(VAR_5);

 if (FUNC_1(VAR_7, 0, &VAR_9) < 0)
  return -VAR_0;

 if (VAR_9 == 0x1) {
  if (VAR_10->card_state == VAR_3 ||
      VAR_10->card_state == VAR_4)
   VAR_10->card_state = VAR_2;
  else
   return -VAR_1;
 } else {
  return -VAR_0;
 }

 return VAR_8;
}
