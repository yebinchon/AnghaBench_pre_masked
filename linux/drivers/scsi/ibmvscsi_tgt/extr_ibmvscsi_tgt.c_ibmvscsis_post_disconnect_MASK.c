
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint ;
struct scsi_info {int flags; int state; int new_state; int dev; int proc_work; int work_q; } ;



 int VAR_0 ;



 int FUNC_0 (int *,int ) ;

 int VAR_1 ;






 int FUNC_1 (int *,char*,int,int,...) ;
 int FUNC_2 (int *,char*,int) ;
 int VAR_2 ;
 int FUNC_3 (int ,int *) ;

__attribute__((used)) static void FUNC_4(struct scsi_info *VAR_3, uint VAR_4,
          uint VAR_5)
{
 uint VAR_6;


 switch (VAR_4) {
 case 132:
 case 137:
 case 135:
 case 128:
  break;

 default:
  FUNC_2(&VAR_3->dev, "post_disconnect: Invalid new state %d\n",
   VAR_4);
  return;
 }

 VAR_3->flags |= VAR_5;

 FUNC_1(&VAR_3->dev, "post_disconnect: new_state 0x%x, flag_bits 0x%x, vscsi->flags 0x%x, state %hx\n",
  VAR_4, VAR_5, VAR_3->flags, VAR_3->state);

 if (!(VAR_3->flags & (VAR_0 | VAR_1))) {
  VAR_3->flags |= VAR_1;
  VAR_3->new_state = VAR_4;

  FUNC_0(&VAR_3->proc_work, VAR_2);
  (void)FUNC_3(VAR_3->work_q, &VAR_3->proc_work);
 } else {
  if (VAR_3->new_state)
   VAR_6 = VAR_3->new_state;
  else
   VAR_6 = VAR_3->state;

  switch (VAR_6) {
  case 134:
  case 132:
   break;

  case 136:
  case 137:
  case 131:
   if (VAR_4 == 132)
    VAR_3->new_state = VAR_4;
   break;

  case 135:
   switch (VAR_4) {
   case 132:
   case 137:
    VAR_3->new_state = VAR_4;
    break;
   default:
    break;
   }
   break;

  case 129:
  case 128:
  case 130:
  case 138:
  case 133:
   VAR_3->new_state = VAR_4;
   break;

  default:
   break;
  }
 }

 FUNC_1(&VAR_3->dev, "Leaving post_disconnect: flags 0x%x, new_state 0x%x\n",
  VAR_3->flags, VAR_3->new_state);
}
