
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uld_msix_bmap {unsigned int mapsize; int lock; int msix_bmap; } ;
struct adapter {struct uld_msix_bmap msix_bmap_ulds; } ;


 int VAR_0 ;
 int FUNC_0 (unsigned int,int ) ;
 unsigned int FUNC_1 (int ,unsigned int) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_4(struct adapter *VAR_1)
{
 struct uld_msix_bmap *VAR_2 = &VAR_1->msix_bmap_ulds;
 unsigned long VAR_3;
 unsigned int VAR_4;

 FUNC_2(&VAR_2->lock, VAR_3);
 VAR_4 = FUNC_1(VAR_2->msix_bmap, VAR_2->mapsize);
 if (VAR_4 < VAR_2->mapsize) {
  FUNC_0(VAR_4, VAR_2->msix_bmap);
 } else {
  FUNC_3(&VAR_2->lock, VAR_3);
  return -VAR_0;
 }

 FUNC_3(&VAR_2->lock, VAR_3);
 return VAR_4;
}
