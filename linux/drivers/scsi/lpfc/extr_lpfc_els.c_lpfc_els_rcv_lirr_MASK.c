
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ vendorUnique; int lsRjtRsnCodeExp; int lsRjtRsnCode; scalar_t__ lsRjtRsvd0; } ;
struct TYPE_3__ {int lsRjtError; TYPE_2__ b; } ;
struct ls_rjt {TYPE_1__ un; } ;
struct lpfc_vport {int dummy; } ;
struct lpfc_nodelist {int dummy; } ;
struct lpfc_iocbq {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct lpfc_vport*,int ,struct lpfc_iocbq*,struct lpfc_nodelist*,int *) ;

__attribute__((used)) static int
FUNC_1(struct lpfc_vport *VAR_2, struct lpfc_iocbq *VAR_3,
    struct lpfc_nodelist *VAR_4)
{
 struct ls_rjt VAR_5;


 VAR_5.un.b.lsRjtRsvd0 = 0;
 VAR_5.un.b.lsRjtRsnCode = VAR_1;
 VAR_5.un.b.lsRjtRsnCodeExp = VAR_0;
 VAR_5.un.b.vendorUnique = 0;
 FUNC_0(VAR_2, VAR_5.un.lsRjtError, VAR_3, VAR_4, ((void*)0));
 return 0;
}
