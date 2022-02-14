
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ubi_device {scalar_t__ beb_rsvd_level; scalar_t__ bad_peb_limit; scalar_t__ bad_peb_count; } ;


 int FUNC_0 (struct ubi_device*,char*,scalar_t__,scalar_t__) ;

void FUNC_1(struct ubi_device *VAR_0)
{




 VAR_0->beb_rsvd_level = VAR_0->bad_peb_limit - VAR_0->bad_peb_count;
 if (VAR_0->beb_rsvd_level < 0) {
  VAR_0->beb_rsvd_level = 0;
  FUNC_0(VAR_0, "number of bad PEBs (%d) is above the expected limit (%d), not reserving any PEBs for bad PEB handling, will use available PEBs (if any)",
    VAR_0->bad_peb_count, VAR_0->bad_peb_limit);
 }
}
