
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vnic_wq {int ctrl; } ;
struct vnic_dev {int dummy; } ;
typedef enum vnic_res_type { ____Placeholder_vnic_res_type } vnic_res_type ;


 int VAR_0 ;
 int FUNC_0 (struct vnic_dev*,int,unsigned int) ;

__attribute__((used)) static inline int FUNC_1(struct vnic_dev *VAR_1, struct vnic_wq *VAR_2,
 unsigned int VAR_3, enum vnic_res_type VAR_4)
{
 VAR_2->ctrl = FUNC_0(VAR_1, VAR_4, VAR_3);
 if (!VAR_2->ctrl)
  return -VAR_0;

 return 0;
}
