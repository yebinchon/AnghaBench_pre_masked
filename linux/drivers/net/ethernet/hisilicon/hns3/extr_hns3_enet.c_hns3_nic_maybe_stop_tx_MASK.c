
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct TYPE_2__ {int tx_copy; } ;
struct hns3_enet_ring {int syncp; TYPE_1__ stats; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 int FUNC_0 (struct sk_buff*) ;
 unsigned int FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (struct sk_buff*) ;
 unsigned int FUNC_3 (struct hns3_enet_ring*) ;
 struct sk_buff* FUNC_4 (struct sk_buff*,int ) ;
 scalar_t__ FUNC_5 (struct sk_buff*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (int) ;

__attribute__((used)) static int FUNC_9(struct hns3_enet_ring *VAR_5,
      struct sk_buff **VAR_6)
{
 struct sk_buff *VAR_7 = *VAR_6;
 unsigned int VAR_8;

 VAR_8 = FUNC_1(VAR_7);
 if (FUNC_8(VAR_8 > VAR_3)) {
  struct sk_buff *VAR_9;

  if (FUNC_5(VAR_7) && VAR_8 <= VAR_4 &&
      !FUNC_2(VAR_7))
   goto out;


  VAR_9 = FUNC_4(VAR_7, VAR_2);
  if (!VAR_9)
   return -VAR_1;
  FUNC_0(VAR_7);
  *VAR_6 = VAR_9;

  VAR_8 = FUNC_1(VAR_9);
  if ((FUNC_5(VAR_9) && VAR_8 > VAR_4) ||
      (!FUNC_5(VAR_9) && VAR_8 > VAR_3))
   return -VAR_1;

  FUNC_6(&VAR_5->syncp);
  VAR_5->stats.tx_copy++;
  FUNC_7(&VAR_5->syncp);
 }

out:
 if (FUNC_8(FUNC_3(VAR_5) < VAR_8))
  return -VAR_0;

 return VAR_8;
}
