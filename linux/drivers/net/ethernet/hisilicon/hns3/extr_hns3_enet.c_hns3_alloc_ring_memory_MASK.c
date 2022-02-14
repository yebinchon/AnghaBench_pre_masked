
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hns3_enet_ring {scalar_t__ desc_num; scalar_t__ buf_size; int * desc_cb; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct hns3_enet_ring*) ;
 int * FUNC_1 (int ,scalar_t__,int,int ) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (struct hns3_enet_ring*) ;
 int FUNC_4 (struct hns3_enet_ring*) ;
 int FUNC_5 (struct hns3_enet_ring*) ;
 int FUNC_6 (struct hns3_enet_ring*) ;

__attribute__((used)) static int FUNC_7(struct hns3_enet_ring *VAR_3)
{
 int VAR_4;

 if (VAR_3->desc_num <= 0 || VAR_3->buf_size <= 0)
  return -VAR_0;

 VAR_3->desc_cb = FUNC_1(FUNC_6(VAR_3), VAR_3->desc_num,
         sizeof(VAR_3->desc_cb[0]), VAR_2);
 if (!VAR_3->desc_cb) {
  VAR_4 = -VAR_1;
  goto out;
 }

 VAR_4 = FUNC_3(VAR_3);
 if (VAR_4)
  goto out_with_desc_cb;

 if (!FUNC_0(VAR_3)) {
  VAR_4 = FUNC_4(VAR_3);
  if (VAR_4)
   goto out_with_desc;
 }

 return 0;

out_with_desc:
 FUNC_5(VAR_3);
out_with_desc_cb:
 FUNC_2(FUNC_6(VAR_3), VAR_3->desc_cb);
 VAR_3->desc_cb = ((void*)0);
out:
 return VAR_4;
}
