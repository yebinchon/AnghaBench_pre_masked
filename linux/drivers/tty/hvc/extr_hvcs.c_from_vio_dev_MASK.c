
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vio_dev {int dev; } ;
struct hvcs_struct {int dummy; } ;


 struct hvcs_struct* FUNC_0 (int *) ;

__attribute__((used)) static inline struct hvcs_struct *FUNC_1(struct vio_dev *VAR_0)
{
 return FUNC_0(&VAR_0->dev);
}
