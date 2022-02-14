
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct bnxt {int flags; int dev; int rsscos_nr_ctxs; int rx_nr_rings; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int) ;
 int VAR_1 ;
 int FUNC_1 (struct bnxt*,int ) ;
 int FUNC_2 (struct bnxt*,int ,int) ;
 int FUNC_3 (struct bnxt*,int ) ;
 int FUNC_4 (struct bnxt*,int ,int) ;
 int FUNC_5 (int ,char*,int ,int,...) ;

__attribute__((used)) static int FUNC_6(struct bnxt *VAR_2, u16 VAR_3)
{
 int VAR_4, VAR_5, VAR_6;

 VAR_6 = FUNC_0(VAR_2->rx_nr_rings, 64);
 for (VAR_5 = 0; VAR_5 < VAR_6; VAR_5++) {
  VAR_4 = FUNC_2(VAR_2, VAR_3, VAR_5);
  if (VAR_4) {
   FUNC_5(VAR_2->dev, "hwrm vnic %d ctx %d alloc failure rc: %x\n",
       VAR_3, VAR_5, VAR_4);
   break;
  }
  VAR_2->rsscos_nr_ctxs++;
 }
 if (VAR_5 < VAR_6)
  return -VAR_1;

 VAR_4 = FUNC_4(VAR_2, VAR_3, 1);
 if (VAR_4) {
  FUNC_5(VAR_2->dev, "hwrm vnic %d set rss failure rc: %d\n",
      VAR_3, VAR_4);
  return VAR_4;
 }
 VAR_4 = FUNC_1(VAR_2, VAR_3);
 if (VAR_4) {
  FUNC_5(VAR_2->dev, "hwrm vnic %d cfg failure rc: %x\n",
      VAR_3, VAR_4);
  return VAR_4;
 }
 if (VAR_2->flags & VAR_0) {
  VAR_4 = FUNC_3(VAR_2, VAR_3);
  if (VAR_4) {
   FUNC_5(VAR_2->dev, "hwrm vnic %d set hds failure rc: %x\n",
       VAR_3, VAR_4);
  }
 }
 return VAR_4;
}
