
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct cpmac_priv {struct cpmac_desc* rx_head; } ;
struct cpmac_desc {struct cpmac_desc* next; } ;


 int FUNC_0 (struct net_device*,struct cpmac_desc*) ;
 struct cpmac_priv* FUNC_1 (struct net_device*) ;

__attribute__((used)) static void FUNC_2(struct net_device *VAR_0)
{
 struct cpmac_priv *VAR_1 = FUNC_1(VAR_0);
 struct cpmac_desc *VAR_2 = VAR_1->rx_head;

 do {
  FUNC_0(VAR_0, VAR_2);
  VAR_2 = VAR_2->next;
 } while (VAR_2 != VAR_1->rx_head);
}
