
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct uld_msix_info {int dummy; } ;
struct TYPE_2__ {int lock; void* msix_bmap; } ;
struct adapter {unsigned int num_ofld_uld; unsigned int num_uld; struct uld_msix_info* msix_info_ulds; TYPE_1__ msix_bmap_ulds; } ;


 unsigned int FUNC_0 (unsigned int) ;
 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 scalar_t__ FUNC_1 (struct adapter*) ;
 scalar_t__ FUNC_2 (struct adapter*) ;
 void* FUNC_3 (unsigned int,int,int ) ;
 int FUNC_4 (struct uld_msix_info*) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct adapter *VAR_3)
{
 struct uld_msix_info *VAR_4;
 unsigned int VAR_5 = 0;

 if (FUNC_1(VAR_3))
  VAR_5 += VAR_2 * VAR_3->num_ofld_uld;
 if (FUNC_2(VAR_3))
  VAR_5 += VAR_2 * VAR_3->num_uld;

 if (!VAR_5)
  goto out;

 VAR_4 = FUNC_3(VAR_5, sizeof(*VAR_4), VAR_1);
 if (!VAR_4)
  return -VAR_0;

 VAR_3->msix_bmap_ulds.msix_bmap = FUNC_3(FUNC_0(VAR_5),
       sizeof(long), VAR_1);
 if (!VAR_3->msix_bmap_ulds.msix_bmap) {
  FUNC_4(VAR_4);
  return -VAR_0;
 }
 FUNC_5(&VAR_3->msix_bmap_ulds.lock);
 VAR_3->msix_info_ulds = VAR_4;
out:
 return 0;
}
