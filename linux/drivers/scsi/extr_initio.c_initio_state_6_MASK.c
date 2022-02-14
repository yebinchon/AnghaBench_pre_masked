
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_ctrl_blk {int next_state; } ;
struct initio_host {int phase; scalar_t__ addr; struct scsi_ctrl_blk* active; } ;





 int VAR_0 ;


 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct initio_host*) ;
 int FUNC_1 (struct initio_host*) ;
 int FUNC_2 (struct initio_host*) ;
 int FUNC_3 (struct initio_host*) ;
 int FUNC_4 (struct initio_host*) ;
 int FUNC_5 (int ,scalar_t__) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (struct initio_host*) ;

__attribute__((used)) static int FUNC_8(struct initio_host * VAR_4)
{
 struct scsi_ctrl_blk *VAR_5 = VAR_4->active;




 for (;;) {
  switch (VAR_4->phase) {
  case 128:
   if ((FUNC_2(VAR_4)) == -1)
    return -1;
   break;

  case 130:
   VAR_5->next_state = 6;
   if ((FUNC_1(VAR_4)) == -1)
    return -1;
   break;

  case 129:
   FUNC_5(VAR_0, VAR_4->addr + VAR_3);
   FUNC_5(VAR_1, VAR_4->addr + VAR_2);
   if (FUNC_7(VAR_4) == -1)
    return -1;
   break;

  case 132:
   return FUNC_3(VAR_4);

  case 131:
   return FUNC_4(VAR_4);

  default:
   return FUNC_0(VAR_4);
  }
 }
}
