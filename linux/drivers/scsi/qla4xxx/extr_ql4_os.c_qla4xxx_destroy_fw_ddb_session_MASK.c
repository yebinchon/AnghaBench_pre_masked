
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct scsi_qla_host {int dummy; } ;
struct ddb_entry {scalar_t__ ddb_type; int sess; TYPE_1__* conn; } ;
struct TYPE_4__ {int owner; } ;
struct TYPE_3__ {int ep; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct scsi_qla_host*,struct ddb_entry*) ;
 int FUNC_3 (struct scsi_qla_host*,struct ddb_entry*) ;
 TYPE_2__ VAR_2 ;
 struct ddb_entry* FUNC_4 (struct scsi_qla_host*,int) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static void FUNC_6(struct scsi_qla_host *VAR_3)
{
 struct ddb_entry *VAR_4;
 int VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_1; VAR_5++) {

  VAR_4 = FUNC_4(VAR_3, VAR_5);
  if ((VAR_4 != ((void*)0)) &&
      (VAR_4->ddb_type == VAR_0)) {

   FUNC_2(VAR_3, VAR_4);






   FUNC_5(VAR_2.owner);
   FUNC_0(VAR_4->conn->ep);
   FUNC_3(VAR_3, VAR_4);
   FUNC_1(VAR_4->sess);
  }
 }
}
