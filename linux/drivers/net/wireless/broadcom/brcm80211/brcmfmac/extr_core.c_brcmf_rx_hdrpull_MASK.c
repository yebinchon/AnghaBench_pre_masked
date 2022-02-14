
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {int protocol; } ;
struct brcmf_pub {int dummy; } ;
struct brcmf_if {TYPE_2__* ndev; } ;
struct TYPE_3__ {int rx_errors; } ;
struct TYPE_4__ {TYPE_1__ stats; } ;


 int VAR_0 ;
 int FUNC_0 (struct brcmf_pub*,int,struct sk_buff*,struct brcmf_if**) ;
 int FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (struct sk_buff*,TYPE_2__*) ;

__attribute__((used)) static int FUNC_3(struct brcmf_pub *VAR_1, struct sk_buff *VAR_2,
       struct brcmf_if **VAR_3)
{
 int VAR_4;


 VAR_4 = FUNC_0(VAR_1, 1, VAR_2, VAR_3);

 if (VAR_4 || !(*VAR_3) || !(*VAR_3)->ndev) {
  if (VAR_4 != -VAR_0 && *VAR_3)
   (*VAR_3)->ndev->stats.rx_errors++;
  FUNC_1(VAR_2);
  return -VAR_0;
 }

 VAR_2->protocol = FUNC_2(VAR_2, (*VAR_3)->ndev);
 return 0;
}
