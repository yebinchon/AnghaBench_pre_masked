
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int rc; int request_type; } ;
struct vmmdev_hypervisorinfo {unsigned long hypervisor_start; scalar_t__ hypervisor_size; TYPE_1__ header; } ;
struct vbg_dev {struct page* guest_mappings_dummy_page; void* guest_mappings; } ;
struct page {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (void*,int) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_2 (struct page*) ;
 struct page* FUNC_3 (int ) ;
 int FUNC_4 (struct page**) ;
 struct page** FUNC_5 (int,int,int ) ;
 struct vmmdev_hypervisorinfo* FUNC_6 (int,int ,int ) ;
 int FUNC_7 (struct vmmdev_hypervisorinfo*,int) ;
 int FUNC_8 (struct vbg_dev*,struct vmmdev_hypervisorinfo*) ;
 void* FUNC_9 (struct page**,int,int ,int ) ;
 int FUNC_10 (void*) ;

__attribute__((used)) static void FUNC_11(struct vbg_dev *VAR_11)
{
 struct vmmdev_hypervisorinfo *VAR_12;
 void *VAR_13[VAR_2];
 struct page **VAR_14 = ((void*)0);
 u32 VAR_15, VAR_16;
 int VAR_17, VAR_18;


 VAR_12 = FUNC_6(sizeof(*VAR_12), VAR_8,
       VAR_6);
 if (!VAR_12)
  return;

 VAR_12->hypervisor_start = 0;
 VAR_12->hypervisor_size = 0;
 VAR_18 = FUNC_8(VAR_11, VAR_12);
 if (VAR_18 < 0)
  goto out;





 if (VAR_12->hypervisor_size == 0)
  goto out;

 VAR_16 = VAR_12->hypervisor_size;

 VAR_15 = FUNC_0(VAR_12->hypervisor_size) + VAR_5;

 VAR_14 = FUNC_5(VAR_15 >> VAR_4, sizeof(*VAR_14), VAR_1);
 if (!VAR_14)
  goto out;

 VAR_11->guest_mappings_dummy_page = FUNC_3(VAR_0);
 if (!VAR_11->guest_mappings_dummy_page)
  goto out;

 for (VAR_17 = 0; VAR_17 < (VAR_15 >> VAR_4); VAR_17++)
  VAR_14[VAR_17] = VAR_11->guest_mappings_dummy_page;





 for (VAR_17 = 0; VAR_17 < VAR_2; VAR_17++) {
  VAR_13[VAR_17] = FUNC_9(VAR_14, (VAR_15 >> VAR_4),
      VAR_10, VAR_3);
  if (!VAR_13[VAR_17])
   break;

  VAR_12->header.request_type = VAR_9;
  VAR_12->header.rc = VAR_7;
  VAR_12->hypervisor_size = VAR_16;
  VAR_12->hypervisor_start =
   (unsigned long)FUNC_1(VAR_13[VAR_17], VAR_5);

  VAR_18 = FUNC_8(VAR_11, VAR_12);
  if (VAR_18 >= 0) {
   VAR_11->guest_mappings = VAR_13[VAR_17];
   break;
  }
 }


 while (--VAR_17 >= 0)
  FUNC_10(VAR_13[VAR_17]);


 if (!VAR_11->guest_mappings) {
  FUNC_2(VAR_11->guest_mappings_dummy_page);
  VAR_11->guest_mappings_dummy_page = ((void*)0);
 }

out:
 FUNC_7(VAR_12, sizeof(*VAR_12));
 FUNC_4(VAR_14);
}
