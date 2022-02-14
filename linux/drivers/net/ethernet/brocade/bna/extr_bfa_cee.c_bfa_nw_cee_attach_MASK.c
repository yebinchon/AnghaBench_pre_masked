
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bfa_ioc {int dummy; } ;
struct bfa_cee {int ioc_notify; struct bfa_ioc* ioc; void* dev; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,int ,struct bfa_cee*) ;
 int FUNC_2 (struct bfa_ioc*,int ,int ,struct bfa_cee*) ;
 int FUNC_3 (struct bfa_ioc*,int *) ;

void
FUNC_4(struct bfa_cee *VAR_3, struct bfa_ioc *VAR_4,
  void *VAR_5)
{
 FUNC_0(!(VAR_3 != ((void*)0)));
 VAR_3->dev = VAR_5;
 VAR_3->ioc = VAR_4;

 FUNC_2(VAR_3->ioc, VAR_0, VAR_1, VAR_3);
 FUNC_1(&VAR_3->ioc_notify, VAR_2, VAR_3);
 FUNC_3(VAR_3->ioc, &VAR_3->ioc_notify);
}
