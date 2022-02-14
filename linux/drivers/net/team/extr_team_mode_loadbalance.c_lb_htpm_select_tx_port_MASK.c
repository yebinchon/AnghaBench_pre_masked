
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct team_port {int dummy; } ;
struct team {int dummy; } ;
struct sk_buff {int dummy; } ;
struct lb_priv {int dummy; } ;


 int FUNC_0 (struct lb_priv*,unsigned char) ;
 struct team_port* FUNC_1 (struct team*,struct lb_priv*,struct sk_buff*,unsigned char) ;
 scalar_t__ FUNC_2 (struct team_port*) ;
 struct team_port* FUNC_3 (int ) ;

__attribute__((used)) static struct team_port *FUNC_4(struct team *VAR_0,
      struct lb_priv *VAR_1,
      struct sk_buff *VAR_2,
      unsigned char VAR_3)
{
 struct team_port *VAR_4;

 VAR_4 = FUNC_3(FUNC_0(VAR_1, VAR_3));
 if (FUNC_2(VAR_4))
  return VAR_4;

 return FUNC_1(VAR_0, VAR_1, VAR_2, VAR_3);
}
