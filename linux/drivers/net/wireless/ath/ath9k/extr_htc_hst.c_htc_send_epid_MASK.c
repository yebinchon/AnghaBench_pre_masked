
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int len; } ;
struct htc_target {int dummy; } ;
typedef enum htc_endpoint_id { ____Placeholder_htc_endpoint_id } htc_endpoint_id ;


 int FUNC_0 (struct htc_target*,struct sk_buff*,int ,int ,int) ;

int FUNC_1(struct htc_target *VAR_0, struct sk_buff *VAR_1,
    enum htc_endpoint_id VAR_2)
{
 return FUNC_0(VAR_0, VAR_1, VAR_1->len, 0, VAR_2);
}
