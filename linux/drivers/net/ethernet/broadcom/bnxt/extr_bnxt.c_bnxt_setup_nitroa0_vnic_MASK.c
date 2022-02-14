
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bnxt {int dev; scalar_t__ rx_nr_rings; } ;


 unsigned int FUNC_0 (struct bnxt*,int,scalar_t__,int) ;
 unsigned int FUNC_1 (struct bnxt*,int) ;
 int FUNC_2 (int ,char*,unsigned int) ;

__attribute__((used)) static int FUNC_3(struct bnxt *VAR_0)
{
 unsigned int VAR_1 = 0;

 VAR_1 = FUNC_0(VAR_0, 1, VAR_0->rx_nr_rings - 1, 1);
 if (VAR_1) {
  FUNC_2(VAR_0->dev, "Cannot allocate special vnic for NS2 A0: %x\n",
      VAR_1);
  return VAR_1;
 }

 VAR_1 = FUNC_1(VAR_0, 1);
 if (VAR_1) {
  FUNC_2(VAR_0->dev, "Cannot allocate special vnic for NS2 A0: %x\n",
      VAR_1);
  return VAR_1;
 }
 return VAR_1;
}
