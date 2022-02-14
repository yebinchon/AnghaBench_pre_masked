
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int v4l2_std_id ;
struct vivid_dev {size_t input; int * std_cap; } ;


 scalar_t__ FUNC_0 (struct vivid_dev const*) ;

__attribute__((used)) static inline v4l2_std_id FUNC_1(const struct vivid_dev *VAR_0)
{
 if (FUNC_0(VAR_0))
  return VAR_0->std_cap[VAR_0->input];
 return 0;
}
