
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct isci_host {TYPE_2__* scu_registers; } ;
struct TYPE_3__ {int unsolicited_frame_put_pointer; int unsolicited_frame_get_pointer; int unsolicited_frame_queue_control; } ;
struct TYPE_4__ {TYPE_1__ sdma; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int,int *) ;

__attribute__((used)) static void FUNC_5(struct isci_host *VAR_4)
{
 u32 VAR_5;
 u32 VAR_6;
 u32 VAR_7;


 VAR_5 =
  FUNC_0(VAR_2, VAR_3);

 FUNC_4(VAR_5,
        &VAR_4->scu_registers->sdma.unsolicited_frame_queue_control);


 VAR_6 = (
  FUNC_2(VAR_1, 0)
  | FUNC_1(VAR_0)
  );

 FUNC_4(VAR_6,
        &VAR_4->scu_registers->sdma.unsolicited_frame_get_pointer);

 VAR_7 = FUNC_3(VAR_1, 0);
 FUNC_4(VAR_7,
        &VAR_4->scu_registers->sdma.unsolicited_frame_put_pointer);
}
