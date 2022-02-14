
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct ivtv_stream {int s_flags; int name; } ;
struct ivtv_open_id {size_t type; scalar_t__ yuv_frames; struct ivtv* itv; } ;
struct ivtv {scalar_t__ output_mode; int i_flags; scalar_t__ speed; struct ivtv_stream* streams; } ;


 int FUNC_0 (char*,int ) ;
 int FUNC_1 (char*) ;
 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 void* VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (struct ivtv_stream*) ;
 int FUNC_4 (struct ivtv_stream*,int,int ) ;
 int FUNC_5 (struct ivtv*) ;
 scalar_t__ FUNC_6 (int ,int *) ;

__attribute__((used)) static void FUNC_7(struct ivtv_open_id *VAR_8, int VAR_9, u64 VAR_10)
{
 struct ivtv *VAR_11 = VAR_8->itv;
 struct ivtv_stream *VAR_12 = &VAR_11->streams[VAR_8->type];

 FUNC_0("close() of %s\n", VAR_12->name);

 if (VAR_8->type == VAR_0 &&
  FUNC_6(VAR_1, &VAR_11->i_flags)) {

  FUNC_5(VAR_11);
 }


 if (FUNC_6(VAR_4, &VAR_12->s_flags)) {
  FUNC_1("close stopping decode\n");

  FUNC_4(VAR_12, VAR_9, VAR_10);
  VAR_11->output_mode = VAR_6;
 }
 FUNC_2(VAR_3, &VAR_12->s_flags);
 FUNC_2(VAR_5, &VAR_12->s_flags);

 if (VAR_11->output_mode == VAR_7 && VAR_8->yuv_frames)
  VAR_11->output_mode = VAR_6;

 VAR_11->speed = 0;
 FUNC_2(VAR_2, &VAR_11->i_flags);
 FUNC_3(VAR_12);
}
