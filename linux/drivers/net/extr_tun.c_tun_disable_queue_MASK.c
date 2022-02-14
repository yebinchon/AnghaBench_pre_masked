
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tun_struct {int numdisabled; int disabled; } ;
struct tun_file {int next; struct tun_struct* detached; } ;


 int FUNC_0 (int *,int *) ;

__attribute__((used)) static void FUNC_1(struct tun_struct *VAR_0, struct tun_file *VAR_1)
{
 VAR_1->detached = VAR_0;
 FUNC_0(&VAR_1->next, &VAR_0->disabled);
 ++VAR_0->numdisabled;
}
