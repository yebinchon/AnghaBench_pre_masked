
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct hclge_dev {int hw; } ;
struct hclge_desc {scalar_t__ data; } ;
struct hclge_cfg_tso_status_cmd {void* tso_mss_max; void* tso_mss_min; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_0 (scalar_t__) ;
 int FUNC_1 (int *,struct hclge_desc*,int) ;
 int FUNC_2 (struct hclge_desc*,int ,int) ;
 int FUNC_3 (scalar_t__,int ,int ,unsigned int) ;

__attribute__((used)) static int FUNC_4(struct hclge_dev *VAR_3, unsigned int VAR_4,
       unsigned int VAR_5)
{
 struct hclge_cfg_tso_status_cmd *VAR_6;
 struct hclge_desc VAR_7;
 u16 VAR_8;

 FUNC_2(&VAR_7, VAR_0, 0);

 VAR_6 = (struct hclge_cfg_tso_status_cmd *)VAR_7.data;

 VAR_8 = 0;
 FUNC_3(VAR_8, VAR_1,
   VAR_2, VAR_4);
 VAR_6->tso_mss_min = FUNC_0(VAR_8);

 VAR_8 = 0;
 FUNC_3(VAR_8, VAR_1,
   VAR_2, VAR_5);
 VAR_6->tso_mss_max = FUNC_0(VAR_8);

 return FUNC_1(&VAR_3->hw, &VAR_7, 1);
}
