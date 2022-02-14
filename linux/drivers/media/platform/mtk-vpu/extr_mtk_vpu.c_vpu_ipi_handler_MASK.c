
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vpu_ipi_desc {int priv; int (* handler ) (int ,int ,int ) ;} ;
struct share_obj {size_t id; int len; int share_buf; } ;
struct mtk_vpu {int* ipi_id_ack; int dev; int ack_wq; struct vpu_ipi_desc* ipi_desc; struct share_obj* recv_buf; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (int ,char*,size_t) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct mtk_vpu *VAR_2)
{
 struct share_obj *VAR_3 = VAR_2->recv_buf;
 struct vpu_ipi_desc *VAR_4 = VAR_2->ipi_desc;

 if (VAR_3->id < VAR_0 && VAR_4[VAR_3->id].handler) {
  VAR_4[VAR_3->id].handler(VAR_3->share_buf,
           VAR_3->len,
           VAR_4[VAR_3->id].priv);
  if (VAR_3->id > VAR_1) {
   VAR_2->ipi_id_ack[VAR_3->id] = 1;
   FUNC_2(&VAR_2->ack_wq);
  }
 } else {
  FUNC_0(VAR_2->dev, "No such ipi id = %d\n", VAR_3->id);
 }
}
