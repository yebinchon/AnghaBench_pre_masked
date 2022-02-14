
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int duplex; int speed; scalar_t__ linkup; } ;
struct team_port {int changed; TYPE_1__ state; scalar_t__ removed; TYPE_2__* dev; } ;
struct sk_buff {int dummy; } ;
struct nlattr {int dummy; } ;
struct TYPE_4__ {int ifindex; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct sk_buff*,struct nlattr*) ;
 int FUNC_1 (struct sk_buff*,struct nlattr*) ;
 struct nlattr* FUNC_2 (struct sk_buff*,int ) ;
 scalar_t__ FUNC_3 (struct sk_buff*,int ) ;
 scalar_t__ FUNC_4 (struct sk_buff*,int ,int ) ;
 scalar_t__ FUNC_5 (struct sk_buff*,int ,int ) ;

__attribute__((used)) static int FUNC_6(struct sk_buff *VAR_8,
         struct team_port *VAR_9)
{
 struct nlattr *VAR_10;

 VAR_10 = FUNC_2(VAR_8, VAR_1);
 if (!VAR_10)
  goto nest_cancel;
 if (FUNC_4(VAR_8, VAR_4, VAR_9->dev->ifindex))
  goto nest_cancel;
 if (VAR_9->changed) {
  if (FUNC_3(VAR_8, VAR_2))
   goto nest_cancel;
  VAR_9->changed = 0;
 }
 if ((VAR_9->removed &&
      FUNC_3(VAR_8, VAR_6)) ||
     (VAR_9->state.linkup &&
      FUNC_3(VAR_8, VAR_5)) ||
     FUNC_4(VAR_8, VAR_7, VAR_9->state.speed) ||
     FUNC_5(VAR_8, VAR_3, VAR_9->state.duplex))
  goto nest_cancel;
 FUNC_1(VAR_8, VAR_10);
 return 0;

nest_cancel:
 FUNC_0(VAR_8, VAR_10);
 return -VAR_0;
}
