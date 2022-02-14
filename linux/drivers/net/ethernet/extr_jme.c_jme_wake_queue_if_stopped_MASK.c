
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct jme_ring {int nr_free; } ;
struct jme_adapter {scalar_t__ tx_wake_threshold; int dev; struct jme_ring* txring; } ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (struct jme_adapter*,int ,int ,char*) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 () ;
 int VAR_0 ;
 scalar_t__ FUNC_5 (int) ;

__attribute__((used)) static void
FUNC_6(struct jme_adapter *VAR_1)
{
 struct jme_ring *VAR_2 = &(VAR_1->txring[0]);

 FUNC_4();
 if (FUNC_5(FUNC_2(VAR_1->dev) &&
 FUNC_0(&VAR_2->nr_free) >= (VAR_1->tx_wake_threshold))) {
  FUNC_1(VAR_1, VAR_0, VAR_1->dev, "TX Queue Waked\n");
  FUNC_3(VAR_1->dev);
 }

}
