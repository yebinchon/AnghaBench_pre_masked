
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_cmnd {int dummy; } ;
struct qlogicfas408_priv {int qabort; } ;


 int VAR_0 ;
 struct qlogicfas408_priv* FUNC_0 (struct scsi_cmnd*) ;
 int FUNC_1 (struct qlogicfas408_priv*) ;

int FUNC_2(struct scsi_cmnd *VAR_1)
{
 struct qlogicfas408_priv *VAR_2 = FUNC_0(VAR_1);
 VAR_2->qabort = 1;
 FUNC_1(VAR_2);
 return VAR_0;
}
