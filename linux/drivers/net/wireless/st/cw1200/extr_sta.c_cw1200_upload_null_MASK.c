
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wsm_template_frame {int rate; int skb; int frame_type; } ;
struct cw1200_common {int vif; int hw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (struct cw1200_common*,struct wsm_template_frame*) ;

__attribute__((used)) static int FUNC_3(struct cw1200_common *VAR_2)
{
 int VAR_3 = 0;
 struct wsm_template_frame VAR_4 = {
  .frame_type = VAR_1,
  .rate = 0xFF,
 };

 VAR_4.skb = FUNC_1(VAR_2->hw, VAR_2->vif, 0);
 if (!VAR_4.skb)
  return -VAR_0;

 VAR_3 = FUNC_2(VAR_2, &VAR_4);

 FUNC_0(VAR_4.skb);

 return VAR_3;
}
