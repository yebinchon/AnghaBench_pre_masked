
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_18__ {int opcode__sgloffset; } ;
struct TYPE_13__ {int error; } ;
struct TYPE_17__ {TYPE_1__ status_block; } ;
struct TYPE_14__ {TYPE_6__ oldcommand; } ;
struct TYPE_16__ {TYPE_2__ command; } ;
struct TYPE_15__ {int flags; int * state; TYPE_4__** command_packet_virt; int posted_request_count; scalar_t__* generic_buffer_virt; } ;
typedef TYPE_3__ TW_Device_Extension ;
typedef TYPE_4__ TW_Command_Full ;
typedef TYPE_5__ TW_Command_Apache_Header ;
typedef TYPE_6__ TW_Command ;




 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,int *) ;
 unsigned short FUNC_2 (int ) ;
 int FUNC_3 (TYPE_3__*,TYPE_5__*) ;
 scalar_t__ FUNC_4 (TYPE_3__*,int) ;
 int FUNC_5 (TYPE_3__*,int) ;
 int FUNC_6 (TYPE_3__*,int) ;

__attribute__((used)) static int FUNC_7(TW_Device_Extension *VAR_3, int VAR_4)
{
 TW_Command_Full *VAR_5;
 TW_Command *VAR_6;
 TW_Command_Apache_Header *VAR_7;
 unsigned short VAR_8;
 int VAR_9 = 1;

 VAR_7 = (TW_Command_Apache_Header *)VAR_3->generic_buffer_virt[VAR_4];
 VAR_3->posted_request_count--;
 VAR_8 = FUNC_2(VAR_7->status_block.error);
 VAR_5 = VAR_3->command_packet_virt[VAR_4];
 VAR_6 = &VAR_5->command.oldcommand;


 if (FUNC_0(VAR_6->opcode__sgloffset) == VAR_1) {

  if (FUNC_4(VAR_3, VAR_4))
   goto out2;
         else {
   VAR_9 = 0;
   goto out;
  }
 }

 switch (VAR_8) {
 case 129:

  break;
 case 128:
  FUNC_5(VAR_3, VAR_4);
  VAR_9 = 0;
  goto out;
 default:
  FUNC_3(VAR_3, VAR_7);


  if (FUNC_4(VAR_3, VAR_4))
   goto out2;
  else {
   VAR_9 = 0;
   goto out;
  }
 }
 VAR_9 = 0;
out2:
 VAR_3->state[VAR_4] = VAR_2;
 FUNC_6(VAR_3, VAR_4);
 FUNC_1(VAR_0, &VAR_3->flags);
out:
 return VAR_9;
}
