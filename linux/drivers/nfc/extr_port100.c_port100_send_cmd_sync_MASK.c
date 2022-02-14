
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sk_buff {int dummy; } ;
struct port100_sync_cmd_response {struct sk_buff* resp; int done; } ;
struct port100 {int dummy; } ;


 struct sk_buff* FUNC_0 (int) ;
 int FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct port100*,int ,struct sk_buff*,int ,struct port100_sync_cmd_response*) ;
 int VAR_0 ;
 int FUNC_4 (int *) ;

__attribute__((used)) static struct sk_buff *FUNC_5(struct port100 *VAR_1, u8 VAR_2,
          struct sk_buff *VAR_3)
{
 int VAR_4;
 struct port100_sync_cmd_response VAR_5;

 FUNC_2(&VAR_5.done);

 VAR_4 = FUNC_3(VAR_1, VAR_2, VAR_3,
        VAR_0, &VAR_5);
 if (VAR_4) {
  FUNC_1(VAR_3);
  return FUNC_0(VAR_4);
 }

 FUNC_4(&VAR_5.done);

 return VAR_5.resp;
}
