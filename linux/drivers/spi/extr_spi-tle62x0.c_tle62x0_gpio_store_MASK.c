
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tle62x0_state {int gpio_state; int lock; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;


 size_t VAR_0 ;
 int FUNC_0 (struct device*,char*,int,unsigned long) ;
 struct tle62x0_state* FUNC_1 (struct device*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 unsigned long FUNC_4 (char const*,char**,int ) ;
 int FUNC_5 (struct tle62x0_state*) ;
 int FUNC_6 (struct device_attribute*) ;

__attribute__((used)) static ssize_t FUNC_7(struct device *VAR_1,
  struct device_attribute *VAR_2,
  const char *VAR_3, size_t VAR_4)
{
 struct tle62x0_state *VAR_5 = FUNC_1(VAR_1);
 int VAR_6 = FUNC_6(VAR_2);
 unsigned long VAR_7;
 char *VAR_8;

 VAR_7 = FUNC_4(VAR_3, &VAR_8, 0);
 if (VAR_3 == VAR_8)
  return -VAR_0;

 FUNC_0(VAR_1, "setting gpio %d to %ld\n", VAR_6, VAR_7);

 FUNC_2(&VAR_5->lock);

 if (VAR_7)
  VAR_5->gpio_state |= 1 << VAR_6;
 else
  VAR_5->gpio_state &= ~(1 << VAR_6);

 FUNC_5(VAR_5);
 FUNC_3(&VAR_5->lock);

 return VAR_4;
}
