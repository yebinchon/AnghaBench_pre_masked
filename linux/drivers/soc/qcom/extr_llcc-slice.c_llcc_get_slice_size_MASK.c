
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct llcc_slice_desc {size_t slice_size; } ;


 scalar_t__ FUNC_0 (struct llcc_slice_desc*) ;

size_t FUNC_1(struct llcc_slice_desc *VAR_0)
{
 if (FUNC_0(VAR_0))
  return 0;

 return VAR_0->slice_size;
}
