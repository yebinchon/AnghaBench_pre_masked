
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef void* u32 ;
struct hva_ctx_dbg {scalar_t__ cnt_duration; scalar_t__ total_duration; scalar_t__ cnt_period; scalar_t__ total_period; void* avg_bitrate; scalar_t__ total_stream_size; void* avg_fps; void* avg_period; void* max_fps; void* avg_duration; } ;
struct hva_ctx {struct hva_ctx_dbg dbg; } ;


 int FUNC_0 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct hva_ctx *VAR_0)
{
 u64 VAR_1;
 struct hva_ctx_dbg *VAR_2 = &VAR_0->dbg;

 if (VAR_2->cnt_duration > 0) {
  VAR_1 = (u64)VAR_2->total_duration;
  FUNC_0(VAR_1, VAR_2->cnt_duration);
  VAR_2->avg_duration = (u32)VAR_1;
 } else {
  VAR_2->avg_duration = 0;
 }

 if (VAR_2->total_duration > 0) {
  VAR_1 = (u64)VAR_2->cnt_duration * 100000;
  FUNC_0(VAR_1, VAR_2->total_duration);
  VAR_2->max_fps = (u32)VAR_1;
 } else {
  VAR_2->max_fps = 0;
 }

 if (VAR_2->cnt_period > 0) {
  VAR_1 = (u64)VAR_2->total_period;
  FUNC_0(VAR_1, VAR_2->cnt_period);
  VAR_2->avg_period = (u32)VAR_1;
 } else {
  VAR_2->avg_period = 0;
 }

 if (VAR_2->total_period > 0) {
  VAR_1 = (u64)VAR_2->cnt_period * 100000;
  FUNC_0(VAR_1, VAR_2->total_period);
  VAR_2->avg_fps = (u32)VAR_1;
 } else {
  VAR_2->avg_fps = 0;
 }

 if (VAR_2->total_period > 0) {





  VAR_1 = (u64)VAR_2->total_stream_size * 80;
  FUNC_0(VAR_1, VAR_2->total_period);
  VAR_2->avg_bitrate = (u32)VAR_1;
 } else {
  VAR_2->avg_bitrate = 0;
 }
}
