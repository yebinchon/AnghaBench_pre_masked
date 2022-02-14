
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cxl {int slices; int afu_list_lock; scalar_t__* afu; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct cxl*,int ,int) ;
 int FUNC_1 (scalar_t__,int ,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct cxl *VAR_2)
{
 int VAR_3;


 FUNC_0(VAR_2, VAR_1, 0x8000000000000017LL);


 FUNC_2(&VAR_2->afu_list_lock);
 for (VAR_3 = 0; VAR_3 < VAR_2->slices; VAR_3++) {
  if (VAR_2->afu[VAR_3])
   FUNC_1(VAR_2->afu[VAR_3], VAR_0,
          0x8000000000000000LL);
 }
 FUNC_3(&VAR_2->afu_list_lock);
}
