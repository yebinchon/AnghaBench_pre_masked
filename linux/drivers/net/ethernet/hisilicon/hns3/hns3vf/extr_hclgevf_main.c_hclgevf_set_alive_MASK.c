
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct hnae3_handle {int dummy; } ;
struct hclgevf_dev {int dummy; } ;


 int VAR_0 ;
 struct hclgevf_dev* FUNC_0 (struct hnae3_handle*) ;
 int FUNC_1 (struct hclgevf_dev*,int ,int ,int*,int,int,int *,int ) ;

__attribute__((used)) static int FUNC_2(struct hnae3_handle *VAR_1, bool VAR_2)
{
 struct hclgevf_dev *VAR_3 = FUNC_0(VAR_1);
 u8 VAR_4;

 VAR_4 = VAR_2 ? 1 : 0;
 return FUNC_1(VAR_3, VAR_0,
        0, &VAR_4, 1, 0, ((void*)0), 0);
}
