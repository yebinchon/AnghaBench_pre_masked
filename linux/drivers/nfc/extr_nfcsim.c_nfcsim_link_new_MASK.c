
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfcsim_link {int recv_wait; int lock; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 struct nfcsim_link* FUNC_1 (int,int ) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static struct nfcsim_link *FUNC_3(void)
{
 struct nfcsim_link *VAR_1;

 VAR_1 = FUNC_1(sizeof(struct nfcsim_link), VAR_0);
 if (!VAR_1)
  return ((void*)0);

 FUNC_2(&VAR_1->lock);
 FUNC_0(&VAR_1->recv_wait);

 return VAR_1;
}
