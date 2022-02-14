
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sta_info {int tx_rate; size_t tx_rate_idx; scalar_t__ tx_since_last_failure; int tx_max_rate; int addr; scalar_t__ tx_consecutive_exc; int * tx_count; } ;
struct net_device {int name; } ;
struct hostap_interface {int * local; } ;
typedef int local_info_t ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int ,int ,int) ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_1 (int,struct sta_info*,int *) ;
 struct hostap_interface* FUNC_2 (struct net_device*) ;

__attribute__((used)) static int FUNC_3(struct sta_info *VAR_2, struct net_device *VAR_3)
{
 int VAR_4 = VAR_2->tx_rate;
 struct hostap_interface *VAR_5;
 local_info_t *VAR_6;

 VAR_5 = FUNC_2(VAR_3);
 VAR_6 = VAR_5->local;

 VAR_2->tx_count[VAR_2->tx_rate_idx]++;
 VAR_2->tx_since_last_failure++;
 VAR_2->tx_consecutive_exc = 0;
 if (VAR_2->tx_since_last_failure >= VAR_1 &&
     VAR_2->tx_rate_idx < VAR_2->tx_max_rate) {

  int VAR_7, VAR_8;
  VAR_7 = VAR_8 = VAR_2->tx_rate_idx;
  while (VAR_8 < VAR_2->tx_max_rate) {
   VAR_8++;
   if (FUNC_1(VAR_8, VAR_2, VAR_6)) {
    VAR_2->tx_rate_idx = VAR_8;
    break;
   }
  }
  if (VAR_7 != VAR_2->tx_rate_idx) {
   switch (VAR_2->tx_rate_idx) {
   case 0: VAR_2->tx_rate = 10; break;
   case 1: VAR_2->tx_rate = 20; break;
   case 2: VAR_2->tx_rate = 55; break;
   case 3: VAR_2->tx_rate = 110; break;
   default: VAR_2->tx_rate = 0; break;
   }
   FUNC_0(VAR_0, "%s: STA %pM TX rate raised to %d\n",
          VAR_3->name, VAR_2->addr, VAR_2->tx_rate);
  }
  VAR_2->tx_since_last_failure = 0;
 }

 return VAR_4;
}
