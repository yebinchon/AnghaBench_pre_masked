
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xol_area {int vaddr; int slot_count; int wq; int bitmap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int,int ) ;
 int FUNC_4 (int ,int) ;

__attribute__((used)) static unsigned long FUNC_5(struct xol_area *VAR_2)
{
 unsigned long VAR_3;
 int VAR_4;

 do {
  VAR_4 = FUNC_2(VAR_2->bitmap, VAR_0);
  if (VAR_4 < VAR_0) {
   if (!FUNC_3(VAR_4, VAR_2->bitmap))
    break;

   VAR_4 = VAR_0;
   continue;
  }
  FUNC_4(VAR_2->wq, (FUNC_1(&VAR_2->slot_count) < VAR_0));
 } while (VAR_4 >= VAR_0);

 VAR_3 = VAR_2->vaddr + (VAR_4 * VAR_1);
 FUNC_0(&VAR_2->slot_count);

 return VAR_3;
}
