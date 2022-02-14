
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct scsi_qla_host {TYPE_1__* iobase; } ;
struct TYPE_2__ {int ictrl; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int) ;

__attribute__((used)) static inline void
FUNC_2(struct scsi_qla_host *VAR_2)
{
 FUNC_1(&VAR_2->iobase->ictrl, (VAR_0 | VAR_1));
 FUNC_0(&VAR_2->iobase->ictrl);
}
