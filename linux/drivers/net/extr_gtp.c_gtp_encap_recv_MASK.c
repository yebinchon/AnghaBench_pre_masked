
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sock {int dummy; } ;
struct sk_buff {int dummy; } ;
struct gtp_dev {int dev; } ;
struct TYPE_2__ {int encap_type; } ;




 int FUNC_0 (struct gtp_dev*,struct sk_buff*) ;
 int FUNC_1 (struct gtp_dev*,struct sk_buff*) ;
 int FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (int ,char*,...) ;
 struct gtp_dev* FUNC_4 (struct sock*) ;
 TYPE_1__* FUNC_5 (struct sock*) ;

__attribute__((used)) static int FUNC_6(struct sock *VAR_0, struct sk_buff *VAR_1)
{
 struct gtp_dev *VAR_2;
 int VAR_3 = 0;

 VAR_2 = FUNC_4(VAR_0);
 if (!VAR_2)
  return 1;

 FUNC_3(VAR_2->dev, "encap_recv sk=%p\n", VAR_0);

 switch (FUNC_5(VAR_0)->encap_type) {
 case 129:
  FUNC_3(VAR_2->dev, "received GTP0 packet\n");
  VAR_3 = FUNC_0(VAR_2, VAR_1);
  break;
 case 128:
  FUNC_3(VAR_2->dev, "received GTP1U packet\n");
  VAR_3 = FUNC_1(VAR_2, VAR_1);
  break;
 default:
  VAR_3 = -1;
 }

 switch (VAR_3) {
 case 1:
  FUNC_3(VAR_2->dev, "pass up to the process\n");
  break;
 case 0:
  break;
 case -1:
  FUNC_3(VAR_2->dev, "GTP packet has been dropped\n");
  FUNC_2(VAR_1);
  VAR_3 = 0;
  break;
 }

 return VAR_3;
}
