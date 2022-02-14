
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfcsim_link {int shutdown; int lock; int mode; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct nfcsim_link*) ;

__attribute__((used)) static void FUNC_3(struct nfcsim_link *VAR_1)
{
 FUNC_0(&VAR_1->lock);

 VAR_1->shutdown = 1;
 VAR_1->mode = VAR_0;

 FUNC_1(&VAR_1->lock);

 FUNC_2(VAR_1);
}
