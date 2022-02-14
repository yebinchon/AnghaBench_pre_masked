
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hnae3_handle {int dummy; } ;
struct hclgevf_dev {int keep_alive_timer; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct hclgevf_dev* FUNC_0 (struct hnae3_handle*) ;
 int FUNC_1 (struct hnae3_handle*,int) ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (int *,scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct hnae3_handle *VAR_3)
{
 struct hclgevf_dev *VAR_4 = FUNC_0(VAR_3);
 int VAR_5;

 VAR_5 = FUNC_1(VAR_3, 1);
 if (VAR_5)
  return VAR_5;

 FUNC_2(&VAR_4->keep_alive_timer, VAR_2 +
    VAR_0 * VAR_1);

 return 0;
}
