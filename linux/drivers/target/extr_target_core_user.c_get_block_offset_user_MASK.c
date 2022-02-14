
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcmu_dev {size_t data_off; } ;


 int VAR_0 ;

__attribute__((used)) static inline size_t FUNC_0(struct tcmu_dev *VAR_1,
  int VAR_2, int VAR_3)
{
 return VAR_1->data_off + VAR_2 * VAR_0 +
  VAR_0 - VAR_3;
}
