
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pvr2_hdw {int big_lock; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct pvr2_hdw*) ;
 int FUNC_3 (struct pvr2_hdw*,int ) ;

int FUNC_4(struct pvr2_hdw *VAR_0)
{
 int VAR_1;
 FUNC_1(VAR_0->big_lock);
 VAR_1 = FUNC_2(VAR_0);
 FUNC_0(VAR_0->big_lock);
 if (!VAR_1) return 0;
 return FUNC_3(VAR_0,0);
}
