
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_4__ {int vendorUnique; int lsRjtRsnCodeExp; int lsRjtRsnCode; int lsRjtRsvd0; } ;
struct TYPE_5__ {int lsRjtError; TYPE_1__ b; } ;
struct ls_rjt {TYPE_2__ un; } ;
struct lpfc_vport {int dummy; } ;
struct lpfc_nodelist {int dummy; } ;
struct lpfc_iocbq {scalar_t__ context2; } ;
struct lpfc_dmabuf {scalar_t__ virt; } ;
struct TYPE_6__ {int Format; } ;
typedef TYPE_3__ RNID ;


 int VAR_0 ;
 int VAR_1 ;

 int FUNC_0 (struct lpfc_vport*,int ,struct lpfc_iocbq*,struct lpfc_nodelist*,int *) ;
 int FUNC_1 (struct lpfc_vport*,int,struct lpfc_iocbq*,struct lpfc_nodelist*) ;

__attribute__((used)) static int
FUNC_2(struct lpfc_vport *VAR_2, struct lpfc_iocbq *VAR_3,
    struct lpfc_nodelist *VAR_4)
{
 struct lpfc_dmabuf *VAR_5;
 uint32_t *VAR_6;
 RNID *VAR_7;
 struct ls_rjt VAR_8;

 VAR_5 = (struct lpfc_dmabuf *) VAR_3->context2;
 VAR_6 = (uint32_t *) VAR_5->virt;

 VAR_6++;
 VAR_7 = (RNID *) VAR_6;



 switch (VAR_7->Format) {
 case 0:
 case 128:

  FUNC_1(VAR_2, VAR_7->Format, VAR_3, VAR_4);
  break;
 default:

  VAR_8.un.b.lsRjtRsvd0 = 0;
  VAR_8.un.b.lsRjtRsnCode = VAR_1;
  VAR_8.un.b.lsRjtRsnCodeExp = VAR_0;
  VAR_8.un.b.vendorUnique = 0;
  FUNC_0(VAR_2, VAR_8.un.lsRjtError, VAR_3, VAR_4,
   ((void*)0));
 }
 return 0;
}
