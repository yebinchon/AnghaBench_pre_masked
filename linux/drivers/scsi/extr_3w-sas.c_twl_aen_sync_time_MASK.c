
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_9__ ;
typedef struct TYPE_21__ TYPE_7__ ;
typedef struct TYPE_20__ TYPE_6__ ;
typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;
typedef struct TYPE_14__ TYPE_12__ ;


typedef int u32 ;
typedef scalar_t__ time64_t ;
struct TYPE_19__ {void* parameter_count; } ;
struct TYPE_17__ {TYPE_2__* sgl; } ;
struct TYPE_18__ {TYPE_3__ param; } ;
struct TYPE_22__ {int request_id; TYPE_5__ byte6_offset; int size; TYPE_4__ byte8_offset; int opcode__sgloffset; } ;
struct TYPE_21__ {int* generic_buffer_phys; int ** srb; scalar_t__* generic_buffer_virt; TYPE_6__** command_packet_virt; } ;
struct TYPE_15__ {TYPE_9__ oldcommand; } ;
struct TYPE_20__ {int data; void* parameter_size_bytes; void* parameter_id; void* table_id; TYPE_1__ command; } ;
struct TYPE_16__ {void* length; void* address; } ;
struct TYPE_14__ {int tz_minuteswest; } ;
typedef TYPE_6__ TW_Param_Apache ;
typedef TYPE_7__ TW_Device_Extension ;
typedef TYPE_6__ TW_Command_Full ;
typedef TYPE_9__ TW_Command ;


 int VAR_0 ;
 void* FUNC_0 (int) ;
 int FUNC_1 (int,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* FUNC_2 (int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (scalar_t__,int,int *) ;
 scalar_t__ FUNC_5 () ;
 int FUNC_6 (int ,int *,int) ;
 int FUNC_7 (TYPE_6__*,int ,int) ;
 TYPE_12__ VAR_4 ;
 int FUNC_8 (TYPE_7__*,int) ;

__attribute__((used)) static void FUNC_9(TW_Device_Extension *VAR_5, int VAR_6)
{
 u32 VAR_7;
 TW_Command_Full *VAR_8;
 TW_Command *VAR_9;
 TW_Param_Apache *VAR_10;
 time64_t VAR_11;


 VAR_8 = VAR_5->command_packet_virt[VAR_6];
 FUNC_7(VAR_8, 0, sizeof(TW_Command_Full));
 VAR_9 = &VAR_8->command.oldcommand;
 VAR_9->opcode__sgloffset = FUNC_1(2, VAR_1);
 VAR_9->request_id = VAR_6;
 VAR_9->byte8_offset.param.sgl[0].address = FUNC_0(VAR_5->generic_buffer_phys[VAR_6]);
 VAR_9->byte8_offset.param.sgl[0].length = FUNC_0(VAR_2);
 VAR_9->size = VAR_0;
 VAR_9->byte6_offset.parameter_count = FUNC_2(1);


 VAR_10 = (TW_Param_Apache *)VAR_5->generic_buffer_virt[VAR_6];
 FUNC_7(VAR_10, 0, VAR_2);
 VAR_10->table_id = FUNC_2(VAR_3 | 0x8000);
 VAR_10->parameter_id = FUNC_2(0x3);
 VAR_10->parameter_size_bytes = FUNC_2(4);



 VAR_11 = (FUNC_5() - (VAR_4.tz_minuteswest * 60));
 FUNC_4(VAR_11 - (3 * 86400), 604800, &VAR_7);
 VAR_7 = FUNC_3(VAR_7);

 FUNC_6(VAR_10->data, &VAR_7, sizeof(u32));


 VAR_5->srb[VAR_6] = ((void*)0);


 FUNC_8(VAR_5, VAR_6);
}
