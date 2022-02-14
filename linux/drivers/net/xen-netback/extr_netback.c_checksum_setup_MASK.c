
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int rx_gso_checksum_fixup; } ;
struct xenvif_queue {TYPE_1__ stats; } ;
struct sk_buff {scalar_t__ ip_summed; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct sk_buff*,int) ;
 scalar_t__ FUNC_1 (struct sk_buff*) ;

__attribute__((used)) static int FUNC_2(struct xenvif_queue *VAR_1, struct sk_buff *VAR_2)
{
 bool VAR_3 = 0;






 if (VAR_2->ip_summed != VAR_0 && FUNC_1(VAR_2)) {
  VAR_1->stats.rx_gso_checksum_fixup++;
  VAR_2->ip_summed = VAR_0;
  VAR_3 = 1;
 }


 if (VAR_2->ip_summed != VAR_0)
  return 0;

 return FUNC_0(VAR_2, VAR_3);
}
