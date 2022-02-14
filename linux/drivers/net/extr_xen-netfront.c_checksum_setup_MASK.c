
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {scalar_t__ ip_summed; } ;
struct netfront_info {int rx_gso_checksum_fixup; } ;
struct net_device {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 struct netfront_info* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct sk_buff*,int) ;
 scalar_t__ FUNC_3 (struct sk_buff*) ;

__attribute__((used)) static int FUNC_4(struct net_device *VAR_1, struct sk_buff *VAR_2)
{
 bool VAR_3 = 0;







 if (VAR_2->ip_summed != VAR_0 && FUNC_3(VAR_2)) {
  struct netfront_info *VAR_4 = FUNC_1(VAR_1);
  FUNC_0(&VAR_4->rx_gso_checksum_fixup);
  VAR_2->ip_summed = VAR_0;
  VAR_3 = 1;
 }


 if (VAR_2->ip_summed != VAR_0)
  return 0;

 return FUNC_2(VAR_2, VAR_3);
}
