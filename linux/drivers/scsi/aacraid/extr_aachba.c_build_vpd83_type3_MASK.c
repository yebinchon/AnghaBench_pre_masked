
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int codeset; int identifiertype; int identifierlength; int Identifier; } ;
struct tvpd_page83 {TYPE_2__ type3; } ;
struct scsi_cmnd {int dummy; } ;
struct aac_dev {int maximum_num_containers; TYPE_1__* fsa_dev; } ;
struct TYPE_3__ {int identifier; } ;


 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (struct scsi_cmnd*) ;

__attribute__((used)) static void FUNC_2(struct tvpd_page83 *VAR_0,
  struct aac_dev *VAR_1, struct scsi_cmnd *VAR_2)
{
 int VAR_3;

 VAR_0->type3.codeset = 1;
 VAR_0->type3.identifiertype = 3;
 VAR_0->type3.identifierlength = sizeof(VAR_0->type3)
   - 4;

 for (VAR_3 = 0; VAR_3 < VAR_1->maximum_num_containers;
   VAR_3++) {

  if (FUNC_1(VAR_2) == VAR_3) {
   FUNC_0(VAR_0->type3.Identifier,
     VAR_1->fsa_dev[VAR_3].identifier,
     16);
   break;
  }
 }
}
