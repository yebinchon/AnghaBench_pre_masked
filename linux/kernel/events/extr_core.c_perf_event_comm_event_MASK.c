
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_4__ {int size; } ;
struct TYPE_5__ {TYPE_1__ header; } ;
struct perf_comm_event {char* comm; unsigned int comm_size; TYPE_2__ event_id; TYPE_3__* task; } ;
typedef int comm ;
struct TYPE_6__ {int comm; } ;


 unsigned int FUNC_0 (scalar_t__,int) ;
 int VAR_0 ;
 int FUNC_1 (char*,int ,int) ;
 int VAR_1 ;
 int FUNC_2 (int ,struct perf_comm_event*,int *) ;
 int FUNC_3 (char*,int ,int) ;
 scalar_t__ FUNC_4 (char*) ;

__attribute__((used)) static void FUNC_5(struct perf_comm_event *VAR_2)
{
 char VAR_3[VAR_0];
 unsigned int VAR_4;

 FUNC_1(VAR_3, 0, sizeof(VAR_3));
 FUNC_3(VAR_3, VAR_2->task->comm, sizeof(VAR_3));
 VAR_4 = FUNC_0(FUNC_4(VAR_3)+1, sizeof(u64));

 VAR_2->comm = VAR_3;
 VAR_2->comm_size = VAR_4;

 VAR_2->event_id.header.size = sizeof(VAR_2->event_id) + VAR_4;

 FUNC_2(VAR_1,
         VAR_2,
         ((void*)0));
}
