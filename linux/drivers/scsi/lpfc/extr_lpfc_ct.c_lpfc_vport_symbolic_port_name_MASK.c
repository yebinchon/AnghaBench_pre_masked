
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct lpfc_vport {TYPE_1__* phba; } ;
struct TYPE_2__ {int brd_no; } ;


 int FUNC_0 (char*,size_t,char*,int ) ;

int
FUNC_1(struct lpfc_vport *VAR_0, char *VAR_1,
 size_t VAR_2)
{
 int VAR_3;






 VAR_3 = FUNC_0(VAR_1, VAR_2, "%d", VAR_0->phba->brd_no);
 return VAR_3;
}
