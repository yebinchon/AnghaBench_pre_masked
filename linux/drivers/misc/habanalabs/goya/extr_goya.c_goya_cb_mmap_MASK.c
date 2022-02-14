
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct vm_area_struct {int vm_flags; int vm_page_prot; int vm_start; } ;
struct hl_device {int dev; } ;
typedef int phys_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (struct vm_area_struct*,int ,int,int ,int ) ;

__attribute__((used)) static int FUNC_2(struct hl_device *VAR_7, struct vm_area_struct *VAR_8,
  u64 VAR_9, phys_addr_t VAR_10, u32 VAR_11)
{
 int VAR_12;

 VAR_8->vm_flags |= VAR_4 | VAR_6 | VAR_3 | VAR_2 |
   VAR_1 | VAR_5;

 VAR_12 = FUNC_1(VAR_8, VAR_8->vm_start, VAR_10 >> VAR_0,
    VAR_11, VAR_8->vm_page_prot);
 if (VAR_12)
  FUNC_0(VAR_7->dev, "remap_pfn_range error %d", VAR_12);

 return VAR_12;
}
