
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ubi_device {int fm_disabled; int vtbl; scalar_t__ fm; int mean_ec; int max_ec; int corr_peb_count; scalar_t__ bad_peb_count; scalar_t__ peb_count; scalar_t__ good_peb_count; TYPE_1__* mtd; } ;
struct ubi_attach_info {int max_sqnum; int mean_ec; int max_ec; int corr_peb_count; scalar_t__ bad_peb_count; } ;
struct TYPE_2__ {int size; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct ubi_attach_info* FUNC_0 () ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (struct ubi_attach_info*) ;
 scalar_t__ FUNC_3 (int ,TYPE_1__*) ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (struct ubi_device*,struct ubi_attach_info*,int) ;
 int FUNC_6 (struct ubi_device*,struct ubi_attach_info**) ;
 int FUNC_7 (struct ubi_device*,struct ubi_attach_info*,struct ubi_attach_info*) ;
 scalar_t__ FUNC_8 (struct ubi_device*) ;
 int FUNC_9 (struct ubi_device*,struct ubi_attach_info*) ;
 int FUNC_10 (struct ubi_device*) ;
 int FUNC_11 (struct ubi_device*,struct ubi_attach_info*) ;
 int FUNC_12 (struct ubi_device*) ;
 int FUNC_13 (struct ubi_device*,struct ubi_attach_info*) ;
 int FUNC_14 (int ) ;

int FUNC_15(struct ubi_device *VAR_3, int VAR_4)
{
 int VAR_5;
 struct ubi_attach_info *VAR_6;

 VAR_6 = FUNC_0();
 if (!VAR_6)
  return -VAR_0;
 VAR_5 = FUNC_5(VAR_3, VAR_6, 0);

 if (VAR_5)
  goto out_ai;

 VAR_3->bad_peb_count = VAR_6->bad_peb_count;
 VAR_3->good_peb_count = VAR_3->peb_count - VAR_3->bad_peb_count;
 VAR_3->corr_peb_count = VAR_6->corr_peb_count;
 VAR_3->max_ec = VAR_6->max_ec;
 VAR_3->mean_ec = VAR_6->mean_ec;
 FUNC_1("max. sequence number:       %llu", VAR_6->max_sqnum);

 VAR_5 = FUNC_11(VAR_3, VAR_6);
 if (VAR_5)
  goto out_ai;

 VAR_5 = FUNC_13(VAR_3, VAR_6);
 if (VAR_5)
  goto out_vtbl;

 VAR_5 = FUNC_9(VAR_3, VAR_6);
 if (VAR_5)
  goto out_wl;
 FUNC_2(VAR_6);
 return 0;

out_wl:
 FUNC_12(VAR_3);
out_vtbl:
 FUNC_10(VAR_3);
 FUNC_14(VAR_3->vtbl);
out_ai:
 FUNC_2(VAR_6);
 return VAR_5;
}
