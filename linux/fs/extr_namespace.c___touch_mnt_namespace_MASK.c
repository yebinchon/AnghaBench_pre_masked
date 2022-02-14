
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mnt_namespace {scalar_t__ event; int poll; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct mnt_namespace *VAR_1)
{
 if (VAR_1 && VAR_1->event != VAR_0) {
  VAR_1->event = VAR_0;
  FUNC_0(&VAR_1->poll);
 }
}
