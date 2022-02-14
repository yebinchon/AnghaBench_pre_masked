
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct port100_sync_cmd_response {int done; struct sk_buff* resp; } ;
struct port100 {int dummy; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct port100 *VAR_0, void *VAR_1,
          struct sk_buff *VAR_2)
{
 struct port100_sync_cmd_response *VAR_3 = VAR_1;

 VAR_3->resp = VAR_2;
 FUNC_0(&VAR_3->done);
}
