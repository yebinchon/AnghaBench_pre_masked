
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qlogicfas408_priv {int dummy; } ;
struct Scsi_Host {scalar_t__ n_io_port; scalar_t__ io_port; scalar_t__ irq; } ;


 int FUNC_0 (scalar_t__,struct Scsi_Host*) ;
 struct qlogicfas408_priv* FUNC_1 (struct Scsi_Host*) ;
 int FUNC_2 (struct qlogicfas408_priv*) ;
 int FUNC_3 (scalar_t__,scalar_t__) ;
 int FUNC_4 (struct Scsi_Host*) ;
 int FUNC_5 (struct Scsi_Host*) ;

__attribute__((used)) static int FUNC_6(struct Scsi_Host *VAR_0)
{
 struct qlogicfas408_priv *VAR_1 = FUNC_1(VAR_0);

 FUNC_5(VAR_0);
 if (VAR_0->irq) {
  FUNC_2(VAR_1);
  FUNC_0(VAR_0->irq, VAR_0);
 }
 if (VAR_0->io_port && VAR_0->n_io_port)
  FUNC_3(VAR_0->io_port, VAR_0->n_io_port);
 FUNC_4(VAR_0);

 return 0;
}
