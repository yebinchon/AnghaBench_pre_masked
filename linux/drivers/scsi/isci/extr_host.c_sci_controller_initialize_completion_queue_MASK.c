
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u32 ;
struct isci_host {int* completion_queue; TYPE_1__* smu_registers; scalar_t__ completion_queue_get; } ;
struct TYPE_2__ {int completion_queue_put; int completion_queue_get; int completion_queue_control; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 scalar_t__ VAR_5 ;
 size_t FUNC_0 (scalar_t__) ;
 size_t FUNC_1 (size_t) ;
 size_t FUNC_2 (int ) ;
 size_t FUNC_3 (int ,int ) ;
 size_t FUNC_4 (int ,int ) ;
 int FUNC_5 (size_t,int *) ;

__attribute__((used)) static void FUNC_6(struct isci_host *VAR_6)
{
 u32 VAR_7;
 u32 VAR_8;
 u32 VAR_9;
 u32 VAR_10;

 VAR_6->completion_queue_get = 0;

 VAR_8 =
  (FUNC_1(VAR_4 - 1) |
   FUNC_0(VAR_5 - 1));

 FUNC_5(VAR_8,
        &VAR_6->smu_registers->completion_queue_control);



 VAR_9 = (
  (FUNC_3(VAR_3, 0))
  | (FUNC_3(VAR_2, 0))
  | (FUNC_2(VAR_0))
  | (FUNC_2(VAR_1))
  );

 FUNC_5(VAR_9,
        &VAR_6->smu_registers->completion_queue_get);


 VAR_10 = (
  (FUNC_4(VAR_3, 0))
  | (FUNC_4(VAR_2, 0))
  );

 FUNC_5(VAR_10,
        &VAR_6->smu_registers->completion_queue_put);


 for (VAR_7 = 0; VAR_7 < VAR_4; VAR_7++) {




  VAR_6->completion_queue[VAR_7] = 0x80000000;
 }
}
