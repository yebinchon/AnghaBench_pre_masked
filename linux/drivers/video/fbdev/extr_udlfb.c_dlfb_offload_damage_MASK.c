
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dlfb_data {int damage_work; int damage_lock; void* damage_y2; void* damage_y; void* damage_x2; void* damage_x; } ;


 void* FUNC_0 (int,void*) ;
 void* FUNC_1 (int,void*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_5(struct dlfb_data *VAR_0, int VAR_1, int VAR_2, int VAR_3, int VAR_4)
{
 unsigned long VAR_5;
 int VAR_6 = VAR_1 + VAR_3;
 int VAR_7 = VAR_2 + VAR_4;

 if (VAR_1 >= VAR_6 || VAR_2 >= VAR_7)
  return;

 FUNC_3(&VAR_0->damage_lock, VAR_5);
 VAR_0->damage_x = FUNC_1(VAR_1, VAR_0->damage_x);
 VAR_0->damage_x2 = FUNC_0(VAR_6, VAR_0->damage_x2);
 VAR_0->damage_y = FUNC_1(VAR_2, VAR_0->damage_y);
 VAR_0->damage_y2 = FUNC_0(VAR_7, VAR_0->damage_y2);
 FUNC_4(&VAR_0->damage_lock, VAR_5);

 FUNC_2(&VAR_0->damage_work);
}
