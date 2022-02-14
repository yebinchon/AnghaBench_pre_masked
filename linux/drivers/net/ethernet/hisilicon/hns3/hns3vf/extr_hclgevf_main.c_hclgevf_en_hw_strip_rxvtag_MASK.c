
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct hnae3_handle {int dummy; } ;
struct hclgevf_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct hclgevf_dev* FUNC_0 (struct hnae3_handle*) ;
 int FUNC_1 (struct hclgevf_dev*,int ,int ,int*,int,int,int *,int ) ;

__attribute__((used)) static int FUNC_2(struct hnae3_handle *VAR_2, bool VAR_3)
{
 struct hclgevf_dev *VAR_4 = FUNC_0(VAR_2);
 u8 VAR_5;

 VAR_5 = VAR_3 ? 1 : 0;
 return FUNC_1(VAR_4, VAR_0,
        VAR_1, &VAR_5,
        1, 0, ((void*)0), 0);
}
