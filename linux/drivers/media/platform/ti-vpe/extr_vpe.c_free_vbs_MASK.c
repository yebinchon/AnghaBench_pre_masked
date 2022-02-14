
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vpe_dev {int lock; } ;
struct vpe_ctx {int ** src_vbs; struct vpe_dev* dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,int ) ;

__attribute__((used)) static void FUNC_3(struct vpe_ctx *VAR_1)
{
 struct vpe_dev *VAR_2 = VAR_1->dev;
 unsigned long VAR_3;

 if (VAR_1->src_vbs[2] == ((void*)0))
  return;

 FUNC_0(&VAR_2->lock, VAR_3);
 if (VAR_1->src_vbs[2]) {
  FUNC_2(VAR_1->src_vbs[2], VAR_0);
  if (VAR_1->src_vbs[1] && (VAR_1->src_vbs[1] != VAR_1->src_vbs[2]))
   FUNC_2(VAR_1->src_vbs[1], VAR_0);
  VAR_1->src_vbs[2] = ((void*)0);
  VAR_1->src_vbs[1] = ((void*)0);
 }
 FUNC_1(&VAR_2->lock, VAR_3);
}
