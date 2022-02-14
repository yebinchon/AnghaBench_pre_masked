
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dcssblk_dev_info {int dummy; } ;
struct dax_device {int dummy; } ;
typedef int pgoff_t ;
typedef int pfn_t ;


 long FUNC_0 (struct dcssblk_dev_info*,int ,long,void**,int *) ;
 struct dcssblk_dev_info* FUNC_1 (struct dax_device*) ;

__attribute__((used)) static long
FUNC_2(struct dax_device *VAR_0, pgoff_t VAR_1,
  long VAR_2, void **VAR_3, pfn_t *VAR_4)
{
 struct dcssblk_dev_info *VAR_5 = FUNC_1(VAR_0);

 return FUNC_0(VAR_5, VAR_1, VAR_2, VAR_3, VAR_4);
}
