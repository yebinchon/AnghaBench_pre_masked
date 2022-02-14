
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sock {int dummy; } ;
struct sk_buff {int dummy; } ;
struct genevehdr {scalar_t__ ver; scalar_t__ proto_type; int opt_len; } ;
struct geneve_sock {int dummy; } ;
struct geneve_dev {TYPE_2__* dev; int net; } ;
struct TYPE_3__ {int rx_dropped; } ;
struct TYPE_4__ {TYPE_1__ stats; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (TYPE_2__*) ;
 struct genevehdr* FUNC_1 (struct sk_buff*) ;
 struct geneve_dev* FUNC_2 (struct geneve_sock*,struct sk_buff*) ;
 int FUNC_3 (struct geneve_dev*,struct geneve_sock*,struct sk_buff*) ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (struct sk_buff*,scalar_t__,scalar_t__,int) ;
 int FUNC_6 (struct sk_buff*) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (struct sk_buff*,scalar_t__) ;
 struct geneve_sock* FUNC_9 (struct sock*) ;
 scalar_t__ FUNC_10 (int) ;

__attribute__((used)) static int FUNC_11(struct sock *VAR_3, struct sk_buff *VAR_4)
{
 struct genevehdr *VAR_5;
 struct geneve_dev *VAR_6;
 struct geneve_sock *VAR_7;
 int VAR_8;


 if (FUNC_10(!FUNC_8(VAR_4, VAR_1)))
  goto drop;


 VAR_5 = FUNC_1(VAR_4);
 if (FUNC_10(VAR_5->ver != VAR_2))
  goto drop;

 if (FUNC_10(VAR_5->proto_type != FUNC_4(VAR_0)))
  goto drop;

 VAR_7 = FUNC_9(VAR_3);
 if (!VAR_7)
  goto drop;

 VAR_6 = FUNC_2(VAR_7, VAR_4);
 if (!VAR_6)
  goto drop;

 VAR_8 = VAR_5->opt_len * 4;
 if (FUNC_5(VAR_4, VAR_1 + VAR_8,
     FUNC_4(VAR_0),
     !FUNC_7(VAR_6->net, FUNC_0(VAR_6->dev)))) {
  VAR_6->dev->stats.rx_dropped++;
  goto drop;
 }

 FUNC_3(VAR_6, VAR_7, VAR_4);
 return 0;

drop:

 FUNC_6(VAR_4);
 return 0;
}
