
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mmc_host {int class_dev; } ;
struct dw_mci_slot {int id; int host; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,char*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (struct mmc_host*) ;
 struct dw_mci_slot* FUNC_3 (struct mmc_host*) ;

__attribute__((used)) static int FUNC_4(struct mmc_host *VAR_1)
{
 int VAR_2;
 struct dw_mci_slot *VAR_3 = FUNC_3(VAR_1);
 int VAR_4 = FUNC_2(VAR_1);


 if (VAR_4 >= 0)
  VAR_2 = VAR_4;
 else
  VAR_2 =
   FUNC_1(VAR_3->host, VAR_0) & (1 << VAR_3->id) ? 1 : 0;

 FUNC_0(&VAR_1->class_dev, "card is %s\n",
  VAR_2 ? "read-only" : "read-write");

 return VAR_2;
}
