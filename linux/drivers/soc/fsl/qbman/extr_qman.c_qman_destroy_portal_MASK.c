
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qman_portal {struct qm_portal_config* config; int p; int cgrs; } ;
struct qm_portal_config {int irq; } ;


 int FUNC_0 (int ,struct qman_portal*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static void FUNC_8(struct qman_portal *VAR_0)
{
 const struct qm_portal_config *VAR_1;


 FUNC_3(&VAR_0->p, 0);
 FUNC_4(&VAR_0->p);
 FUNC_4(&VAR_0->p);
 VAR_1 = VAR_0->config;

 FUNC_0(VAR_1->irq, VAR_0);

 FUNC_1(VAR_0->cgrs);
 FUNC_6(&VAR_0->p);
 FUNC_7(&VAR_0->p);
 FUNC_2(&VAR_0->p);
 FUNC_5(&VAR_0->p);

 VAR_0->config = ((void*)0);
}
