
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vnic_wq {int ring; } ;
struct vnic_dev {int dummy; } ;


 int FUNC_0 (struct vnic_dev*,int *,unsigned int,unsigned int) ;

__attribute__((used)) static inline int FUNC_1(struct vnic_dev *VAR_0, struct vnic_wq *VAR_1,
 unsigned int VAR_2, unsigned int VAR_3, unsigned int VAR_4)
{
 return FUNC_0(VAR_0, &VAR_1->ring, VAR_3,
      VAR_4);
}
