
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_struct {int fasync; int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int *,int ,int ) ;

__attribute__((used)) static void FUNC_2(struct tty_struct *VAR_3)
{
 FUNC_0(VAR_2, &VAR_3->flags);
 FUNC_1(&VAR_3->fasync, VAR_1, VAR_0);
}
