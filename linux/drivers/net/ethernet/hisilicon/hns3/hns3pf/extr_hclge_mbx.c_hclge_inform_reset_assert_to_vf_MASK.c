
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u16 ;
struct hclge_vport {scalar_t__ vport_id; struct hclge_dev* back; } ;
struct hclge_dev {scalar_t__ reset_type; } ;
typedef int msg_data ;
typedef enum hnae3_reset_type { ____Placeholder_hnae3_reset_type } hnae3_reset_type ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct hclge_vport*,scalar_t__*,int,int ,scalar_t__) ;
 int FUNC_1 (scalar_t__*,int*,int) ;

int FUNC_2(struct hclge_vport *VAR_6)
{
 struct hclge_dev *VAR_7 = VAR_6->back;
 enum hnae3_reset_type VAR_8;
 u8 VAR_9[2];
 u8 VAR_10;

 VAR_10 = (u8)VAR_6->vport_id;

 if (VAR_7->reset_type == VAR_2)
  VAR_8 = VAR_5;
 else if (VAR_7->reset_type == VAR_1)
  VAR_8 = VAR_3;
 else
  VAR_8 = VAR_4;

 FUNC_1(&VAR_9[0], &VAR_8, sizeof(u16));


 return FUNC_0(VAR_6, VAR_9, sizeof(VAR_9),
      VAR_0, VAR_10);
}
