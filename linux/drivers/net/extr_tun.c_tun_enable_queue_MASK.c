
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tun_struct {int numdisabled; } ;
struct tun_file {int next; struct tun_struct* detached; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static struct tun_struct *FUNC_1(struct tun_file *VAR_0)
{
 struct tun_struct *VAR_1 = VAR_0->detached;

 VAR_0->detached = ((void*)0);
 FUNC_0(&VAR_0->next);
 --VAR_1->numdisabled;
 return VAR_1;
}
