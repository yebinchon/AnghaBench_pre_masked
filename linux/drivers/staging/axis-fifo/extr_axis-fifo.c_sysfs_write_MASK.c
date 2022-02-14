
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
struct axis_fifo {scalar_t__ base_addr; } ;
typedef int ssize_t ;


 struct axis_fifo* FUNC_0 (struct device*) ;
 int FUNC_1 (unsigned long,scalar_t__) ;
 int FUNC_2 (char const*,int ,unsigned long*) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_0, const char *VAR_1,
      size_t VAR_2, unsigned int VAR_3)
{
 struct axis_fifo *VAR_4 = FUNC_0(VAR_0);
 unsigned long VAR_5;
 int VAR_6;

 VAR_6 = FUNC_2(VAR_1, 0, &VAR_5);
 if (VAR_6 < 0)
  return VAR_6;

 FUNC_1(VAR_5, VAR_4->base_addr + VAR_3);

 return VAR_2;
}
