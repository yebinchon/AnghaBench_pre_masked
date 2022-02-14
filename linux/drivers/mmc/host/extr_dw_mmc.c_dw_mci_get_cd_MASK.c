
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mmc_host {int caps; int class_dev; } ;
struct dw_mci_slot {int id; int flags; struct dw_mci* host; } ;
struct dw_mci {int lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (struct dw_mci*,int ) ;
 int FUNC_3 (struct mmc_host*) ;
 int FUNC_4 (struct mmc_host*) ;
 struct dw_mci_slot* FUNC_5 (struct mmc_host*) ;
 int FUNC_6 (int ,int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int ,int *) ;
 int FUNC_10 (int ,int *) ;
 int FUNC_11 (int ,int *) ;

__attribute__((used)) static int FUNC_12(struct mmc_host *VAR_3)
{
 int VAR_4;
 struct dw_mci_slot *VAR_5 = FUNC_5(VAR_3);
 struct dw_mci *VAR_6 = VAR_5->host;
 int VAR_7 = FUNC_4(VAR_3);


 if (((VAR_3->caps & VAR_2)
    || !FUNC_3(VAR_3))) {
  VAR_4 = 1;

  if (!FUNC_11(VAR_1, &VAR_5->flags)) {
   if (VAR_3->caps & VAR_2) {
    FUNC_1(&VAR_3->class_dev,
     "card is polling.\n");
   } else {
    FUNC_1(&VAR_3->class_dev,
     "card is non-removable.\n");
   }
   FUNC_6(VAR_1, &VAR_5->flags);
  }

  return VAR_4;
 } else if (VAR_7 >= 0)
  VAR_4 = VAR_7;
 else
  VAR_4 = (FUNC_2(VAR_5->host, VAR_0) & (1 << VAR_5->id))
   == 0 ? 1 : 0;

 FUNC_7(&VAR_6->lock);
 if (VAR_4 && !FUNC_10(VAR_1, &VAR_5->flags))
  FUNC_0(&VAR_3->class_dev, "card is present\n");
 else if (!VAR_4 &&
   !FUNC_9(VAR_1, &VAR_5->flags))
  FUNC_0(&VAR_3->class_dev, "card is not present\n");
 FUNC_8(&VAR_6->lock);

 return VAR_4;
}
