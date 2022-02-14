
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct genl_info {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,struct sk_buff*,struct genl_info*,int ,int ) ;
 int FUNC_1 (int *,struct sk_buff*,int ,int ,int ) ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_2(struct sk_buff *VAR_3,
       struct genl_info *VAR_4)
{
 if (VAR_4)
  FUNC_0(&VAR_2, VAR_3, VAR_4,
       VAR_1, VAR_0);
 else
  FUNC_1(&VAR_2, VAR_3, 0,
      VAR_1, VAR_0);
}
