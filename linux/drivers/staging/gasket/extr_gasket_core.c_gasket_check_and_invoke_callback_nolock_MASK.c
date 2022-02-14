
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gasket_dev {int dummy; } ;



__attribute__((used)) static inline int
FUNC_0(struct gasket_dev *VAR_0,
     int (*VAR_1)(struct gasket_dev *))
{
 int VAR_2 = 0;

 if (VAR_1)
  VAR_2 = VAR_1(VAR_0);
 return VAR_2;
}
