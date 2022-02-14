
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct sk_buff {int priority; scalar_t__ data; } ;
struct ethhdr {int h_dest; } ;
struct brcmf_pub {TYPE_1__* proto; } ;
struct brcmf_msgbuf {struct brcmf_flowring* flow; } ;
struct brcmf_flowring {int dummy; } ;
struct TYPE_2__ {scalar_t__ pd; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct brcmf_flowring*,scalar_t__,struct sk_buff*) ;
 scalar_t__ FUNC_1 (struct brcmf_flowring*,int ,int ,int) ;
 scalar_t__ FUNC_2 (struct brcmf_msgbuf*,int,struct sk_buff*) ;
 int FUNC_3 (struct brcmf_msgbuf*,scalar_t__,int) ;

__attribute__((used)) static int FUNC_4(struct brcmf_pub *VAR_3, int VAR_4,
          struct sk_buff *VAR_5)
{
 struct brcmf_msgbuf *VAR_6 = (struct brcmf_msgbuf *)VAR_3->proto->pd;
 struct brcmf_flowring *VAR_7 = VAR_6->flow;
 struct ethhdr *VAR_8 = (struct ethhdr *)(VAR_5->data);
 u32 VAR_9;
 u32 VAR_10;
 bool VAR_11;

 VAR_9 = FUNC_1(VAR_7, VAR_8->h_dest, VAR_5->priority, VAR_4);
 if (VAR_9 == VAR_0) {
  VAR_9 = FUNC_2(VAR_6, VAR_4, VAR_5);
  if (VAR_9 == VAR_0)
   return -VAR_2;
 }
 VAR_10 = FUNC_0(VAR_7, VAR_9, VAR_5);
 VAR_11 = ((VAR_10 % VAR_1) == 0);
 FUNC_3(VAR_6, VAR_9, VAR_11);

 return 0;
}
