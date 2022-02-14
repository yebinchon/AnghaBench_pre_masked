
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_cmnd {unsigned int cmd_len; int* cmnd; } ;
struct qlogicfas408_priv {int qbase; int int_type; int qinitid; struct scsi_cmnd* qlcmd; scalar_t__ qabort; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct qlogicfas408_priv* FUNC_0 (struct scsi_cmnd*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_3 (struct scsi_cmnd*) ;

__attribute__((used)) static void FUNC_4(struct scsi_cmnd *VAR_8)
{
 struct qlogicfas408_priv *VAR_9 = FUNC_0(VAR_8);
 int VAR_10 = VAR_9->qbase;
 int VAR_11 = VAR_9->int_type;
 unsigned int VAR_12;

 VAR_9->qabort = 0;

 VAR_0;


 FUNC_1(VAR_10 + 5);
 if (FUNC_1(VAR_10 + 5))
  FUNC_2(2, VAR_10 + 3);
 else if (FUNC_1(VAR_10 + 7) & 0x1f)
  FUNC_2(1, VAR_10 + 3);
 while (FUNC_1(VAR_10 + 5));
 VAR_1;
 FUNC_2(1, VAR_10 + 8);
 FUNC_2(0, VAR_10 + 0xb);
 FUNC_1(VAR_10 + 8);
 VAR_0;
 FUNC_2(0x40, VAR_10 + 0xb);


 FUNC_2(VAR_7, VAR_10 + 0xc);

 FUNC_2(0x40 | VAR_5 | VAR_9->qinitid, VAR_10 + 8);
 FUNC_2(VAR_4, VAR_10 + 7);
 FUNC_2(VAR_3, VAR_10 + 6);
 FUNC_2(VAR_2, VAR_10 + 5);
 FUNC_2(VAR_6 & 7, VAR_10 + 9);

 FUNC_2(FUNC_3(VAR_8), VAR_10 + 4);

 for (VAR_12 = 0; VAR_12 < VAR_8->cmd_len; VAR_12++)
  FUNC_2(VAR_8->cmnd[VAR_12], VAR_10 + 2);

 VAR_9->qlcmd = VAR_8;
 FUNC_2(0x41, VAR_10 + 3);
}
