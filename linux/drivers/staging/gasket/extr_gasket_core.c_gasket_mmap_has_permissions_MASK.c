
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {int vm_flags; } ;
struct gasket_dev {scalar_t__ status; int dev; int dev_info; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static bool FUNC_3(struct gasket_dev *VAR_5,
     struct vm_area_struct *VAR_6,
     int VAR_7)
{
 int VAR_8;

 if (FUNC_0(VAR_0))
  return 1;


 if (VAR_5->status != VAR_1) {
  FUNC_1(VAR_5->dev, "Device is dead.\n");
  return 0;
 }


 VAR_8 =
  (VAR_6->vm_flags & (VAR_4 | VAR_3 | VAR_2));
 if (VAR_8 & ~(VAR_7)) {
  FUNC_1(VAR_5->dev,
   "Attempting to map a region with requested permissions "
   "0x%x, but region has permissions 0x%x.\n",
   VAR_8, VAR_7);
  return 0;
 }


 if ((VAR_6->vm_flags & VAR_4) &&
     !FUNC_2(&VAR_5->dev_info)) {
  FUNC_1(VAR_5->dev,
   "Attempting to mmap a region for write without owning device.\n");
  return 0;
 }

 return 1;
}
