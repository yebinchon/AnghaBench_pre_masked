
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcmu_dev {int dummy; } ;
struct sk_buff {int dummy; } ;
typedef enum tcmu_genl_cmd { ____Placeholder_tcmu_genl_cmd } tcmu_genl_cmd ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct sk_buff*,void*) ;
 int FUNC_1 (int *,struct sk_buff*,int ,int ,int ) ;
 int FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (struct tcmu_dev*) ;
 int VAR_4 ;
 int FUNC_4 (struct tcmu_dev*,int) ;
 int FUNC_5 (struct tcmu_dev*) ;

__attribute__((used)) static int FUNC_6(struct tcmu_dev *VAR_5,
       enum tcmu_genl_cmd VAR_6,
       struct sk_buff *VAR_7, void *VAR_8)
{
 int VAR_9;

 FUNC_0(VAR_7, VAR_8);

 VAR_9 = FUNC_4(VAR_5, VAR_6);
 if (VAR_9) {
  FUNC_2(VAR_7);
  return VAR_9;
 }

 VAR_9 = FUNC_1(&VAR_4, VAR_7, 0,
          VAR_3, VAR_1);


 if (VAR_9 == 0 ||
    (VAR_9 == -VAR_0 && VAR_6 == VAR_2))
  return FUNC_5(VAR_5);
 else
  FUNC_3(VAR_5);

 return VAR_9;
}
