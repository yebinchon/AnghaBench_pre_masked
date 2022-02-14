
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wl1271 {int mutex; int wl_lock; int tx_work; int hw; int flags; int dev; int irq; int * elp_compl; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int ,int *) ;
 int FUNC_9 (int *,unsigned long) ;
 int FUNC_10 (int *,unsigned long) ;
 scalar_t__ FUNC_11 (int ,int *) ;
 int FUNC_12 (int ,char*) ;
 scalar_t__ FUNC_13 (struct wl1271*) ;
 int FUNC_14 (struct wl1271*) ;
 int FUNC_15 (struct wl1271*) ;

__attribute__((used)) static irqreturn_t FUNC_16(int VAR_7, void *VAR_8)
{
 int VAR_9;
 unsigned long VAR_10;
 struct wl1271 *VAR_11 = VAR_8;


 FUNC_9(&VAR_11->wl_lock, VAR_10);
 FUNC_8(VAR_3, &VAR_11->flags);
 if (VAR_11->elp_compl) {
  FUNC_2(VAR_11->elp_compl);
  VAR_11->elp_compl = ((void*)0);
 }

 if (FUNC_11(VAR_5, &VAR_11->flags)) {

  FUNC_8(VAR_4, &VAR_11->flags);
  FUNC_12(VAR_0, "should not enqueue work");
  FUNC_3(VAR_11->irq);
  FUNC_7(VAR_11->dev, 0);
  FUNC_10(&VAR_11->wl_lock, VAR_10);
  return VAR_1;
 }
 FUNC_10(&VAR_11->wl_lock, VAR_10);


 FUNC_8(VAR_6, &VAR_11->flags);
 FUNC_0(&VAR_11->tx_work);

 FUNC_5(&VAR_11->mutex);

 VAR_9 = FUNC_15(VAR_11);
 if (VAR_9)
  FUNC_14(VAR_11);

 FUNC_9(&VAR_11->wl_lock, VAR_10);

 FUNC_1(VAR_6, &VAR_11->flags);
 if (!FUNC_11(VAR_2, &VAR_11->flags) &&
     FUNC_13(VAR_11) > 0)
  FUNC_4(VAR_11->hw, &VAR_11->tx_work);
 FUNC_10(&VAR_11->wl_lock, VAR_10);

 FUNC_6(&VAR_11->mutex);

 return VAR_1;
}
