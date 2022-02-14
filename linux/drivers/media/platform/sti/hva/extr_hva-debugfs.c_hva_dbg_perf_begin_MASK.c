
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef scalar_t__ u32 ;
struct hva_ctx_dbg {int is_valid_period; int window_duration; int cnt_window; scalar_t__ window_stream_size; void* max_bitrate; void* min_bitrate; scalar_t__ last_bitrate; int cnt_period; int total_period; void* max_period; void* min_period; int begin; } ;
struct hva_ctx {struct hva_ctx_dbg dbg; } ;
typedef int ktime_t ;


 int FUNC_0 (int,int) ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 (int ,int ) ;
 void* FUNC_3 (scalar_t__,void*) ;
 void* FUNC_4 (scalar_t__,void*) ;

void FUNC_5(struct hva_ctx *VAR_0)
{
 u64 VAR_1;
 u32 VAR_2;
 u32 VAR_3;
 struct hva_ctx_dbg *VAR_4 = &VAR_0->dbg;
 ktime_t VAR_5 = VAR_4->begin;

 VAR_4->begin = FUNC_1();

 if (VAR_4->is_valid_period) {

  VAR_1 = (u64)FUNC_2(VAR_4->begin, VAR_5);
  FUNC_0(VAR_1, 100);
  VAR_2 = (u32)VAR_1;
  VAR_4->min_period = FUNC_4(VAR_2, VAR_4->min_period);
  VAR_4->max_period = FUNC_3(VAR_2, VAR_4->max_period);
  VAR_4->total_period += VAR_2;
  VAR_4->cnt_period++;





  VAR_4->window_duration += VAR_2;
  VAR_4->cnt_window++;
  if (VAR_4->cnt_window >= 32) {





   if (VAR_4->window_duration > 0) {
    VAR_1 = (u64)VAR_4->window_stream_size * 80;
    FUNC_0(VAR_1, VAR_4->window_duration);
    VAR_3 = (u32)VAR_1;
    VAR_4->last_bitrate = VAR_3;
    VAR_4->min_bitrate = FUNC_4(VAR_3,
             VAR_4->min_bitrate);
    VAR_4->max_bitrate = FUNC_3(VAR_3,
             VAR_4->max_bitrate);
   }
   VAR_4->window_stream_size = 0;
   VAR_4->window_duration = 0;
   VAR_4->cnt_window = 0;
  }
 }






 VAR_4->is_valid_period = 0;
}
