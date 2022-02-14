
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct hclge_port_shapping_cmd {int port_shapping_para; } ;
struct TYPE_3__ {int speed; } ;
struct TYPE_4__ {TYPE_1__ mac; } ;
struct hclge_dev {TYPE_2__ hw; } ;
struct hclge_desc {scalar_t__ data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_2__*,struct hclge_desc*,int) ;
 int FUNC_2 (struct hclge_desc*,int ,int) ;
 int FUNC_3 (int ,int ,int *,int *,int *) ;
 int FUNC_4 (int ,int ,int ,int ,int ) ;

__attribute__((used)) static int FUNC_5(struct hclge_dev *VAR_4)
{
 struct hclge_port_shapping_cmd *VAR_5;
 struct hclge_desc VAR_6;
 u8 VAR_7, VAR_8, VAR_9;
 u32 VAR_10;
 int VAR_11;

 VAR_11 = FUNC_3(VAR_4->hw.mac.speed,
         VAR_3,
         &VAR_8, &VAR_7, &VAR_9);
 if (VAR_11)
  return VAR_11;

 FUNC_2(&VAR_6, VAR_0, 0);
 VAR_5 = (struct hclge_port_shapping_cmd *)VAR_6.data;

 VAR_10 = FUNC_4(VAR_8, VAR_7, VAR_9,
         VAR_2,
         VAR_1);

 VAR_5->port_shapping_para = FUNC_0(VAR_10);

 return FUNC_1(&VAR_4->hw, &VAR_6, 1);
}
