
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vivid_dev {scalar_t__* input_type; size_t input; } ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static inline bool FUNC_0(const struct vivid_dev *VAR_1)
{
 return VAR_1->input_type[VAR_1->input] == VAR_0;
}
