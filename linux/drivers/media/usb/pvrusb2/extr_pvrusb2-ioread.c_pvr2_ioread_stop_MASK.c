
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pvr2_ioread {scalar_t__ sync_state; scalar_t__ spigot_open; scalar_t__ stream_running; scalar_t__ enabled; scalar_t__ c_data_offs; scalar_t__ c_data_len; int * c_data_ptr; int * c_buf; int stream; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,...) ;

__attribute__((used)) static void FUNC_2(struct pvr2_ioread *VAR_2)
{
 if (!(VAR_2->enabled)) return;
 FUNC_1(VAR_1,
     "/*---TRACE_READ---*/ pvr2_ioread_stop id=%p",VAR_2);
 FUNC_0(VAR_2->stream);
 VAR_2->c_buf = ((void*)0);
 VAR_2->c_data_ptr = ((void*)0);
 VAR_2->c_data_len = 0;
 VAR_2->c_data_offs = 0;
 VAR_2->enabled = 0;
 VAR_2->stream_running = 0;
 VAR_2->spigot_open = 0;
 if (VAR_2->sync_state) {
  FUNC_1(VAR_0,
      "/*---TRACE_READ---*/ sync_state <== 0");
  VAR_2->sync_state = 0;
 }
}
