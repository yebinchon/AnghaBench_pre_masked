
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct asd_ocm_dir {int dummy; } ;
struct TYPE_5__ {int num; int size; struct asd_bios_chim_struct* area; } ;
struct TYPE_4__ {int present; int bld; int min; int maj; } ;
struct TYPE_6__ {TYPE_2__ ue; TYPE_1__ bios; } ;
struct asd_ha_struct {TYPE_3__ hw_prof; } ;
struct asd_bios_chim_struct {int major; int flags; int ue_size; int ue_num; int bios_build; int bios_minor; int bios_major; int * sig; } ;


 int FUNC_0 (char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct asd_ocm_dir*,int ,int*,int*) ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (struct asd_ha_struct*,void*,int,int) ;
 int FUNC_4 (struct asd_bios_chim_struct*) ;
 void* FUNC_5 (int,int ) ;
 void* FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (int *,char*,int) ;

__attribute__((used)) static int FUNC_9(struct asd_ha_struct *VAR_5,
        struct asd_ocm_dir *VAR_6)
{
 int VAR_7;
 struct asd_bios_chim_struct *VAR_8;
 u32 VAR_9, VAR_10;

 VAR_7 = FUNC_1(VAR_6, VAR_4, &VAR_9, &VAR_10);
 if (VAR_7) {
  FUNC_0("couldn't find BIOS_CHIM dir ent\n");
  goto out;
 }
 VAR_7 = -VAR_2;
 VAR_8 = FUNC_5(sizeof(*VAR_8), VAR_3);
 if (!VAR_8) {
  FUNC_2("no memory for bios_chim struct\n");
  goto out;
 }
 VAR_7 = FUNC_3(VAR_5, (void *)VAR_8, VAR_9,
          sizeof(*VAR_8));
 if (VAR_7) {
  FUNC_0("couldn't read ocm segment\n");
  goto out2;
 }
 if (FUNC_8(VAR_8->sig, "SOIB", 4)
     && FUNC_8(VAR_8->sig, "IPSA", 4)) {
  FUNC_0("BIOS_CHIM entry has no valid sig(%c%c%c%c)\n",
       VAR_8->sig[0], VAR_8->sig[1],
       VAR_8->sig[2], VAR_8->sig[3]);
  VAR_7 = -VAR_1;
  goto out2;
 }
 if (VAR_8->major != 1) {
  FUNC_2("BIOS_CHIM unsupported major version:0x%x\n",
      VAR_8->major);
  VAR_7 = -VAR_1;
  goto out2;
 }
 if (VAR_8->flags & VAR_0) {
  VAR_5->hw_prof.bios.present = 1;
  VAR_5->hw_prof.bios.maj = VAR_8->bios_major;
  VAR_5->hw_prof.bios.min = VAR_8->bios_minor;
  VAR_5->hw_prof.bios.bld = FUNC_7(VAR_8->bios_build);
  FUNC_0("BIOS present (%d,%d), %d\n",
       VAR_5->hw_prof.bios.maj,
       VAR_5->hw_prof.bios.min,
       VAR_5->hw_prof.bios.bld);
 }
 VAR_5->hw_prof.ue.num = FUNC_6(VAR_8->ue_num);
 VAR_5->hw_prof.ue.size= FUNC_6(VAR_8->ue_size);
 FUNC_0("ue num:%d, ue size:%d\n", VAR_5->hw_prof.ue.num,
      VAR_5->hw_prof.ue.size);
 VAR_10 = VAR_5->hw_prof.ue.num * VAR_5->hw_prof.ue.size;
 if (VAR_10 > 0) {
  VAR_7 = -VAR_2;
  VAR_5->hw_prof.ue.area = FUNC_5(VAR_10, VAR_3);
  if (!VAR_5->hw_prof.ue.area)
   goto out2;
  VAR_7 = FUNC_3(VAR_5, (void *)VAR_5->hw_prof.ue.area,
           VAR_9 + sizeof(*VAR_8), VAR_10);
  if (VAR_7) {
   FUNC_4(VAR_5->hw_prof.ue.area);
   VAR_5->hw_prof.ue.area = ((void*)0);
   VAR_5->hw_prof.ue.num = 0;
   VAR_5->hw_prof.ue.size = 0;
   FUNC_0("couldn't read ue entries(%d)\n", VAR_7);
  }
 }
out2:
 FUNC_4(VAR_8);
out:
 return VAR_7;
}
