
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ ulong ;
struct vm_area_struct {int vm_pgoff; } ;
struct gasket_driver_desc {TYPE_1__* bar_descriptions; scalar_t__ legacy_mmap_address_offset; } ;
struct gasket_dev {int dev; TYPE_2__* internal_desc; } ;
struct TYPE_4__ {struct gasket_driver_desc* driver_desc; } ;
struct TYPE_3__ {scalar_t__ base; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,scalar_t__) ;
 int FUNC_1 (struct gasket_dev const*,scalar_t__) ;
 int FUNC_2 (int) ;

__attribute__((used)) static int FUNC_3(const struct gasket_dev *VAR_1,
        const struct vm_area_struct *VAR_2,
        ulong *VAR_3)
{
 ulong VAR_4;
 int VAR_5;
 const struct gasket_driver_desc *VAR_6 =
  VAR_1->internal_desc->driver_desc;

 VAR_4 = (VAR_2->vm_pgoff << VAR_0) +
  VAR_6->legacy_mmap_address_offset;
 VAR_5 = FUNC_1(VAR_1, VAR_4);
 if (VAR_5 < 0) {
  FUNC_0(VAR_1->dev,
   "Unable to find matching bar for address 0x%lx\n",
   VAR_4);
  FUNC_2(VAR_5);
  return VAR_5;
 }
 *VAR_3 =
  VAR_4 - VAR_6->bar_descriptions[VAR_5].base;

 return 0;
}
