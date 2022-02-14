
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bnxt {scalar_t__ total_irqs; int tx_nr_rings_per_tc; int tx_nr_rings; int dev; } ;


 scalar_t__ FUNC_0 (struct bnxt*) ;
 int VAR_0 ;
 int FUNC_1 (struct bnxt*) ;
 int FUNC_2 (struct bnxt*) ;
 scalar_t__ FUNC_3 (struct bnxt*) ;
 int FUNC_4 (struct bnxt*) ;
 int FUNC_5 (struct bnxt*) ;
 int FUNC_6 (struct bnxt*,int) ;
 int FUNC_7 (struct bnxt*) ;
 int FUNC_8 (int ,char*,...) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;

int FUNC_11(struct bnxt *VAR_1, bool VAR_2)
{
 int VAR_3 = FUNC_9(VAR_1->dev);
 bool VAR_4 = 0;
 int VAR_5;

 if (!FUNC_5(VAR_1))
  return 0;

 if (VAR_2 && FUNC_0(VAR_1) &&
     FUNC_3(VAR_1) != VAR_1->total_irqs) {
  FUNC_7(VAR_1);
  FUNC_2(VAR_1);
  VAR_4 = 1;
 }
 VAR_5 = FUNC_1(VAR_1);
 if (VAR_4) {
  if (!VAR_5)
   VAR_5 = FUNC_4(VAR_1);
  FUNC_6(VAR_1, VAR_5);
 }
 if (VAR_5) {
  FUNC_8(VAR_1->dev, "ring reservation/IRQ init failure rc: %d\n", VAR_5);
  return VAR_5;
 }
 if (VAR_3 && (VAR_1->tx_nr_rings_per_tc * VAR_3 != VAR_1->tx_nr_rings)) {
  FUNC_8(VAR_1->dev, "tx ring reservation failure\n");
  FUNC_10(VAR_1->dev);
  VAR_1->tx_nr_rings_per_tc = VAR_1->tx_nr_rings;
  return -VAR_0;
 }
 return 0;
}
