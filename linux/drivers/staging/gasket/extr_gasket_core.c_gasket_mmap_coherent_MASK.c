
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ ulong ;
struct vm_area_struct {scalar_t__ vm_end; scalar_t__ vm_start; int vm_page_prot; } ;
struct TYPE_5__ {scalar_t__ permissions; } ;
struct gasket_driver_desc {TYPE_2__ coherent_buffer_description; } ;
struct TYPE_6__ {scalar_t__ const length_bytes; int phys_base; } ;
struct gasket_dev {TYPE_3__ coherent_buffer; int dev; TYPE_1__* internal_desc; } ;
struct TYPE_4__ {struct gasket_driver_desc* driver_desc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (struct gasket_dev*,struct vm_area_struct*,scalar_t__) ;
 int FUNC_2 (struct gasket_dev*,scalar_t__ const,int,scalar_t__) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct vm_area_struct*,scalar_t__,int,scalar_t__ const,int ) ;
 int FUNC_5 (int) ;

__attribute__((used)) static int FUNC_6(struct gasket_dev *VAR_3,
    struct vm_area_struct *VAR_4)
{
 const struct gasket_driver_desc *VAR_5 =
  VAR_3->internal_desc->driver_desc;
 const ulong VAR_6 = VAR_4->vm_end - VAR_4->vm_start;
 int VAR_7;
 ulong VAR_8;

 if (VAR_6 == 0 || VAR_6 >
     VAR_3->coherent_buffer.length_bytes) {
  FUNC_5(-VAR_0);
  return -VAR_0;
 }

 VAR_8 = VAR_5->coherent_buffer_description.permissions;
 if (!FUNC_1(VAR_3, VAR_4, VAR_8)) {
  FUNC_0(VAR_3->dev, "Permission checking failed.\n");
  FUNC_5(-VAR_1);
  return -VAR_1;
 }

 VAR_4->vm_page_prot = FUNC_3(VAR_4->vm_page_prot);

 VAR_7 = FUNC_4(VAR_4, VAR_4->vm_start,
         (VAR_3->coherent_buffer.phys_base) >>
         VAR_2, VAR_6, VAR_4->vm_page_prot);
 if (VAR_7) {
  FUNC_0(VAR_3->dev, "Error remapping PFN range err=%d.\n",
   VAR_7);
  FUNC_5(VAR_7);
  return VAR_7;
 }




 FUNC_2(VAR_3, VAR_6,
        VAR_3->coherent_buffer.phys_base,
        VAR_4->vm_start);
 return 0;
}
