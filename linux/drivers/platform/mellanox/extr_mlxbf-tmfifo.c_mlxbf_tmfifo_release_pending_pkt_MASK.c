
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct vring_desc {int dummy; } ;
struct mlxbf_tmfifo_vring {struct vring_desc* desc_head; int * desc; scalar_t__ pkt_len; } ;


 struct vring_desc* FUNC_0 (struct mlxbf_tmfifo_vring*) ;
 scalar_t__ FUNC_1 (struct mlxbf_tmfifo_vring*,struct vring_desc*) ;
 int FUNC_2 (struct mlxbf_tmfifo_vring*,struct vring_desc*,scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct mlxbf_tmfifo_vring *VAR_0)
{
 struct vring_desc *VAR_1;
 u32 VAR_2 = 0;

 if (VAR_0->desc_head) {
  VAR_1 = VAR_0->desc_head;
  VAR_2 = VAR_0->pkt_len;
 } else {
  VAR_1 = FUNC_0(VAR_0);
  VAR_2 = FUNC_1(VAR_0, VAR_1);
 }

 if (VAR_1)
  FUNC_2(VAR_0, VAR_1, VAR_2);

 VAR_0->pkt_len = 0;
 VAR_0->desc = ((void*)0);
 VAR_0->desc_head = ((void*)0);
}
