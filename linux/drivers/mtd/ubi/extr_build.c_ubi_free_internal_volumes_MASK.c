
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ubi_device {int vtbl_slots; int * volumes; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int ) ;

void FUNC_3(struct ubi_device *VAR_1)
{
 int VAR_2;

 for (VAR_2 = VAR_1->vtbl_slots;
      VAR_2 < VAR_1->vtbl_slots + VAR_0; VAR_2++) {
  FUNC_1(VAR_1->volumes[VAR_2], ((void*)0));
  FUNC_2(VAR_1->volumes[VAR_2]);
  FUNC_0(VAR_1->volumes[VAR_2]);
 }
}
