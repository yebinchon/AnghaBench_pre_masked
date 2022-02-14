
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pvr2_ioread {int sync_state; int spigot_open; int stream; scalar_t__ stream_running; int enabled; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct pvr2_ioread*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,char*) ;

int FUNC_3(struct pvr2_ioread *VAR_4)
{
 int VAR_5;
 if (!(VAR_4->enabled)) {

  return -VAR_2;
 }

 if (VAR_4->sync_state == 1) {
  FUNC_0(VAR_4);
  if (VAR_4->sync_state == 1) return -VAR_1;
 }

 VAR_5 = 0;
 if (VAR_4->stream_running) {
  if (!FUNC_1(VAR_4->stream)) {

   VAR_5 = -VAR_1;
  }
 } else {
  if (FUNC_1(VAR_4->stream) < VAR_0/2) {

   VAR_5 = -VAR_1;
  }
 }

 if ((!(VAR_4->spigot_open)) != (!(VAR_5 == 0))) {
  VAR_4->spigot_open = (VAR_5 == 0);
  FUNC_2(VAR_3,
      "/*---TRACE_READ---*/ data is %s",
      VAR_4->spigot_open ? "available" : "pending");
 }

 return VAR_5;
}
