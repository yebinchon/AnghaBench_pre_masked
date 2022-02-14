
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hl_device {int asid_bitmap; int asid_mutex; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;

void FUNC_2(struct hl_device *VAR_0)
{
 FUNC_1(&VAR_0->asid_mutex);
 FUNC_0(VAR_0->asid_bitmap);
}
