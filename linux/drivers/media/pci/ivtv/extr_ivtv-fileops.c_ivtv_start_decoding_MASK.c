
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ivtv_stream {scalar_t__ type; } ;
struct ivtv_open_id {size_t type; struct ivtv* itv; } ;
struct ivtv {int decoding; struct ivtv_stream* streams; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (struct ivtv_open_id*,scalar_t__) ;
 int FUNC_3 (struct ivtv*,int) ;
 int FUNC_4 (struct ivtv_stream*,int ) ;

int FUNC_5(struct ivtv_open_id *VAR_3, int VAR_4)
{
 struct ivtv *VAR_5 = VAR_3->itv;
 struct ivtv_stream *VAR_6 = &VAR_5->streams[VAR_3->type];
 int VAR_7;

 if (FUNC_1(&VAR_5->decoding) == 0) {
  if (FUNC_2(VAR_3, VAR_6->type)) {

   FUNC_0("start decode, stream already claimed\n");
   return -VAR_1;
  }
  VAR_7 = FUNC_4(VAR_6, 0);
  if (VAR_7 < 0) {
   if (VAR_7 == -VAR_0)
    VAR_7 = FUNC_4(VAR_6, 0);
   if (VAR_7 < 0)
    return VAR_7;
  }
 }
 if (VAR_6->type == VAR_2)
  return FUNC_3(VAR_5, VAR_4);
 return 0;
}
