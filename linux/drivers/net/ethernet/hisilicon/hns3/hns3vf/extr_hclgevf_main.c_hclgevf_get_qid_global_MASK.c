
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct hnae3_handle {int dummy; } ;
struct hclgevf_dev {int dummy; } ;
typedef int resp_data ;
typedef int queue_id ;
typedef int msg_data ;


 int VAR_0 ;
 struct hclgevf_dev* FUNC_0 (struct hnae3_handle*) ;
 int FUNC_1 (struct hclgevf_dev*,int ,int ,int *,int,int,int *,int) ;
 int FUNC_2 (int *,int *,int) ;

__attribute__((used)) static u16 FUNC_3(struct hnae3_handle *VAR_1, u16 VAR_2)
{
 struct hclgevf_dev *VAR_3 = FUNC_0(VAR_1);
 u8 VAR_4[2], VAR_5[2];
 u16 VAR_6 = 0;
 int VAR_7;

 FUNC_2(&VAR_4[0], &VAR_2, sizeof(VAR_2));

 VAR_7 = FUNC_1(VAR_3, VAR_0, 0, VAR_4,
       sizeof(VAR_4), 1, VAR_5,
       sizeof(VAR_5));
 if (!VAR_7)
  VAR_6 = *(u16 *)VAR_5;

 return VAR_6;
}
