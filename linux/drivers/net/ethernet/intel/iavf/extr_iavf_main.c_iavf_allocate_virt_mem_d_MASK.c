
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct iavf_virt_mem {scalar_t__ va; int size; } ;
struct iavf_hw {int dummy; } ;
typedef enum iavf_status { ____Placeholder_iavf_status } iavf_status ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ,int ) ;

enum iavf_status FUNC_1(struct iavf_hw *VAR_3,
       struct iavf_virt_mem *VAR_4, u32 VAR_5)
{
 if (!VAR_4)
  return VAR_2;

 VAR_4->size = VAR_5;
 VAR_4->va = FUNC_0(VAR_5, VAR_0);

 if (VAR_4->va)
  return 0;
 else
  return VAR_1;
}
