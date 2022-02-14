
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct genl_info {int snd_portid; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int ) ;

__attribute__((used)) static int FUNC_1(struct sk_buff *VAR_1, struct genl_info *VAR_2)
{
 VAR_0 = VAR_2->snd_portid;
 FUNC_0("user_cmd nlpid %u\n", VAR_0);
 return 0;
}
