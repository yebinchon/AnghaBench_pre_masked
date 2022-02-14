
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ubi_device {int beb_rsvd_level; int beb_rsvd_pebs; scalar_t__ corr_peb_count; } ;
struct ubi_attach_info {int max_sqnum; } ;


 int FUNC_0 (struct ubi_device*,char*,int,...) ;

__attribute__((used)) static void FUNC_1(struct ubi_device *VAR_0,
          struct ubi_attach_info *VAR_1)
{




 if (VAR_1->max_sqnum > (1 << 18)) {
  int VAR_2 = VAR_0->beb_rsvd_level / 10;

  if (!VAR_2)
   VAR_2 = 1;
  if (VAR_0->beb_rsvd_pebs > VAR_2)
   return;
 }

 FUNC_0(VAR_0, "cannot reserve enough PEBs for bad PEB handling, reserved %d, need %d",
   VAR_0->beb_rsvd_pebs, VAR_0->beb_rsvd_level);
 if (VAR_0->corr_peb_count)
  FUNC_0(VAR_0, "%d PEBs are corrupted and not used",
    VAR_0->corr_peb_count);
}
