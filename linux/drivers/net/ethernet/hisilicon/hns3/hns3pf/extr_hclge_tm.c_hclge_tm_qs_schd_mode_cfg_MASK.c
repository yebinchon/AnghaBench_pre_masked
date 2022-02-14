
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u16 ;
struct hclge_dev {int hw; } ;
struct hclge_desc {void** data; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 void* FUNC_0 (int ) ;
 int FUNC_1 (int *,struct hclge_desc*,int) ;
 int FUNC_2 (struct hclge_desc*,int ,int) ;

__attribute__((used)) static int FUNC_3(struct hclge_dev *VAR_3, u16 VAR_4, u8 VAR_5)
{
 struct hclge_desc VAR_6;

 FUNC_2(&VAR_6, VAR_0, 0);

 if (VAR_5 == VAR_1)
  VAR_6.data[1] = FUNC_0(VAR_2);
 else
  VAR_6.data[1] = 0;

 VAR_6.data[0] = FUNC_0(VAR_4);

 return FUNC_1(&VAR_3->hw, &VAR_6, 1);
}
