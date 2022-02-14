
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct qla_hw_data {int long_range_distance; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct qla_hw_data*) ;
 scalar_t__ FUNC_1 (struct qla_hw_data*) ;
 scalar_t__ FUNC_2 (struct qla_hw_data*) ;
 int VAR_1 ;

__attribute__((used)) static inline uint16_t FUNC_3(struct qla_hw_data *VAR_2)
{
 uint16_t VAR_3 = VAR_0;

 if (FUNC_2(VAR_2) || FUNC_0(VAR_2) || FUNC_1(VAR_2))
  VAR_3 |= VAR_2->long_range_distance << VAR_1;

 return VAR_3;
}
