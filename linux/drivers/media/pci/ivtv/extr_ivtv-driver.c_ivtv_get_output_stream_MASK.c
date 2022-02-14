
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ivtv_stream {int dummy; } ;
struct ivtv {int output_mode; struct ivtv_stream* streams; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;



struct ivtv_stream *FUNC_0(struct ivtv *VAR_2)
{
 switch (VAR_2->output_mode) {
 case 129:
  return &VAR_2->streams[VAR_0];
 case 128:
  return &VAR_2->streams[VAR_1];
 default:
  return ((void*)0);
 }
}
