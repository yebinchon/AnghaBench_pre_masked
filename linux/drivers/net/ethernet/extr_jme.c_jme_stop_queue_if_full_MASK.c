
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct jme_ring {int nr_free; int next_to_clean; struct jme_buffer_info* bufinf; } ;
struct jme_buffer_info {scalar_t__ start_xmit; scalar_t__ skb; } ;
struct jme_adapter {int tx_wake_threshold; int dev; struct jme_ring* txring; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (struct jme_adapter*,int ,int ,char*,...) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 () ;
 int VAR_3 ;
 scalar_t__ FUNC_5 (int) ;

__attribute__((used)) static void
FUNC_6(struct jme_adapter *VAR_4)
{
 struct jme_ring *VAR_5 = &(VAR_4->txring[0]);
 struct jme_buffer_info *VAR_6 = VAR_5->bufinf;
 int VAR_7 = FUNC_0(&VAR_5->next_to_clean);

 VAR_6 += VAR_7;

 FUNC_4();
 if (FUNC_5(FUNC_0(&VAR_5->nr_free) < (VAR_0+2))) {
  FUNC_2(VAR_4->dev);
  FUNC_1(VAR_4, VAR_3, VAR_4->dev, "TX Queue Paused\n");
  FUNC_4();
  if (FUNC_0(&VAR_5->nr_free)
   >= (VAR_4->tx_wake_threshold)) {
   FUNC_3(VAR_4->dev);
   FUNC_1(VAR_4, VAR_3, VAR_4->dev, "TX Queue Fast Waked\n");
  }
 }

 if (FUNC_5(VAR_6->start_xmit &&
   (VAR_2 - VAR_6->start_xmit) >= VAR_1 &&
   VAR_6->skb)) {
  FUNC_2(VAR_4->dev);
  FUNC_1(VAR_4, VAR_3, VAR_4->dev,
      "TX Queue Stopped %d@%lu\n", VAR_7, VAR_2);
 }
}
