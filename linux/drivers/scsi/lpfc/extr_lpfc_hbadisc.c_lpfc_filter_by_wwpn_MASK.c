
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lpfc_nodelist {int nlp_portname; } ;


 scalar_t__ FUNC_0 (int *,void*,int) ;

__attribute__((used)) static int
FUNC_1(struct lpfc_nodelist *VAR_0, void *VAR_1)
{
 return FUNC_0(&VAR_0->nlp_portname, VAR_1,
        sizeof(VAR_0->nlp_portname)) == 0;
}
