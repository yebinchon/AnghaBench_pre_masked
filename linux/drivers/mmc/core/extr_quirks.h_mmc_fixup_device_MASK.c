
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u64 ;
typedef scalar_t__ u16 ;
struct mmc_fixup {scalar_t__ manfid; scalar_t__ oemid; scalar_t__ name; scalar_t__ cis_vendor; scalar_t__ cis_device; scalar_t__ ext_csd_rev; scalar_t__ rev_start; scalar_t__ rev_end; int data; int (* vendor_fixup ) (struct mmc_card*,int ) ;} ;
struct TYPE_6__ {scalar_t__ rev; } ;
struct TYPE_5__ {scalar_t__ vendor; scalar_t__ device; } ;
struct TYPE_4__ {scalar_t__ manfid; scalar_t__ oemid; int prod_name; } ;
struct mmc_card {int dev; TYPE_3__ ext_csd; TYPE_2__ cis; TYPE_1__ cid; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_0 (struct mmc_card*) ;
 int FUNC_1 (int *,char*,int (*) (struct mmc_card*,int )) ;
 int FUNC_2 (scalar_t__,int ,int) ;
 int FUNC_3 (struct mmc_card*,int ) ;

__attribute__((used)) static inline void FUNC_4(struct mmc_card *VAR_5,
        const struct mmc_fixup *VAR_6)
{
 const struct mmc_fixup *VAR_7;
 u64 VAR_8 = FUNC_0(VAR_5);

 for (VAR_7 = VAR_6; VAR_7->vendor_fixup; VAR_7++) {
  if ((VAR_7->manfid == VAR_0 ||
       VAR_7->manfid == VAR_5->cid.manfid) &&
      (VAR_7->oemid == VAR_2 ||
       VAR_7->oemid == VAR_5->cid.oemid) &&
      (VAR_7->name == VAR_1 ||
       !FUNC_2(VAR_7->name, VAR_5->cid.prod_name,
         sizeof(VAR_5->cid.prod_name))) &&
      (VAR_7->cis_vendor == VAR_5->cis.vendor ||
       VAR_7->cis_vendor == (u16) VAR_4) &&
      (VAR_7->cis_device == VAR_5->cis.device ||
       VAR_7->cis_device == (u16) VAR_4) &&
      (VAR_7->ext_csd_rev == VAR_3 ||
       VAR_7->ext_csd_rev == VAR_5->ext_csd.rev) &&
      VAR_8 >= VAR_7->rev_start && VAR_8 <= VAR_7->rev_end) {
   FUNC_1(&VAR_5->dev, "calling %ps\n", VAR_7->vendor_fixup);
   VAR_7->vendor_fixup(VAR_5, VAR_7->data);
  }
 }
}
