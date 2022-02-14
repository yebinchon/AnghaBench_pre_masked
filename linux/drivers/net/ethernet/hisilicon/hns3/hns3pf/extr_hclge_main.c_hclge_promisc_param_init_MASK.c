
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hclge_promisc_param {int vf_id; int enable; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct hclge_promisc_param*,int ,int) ;

void FUNC_1(struct hclge_promisc_param *VAR_3, bool VAR_4,
         bool VAR_5, bool VAR_6, int VAR_7)
{
 if (!VAR_3)
  return;

 FUNC_0(VAR_3, 0, sizeof(struct hclge_promisc_param));
 if (VAR_4)
  VAR_3->enable = VAR_2;
 if (VAR_5)
  VAR_3->enable |= VAR_1;
 if (VAR_6)
  VAR_3->enable |= VAR_0;
 VAR_3->vf_id = VAR_7;
}
