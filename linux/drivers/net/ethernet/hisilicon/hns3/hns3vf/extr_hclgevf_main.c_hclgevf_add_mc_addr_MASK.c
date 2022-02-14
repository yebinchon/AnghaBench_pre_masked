
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hnae3_handle {int dummy; } ;
struct hclgevf_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct hclgevf_dev* FUNC_0 (struct hnae3_handle*) ;
 int FUNC_1 (struct hclgevf_dev*,int ,int ,unsigned char const*,int ,int,int *,int ) ;

__attribute__((used)) static int FUNC_2(struct hnae3_handle *VAR_3,
          const unsigned char *VAR_4)
{
 struct hclgevf_dev *VAR_5 = FUNC_0(VAR_3);

 return FUNC_1(VAR_5, VAR_2,
        VAR_1,
        VAR_4, VAR_0, 0, ((void*)0), 0);
}
