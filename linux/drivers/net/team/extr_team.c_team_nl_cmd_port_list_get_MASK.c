
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct team {int dummy; } ;
struct sk_buff {int dummy; } ;
struct genl_info {int snd_seq; int snd_portid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct team*,int ,int ,int ,int ,int *) ;
 int VAR_2 ;
 struct team* FUNC_1 (struct genl_info*) ;
 int FUNC_2 (struct team*) ;

__attribute__((used)) static int FUNC_3(struct sk_buff *VAR_3,
         struct genl_info *VAR_4)
{
 struct team *VAR_5;
 int VAR_6;

 VAR_5 = FUNC_1(VAR_4);
 if (!VAR_5)
  return -VAR_0;

 VAR_6 = FUNC_0(VAR_5, VAR_4->snd_portid, VAR_4->snd_seq,
      VAR_1, VAR_2, ((void*)0));

 FUNC_2(VAR_5);

 return VAR_6;
}
