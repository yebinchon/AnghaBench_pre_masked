
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct lpfc_vport {scalar_t__ fc_myDID; TYPE_1__* phba; } ;
struct lpfc_nodelist {scalar_t__ nlp_DID; } ;
struct TYPE_6__ {scalar_t__ domain; scalar_t__ area; scalar_t__ id; } ;
struct TYPE_7__ {scalar_t__ word; TYPE_2__ b; } ;
struct TYPE_8__ {TYPE_3__ un; } ;
struct TYPE_5__ {scalar_t__ fc_topology; } ;
typedef TYPE_4__ D_ID ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static int
FUNC_0(struct lpfc_vport *VAR_2, struct lpfc_nodelist *VAR_3,
       uint32_t VAR_4)
{
 D_ID VAR_5, VAR_6, VAR_7;

 if (VAR_4 == VAR_0)
  return 0;


 if (VAR_3->nlp_DID == VAR_4)
  return 1;


 VAR_5.un.word = VAR_2->fc_myDID;
 if ((VAR_5.un.b.domain == 0) && (VAR_5.un.b.area == 0)) {
  return 0;
 }

 VAR_7.un.word = VAR_4;
 VAR_6.un.word = VAR_3->nlp_DID;
 if (VAR_7.un.b.id == VAR_6.un.b.id) {
  if ((VAR_5.un.b.domain == VAR_7.un.b.domain) &&
      (VAR_5.un.b.area == VAR_7.un.b.area)) {
   if ((VAR_6.un.b.domain == 0) &&
       (VAR_6.un.b.area == 0)) {
    if (VAR_6.un.b.id &&
        VAR_2->phba->fc_topology ==
        VAR_1)
     return 1;
   }
   return 0;
  }

  VAR_7.un.word = VAR_3->nlp_DID;
  if ((VAR_5.un.b.domain == VAR_6.un.b.domain) &&
      (VAR_5.un.b.area == VAR_6.un.b.area)) {
   if ((VAR_7.un.b.domain == 0) &&
       (VAR_7.un.b.area == 0)) {
    if (VAR_7.un.b.id)
     return 1;
   }
  }
 }
 return 0;
}
