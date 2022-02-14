
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_struct {int dummy; } ;
struct raw3215_info {scalar_t__ count; int tlet; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct raw3215_info*) ;
 int FUNC_1 (struct raw3215_info*) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct raw3215_info *VAR_2, struct tty_struct *VAR_3)
{
 FUNC_0(VAR_2);
 FUNC_1(VAR_2);
 if (VAR_3 && VAR_0 - VAR_2->count >= VAR_1)
  FUNC_2(&VAR_2->tlet);
}
