
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_host_template {int dummy; } ;
struct qlogicfas408_priv {struct qlogicfas408_priv* next; } ;
struct Scsi_Host {int dummy; } ;


 int VAR_0 ;
 struct Scsi_Host* FUNC_0 (struct scsi_host_template*,int ,int ) ;
 struct qlogicfas408_priv* VAR_1 ;
 struct qlogicfas408_priv* FUNC_1 (struct Scsi_Host*) ;
 int * VAR_2 ;
 int * VAR_3 ;

__attribute__((used)) static int FUNC_2(struct scsi_host_template *VAR_4)
{
 struct Scsi_Host *VAR_5;
 struct qlogicfas408_priv *VAR_6;
 int VAR_7;

 for (VAR_7 = 0; VAR_7 < VAR_0; VAR_7++) {
  VAR_5 = FUNC_0(VAR_4, VAR_2[VAR_7], VAR_3[VAR_7]);
  if (VAR_5 == ((void*)0)) {

   break;
  }
  VAR_6 = FUNC_1(VAR_5);
  VAR_6->next = VAR_1;
  VAR_1 = VAR_6;
 }

 return VAR_7;
}
