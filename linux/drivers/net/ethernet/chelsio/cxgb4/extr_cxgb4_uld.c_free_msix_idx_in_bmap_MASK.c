
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uld_msix_bmap {int lock; int msix_bmap; } ;
struct adapter {struct uld_msix_bmap msix_bmap_ulds; } ;


 int FUNC_0 (unsigned int,int ) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_3(struct adapter *VAR_0, unsigned int VAR_1)
{
 struct uld_msix_bmap *VAR_2 = &VAR_0->msix_bmap_ulds;
 unsigned long VAR_3;

 FUNC_1(&VAR_2->lock, VAR_3);
 FUNC_0(VAR_1, VAR_2->msix_bmap);
 FUNC_2(&VAR_2->lock, VAR_3);
}
