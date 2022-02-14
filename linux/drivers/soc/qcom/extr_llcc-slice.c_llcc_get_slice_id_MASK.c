
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct llcc_slice_desc {int slice_id; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct llcc_slice_desc*) ;

int FUNC_1(struct llcc_slice_desc *VAR_1)
{
 if (FUNC_0(VAR_1))
  return -VAR_0;

 return VAR_1->slice_id;
}
