
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct raw3215_info {scalar_t__ count; int cdev; int flags; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct raw3215_info*) ;
 int FUNC_2 (int ,unsigned long) ;
 int FUNC_3 (int ,unsigned long) ;

__attribute__((used)) static void FUNC_4(struct raw3215_info *VAR_1)
{
 unsigned long VAR_2;

 FUNC_2(FUNC_0(VAR_1->cdev), VAR_2);
 if (VAR_1->count > 0) {
  VAR_1->flags |= VAR_0;
  FUNC_1(VAR_1);
  VAR_1->flags &= ~VAR_0;
 }
 FUNC_3(FUNC_0(VAR_1->cdev), VAR_2);
}
