
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u16 ;
struct bnxt_vnic_info {int flags; } ;
struct bnxt {int flags; int dev; int rsscos_nr_ctxs; struct bnxt_vnic_info* vnic_info; } ;


 scalar_t__ FUNC_0 (struct bnxt*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct bnxt*,size_t) ;
 int FUNC_2 (struct bnxt*,size_t,int) ;
 int FUNC_3 (struct bnxt*,size_t) ;
 int FUNC_4 (struct bnxt*,size_t,int) ;
 int FUNC_5 (int ,char*,size_t,int) ;

__attribute__((used)) static int FUNC_6(struct bnxt *VAR_2, u16 VAR_3)
{
 struct bnxt_vnic_info *VAR_4 = &VAR_2->vnic_info[VAR_3];
 int VAR_5;

 if (VAR_4->flags & VAR_1)
  goto skip_rss_ctx;


 VAR_5 = FUNC_2(VAR_2, VAR_3, 0);
 if (VAR_5) {
  FUNC_5(VAR_2->dev, "hwrm vnic %d alloc failure rc: %x\n",
      VAR_3, VAR_5);
  goto vnic_setup_err;
 }
 VAR_2->rsscos_nr_ctxs++;

 if (FUNC_0(VAR_2)) {
  VAR_5 = FUNC_2(VAR_2, VAR_3, 1);
  if (VAR_5) {
   FUNC_5(VAR_2->dev, "hwrm vnic %d cos ctx alloc failure rc: %x\n",
       VAR_3, VAR_5);
   goto vnic_setup_err;
  }
  VAR_2->rsscos_nr_ctxs++;
 }

skip_rss_ctx:

 VAR_5 = FUNC_1(VAR_2, VAR_3);
 if (VAR_5) {
  FUNC_5(VAR_2->dev, "hwrm vnic %d cfg failure rc: %x\n",
      VAR_3, VAR_5);
  goto vnic_setup_err;
 }


 VAR_5 = FUNC_4(VAR_2, VAR_3, 1);
 if (VAR_5) {
  FUNC_5(VAR_2->dev, "hwrm vnic %d set rss failure rc: %x\n",
      VAR_3, VAR_5);
  goto vnic_setup_err;
 }

 if (VAR_2->flags & VAR_0) {
  VAR_5 = FUNC_3(VAR_2, VAR_3);
  if (VAR_5) {
   FUNC_5(VAR_2->dev, "hwrm vnic %d set hds failure rc: %x\n",
       VAR_3, VAR_5);
  }
 }

vnic_setup_err:
 return VAR_5;
}
