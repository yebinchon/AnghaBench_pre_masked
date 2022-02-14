
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct htc_target {int dev; int htc_lock; int htc_flags; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct htc_target*) ;
 int FUNC_2 (struct htc_target*) ;
 int FUNC_3 (struct htc_target*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(struct htc_target *VAR_1)
{
 FUNC_4(&VAR_1->htc_lock);
 VAR_1->htc_flags |= VAR_0;
 FUNC_5(&VAR_1->htc_lock);






 FUNC_0(VAR_1->dev);

 FUNC_1(VAR_1);

 FUNC_2(VAR_1);

 FUNC_3(VAR_1);
}
