
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iavf_virt_mem {int va; } ;
struct iavf_hw {int dummy; } ;
typedef enum iavf_status { ____Placeholder_iavf_status } iavf_status ;


 int VAR_0 ;
 int FUNC_0 (int ) ;

enum iavf_status FUNC_1(struct iavf_hw *VAR_1,
          struct iavf_virt_mem *VAR_2)
{
 if (!VAR_2)
  return VAR_0;


 FUNC_0(VAR_2->va);

 return 0;
}
