
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hns3_enet_ring {int dummy; } ;
struct hns3_desc_cb {int dummy; } ;


 int FUNC_0 (struct hns3_enet_ring*,struct hns3_desc_cb*) ;
 int FUNC_1 (struct hns3_enet_ring*,struct hns3_desc_cb*) ;
 int FUNC_2 (struct hns3_enet_ring*,struct hns3_desc_cb*) ;

__attribute__((used)) static int FUNC_3(struct hns3_enet_ring *VAR_0,
       struct hns3_desc_cb *VAR_1)
{
 int VAR_2;

 VAR_2 = FUNC_0(VAR_0, VAR_1);
 if (VAR_2)
  goto out;

 VAR_2 = FUNC_2(VAR_0, VAR_1);
 if (VAR_2)
  goto out_with_buf;

 return 0;

out_with_buf:
 FUNC_1(VAR_0, VAR_1);
out:
 return VAR_2;
}
