
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int ulong ;
struct vm_area_struct {int vm_end; int vm_start; int vm_pgoff; int vm_page_prot; } ;
struct gasket_mappable_region {int start; int length_bytes; } ;
struct gasket_driver_desc {scalar_t__ legacy_mmap_address_offset; } ;
struct gasket_dev {int dev; TYPE_2__* bar_data; TYPE_1__* internal_desc; } ;
typedef enum do_map_region_status { ____Placeholder_do_map_region_status } do_map_region_status ;
struct TYPE_4__ {int phys_base; } ;
struct TYPE_3__ {struct gasket_driver_desc* driver_desc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 () ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (struct gasket_dev const*,scalar_t__) ;
 int FUNC_3 (struct gasket_mappable_region*,int,int,struct gasket_mappable_region*,int*) ;
 scalar_t__ FUNC_4 (struct gasket_dev const*,struct vm_area_struct*,struct gasket_mappable_region*) ;
 int FUNC_5 (struct gasket_dev const*,struct vm_area_struct*,int*) ;
 int FUNC_6 (struct vm_area_struct*,int,int,int,int ) ;
 int FUNC_7 (int const,int) ;

__attribute__((used)) static enum do_map_region_status
FUNC_8(const struct gasket_dev *VAR_4, struct vm_area_struct *VAR_5,
       struct gasket_mappable_region *VAR_6)
{


 const ulong VAR_7 = 64 * 1024 * 1024;
 ulong VAR_8, VAR_9 = 0;

 const struct gasket_driver_desc *VAR_10 =
  VAR_4->internal_desc->driver_desc;

 ulong VAR_11, VAR_12;
 struct gasket_mappable_region VAR_13;
 ulong VAR_14, VAR_15;
 ulong VAR_16, VAR_17;
 int VAR_18, VAR_19;

 VAR_19 = FUNC_5(VAR_4, VAR_5, &VAR_11);
 if (VAR_19)
  return VAR_1;

 if (!FUNC_3(VAR_6, VAR_11,
      VAR_5->vm_end - VAR_5->vm_start,
      &VAR_13, &VAR_12))
  return VAR_1;
 VAR_14 = VAR_13.start;
 VAR_15 = VAR_13.length_bytes;

 VAR_16 = VAR_5->vm_start + VAR_12;
 VAR_18 =
  FUNC_2(VAR_4,
         (VAR_5->vm_pgoff << VAR_3) +
         VAR_10->legacy_mmap_address_offset);
 VAR_17 = VAR_4->bar_data[VAR_18].phys_base + VAR_14;
 while (VAR_9 < VAR_15) {




  VAR_8 = FUNC_7(VAR_7, VAR_15 - VAR_9);

  FUNC_0();
  VAR_19 = FUNC_6(VAR_5, VAR_16 + VAR_9,
      (VAR_17 + VAR_9) >>
      VAR_3, VAR_8,
      VAR_5->vm_page_prot);
  if (VAR_19) {
   FUNC_1(VAR_4->dev,
    "Error remapping PFN range.\n");
   goto fail;
  }
  VAR_9 += VAR_8;
 }

 return VAR_2;

fail:

 VAR_6->length_bytes = VAR_9;
 if (FUNC_4(VAR_4, VAR_5, VAR_6))
  FUNC_1(VAR_4->dev,
   "Error unmapping partial region 0x%lx (0x%lx bytes)\n",
   (ulong)VAR_12,
   (ulong)VAR_9);

 return VAR_0;
}
