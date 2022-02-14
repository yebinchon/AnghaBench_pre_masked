
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct qeth_card {int dummy; } ;
struct qeth_arp_cache_entry {int dummy; } ;
struct net_device {struct qeth_card* ml_priv; } ;
struct TYPE_2__ {int ifru_data; int ifru_ivalue; } ;
struct ifreq {int ifr_data; TYPE_1__ ifr_ifru; } ;
typedef enum qeth_arp_process_subcmds { ____Placeholder_qeth_arp_process_subcmds } qeth_arp_process_subcmds ;
typedef int arp_entry ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;





 int FUNC_0 (int ) ;
 int FUNC_1 (struct qeth_arp_cache_entry*,int ,int) ;
 int FUNC_2 (struct qeth_card*) ;
 int FUNC_3 (struct qeth_card*,struct qeth_arp_cache_entry*,int) ;
 int FUNC_4 (struct qeth_card*,int ) ;
 int FUNC_5 (struct qeth_card*,int ) ;

__attribute__((used)) static int FUNC_6(struct net_device *VAR_6, struct ifreq *VAR_7, int VAR_8)
{
 struct qeth_card *VAR_9 = VAR_6->ml_priv;
 struct qeth_arp_cache_entry VAR_10;
 enum qeth_arp_process_subcmds VAR_11;
 int VAR_12 = 0;

 switch (VAR_8) {
 case 128:
  if (!FUNC_0(VAR_0)) {
   VAR_12 = -VAR_3;
   break;
  }
  VAR_12 = FUNC_5(VAR_9, VAR_7->ifr_ifru.ifru_ivalue);
  break;
 case 130:
  if (!FUNC_0(VAR_0)) {
   VAR_12 = -VAR_3;
   break;
  }
  VAR_12 = FUNC_4(VAR_9, VAR_7->ifr_ifru.ifru_data);
  break;
 case 132:
 case 129:
  if (!FUNC_0(VAR_0))
   return -VAR_3;
  if (FUNC_1(&VAR_10, VAR_7->ifr_data, sizeof(VAR_10)))
   return -VAR_1;

  VAR_11 = (VAR_8 == 132) ?
    VAR_4 :
    VAR_5;
  return FUNC_3(VAR_9, &VAR_10, VAR_11);
 case 131:
  if (!FUNC_0(VAR_0)) {
   VAR_12 = -VAR_3;
   break;
  }
  VAR_12 = FUNC_2(VAR_9);
  break;
 default:
  VAR_12 = -VAR_2;
 }
 return VAR_12;
}
