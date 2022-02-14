
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vring_desc {int dummy; } ;
struct mlxbf_tmfifo_vring {scalar_t__ vdev_id; struct vring_desc* desc; struct vring_desc* desc_head; } ;


 scalar_t__ VAR_0 ;
 struct vring_desc* FUNC_0 (struct mlxbf_tmfifo_vring*) ;
 int FUNC_1 (struct mlxbf_tmfifo_vring*,struct vring_desc*,int) ;

__attribute__((used)) static struct vring_desc *
FUNC_2(struct mlxbf_tmfifo_vring *VAR_1, bool VAR_2)
{
 struct vring_desc *VAR_3;

 VAR_3 = FUNC_0(VAR_1);
 if (VAR_3 && VAR_2 && VAR_1->vdev_id == VAR_0)
  FUNC_1(VAR_1, VAR_3, VAR_2);

 VAR_1->desc_head = VAR_3;
 VAR_1->desc = VAR_3;

 return VAR_3;
}
