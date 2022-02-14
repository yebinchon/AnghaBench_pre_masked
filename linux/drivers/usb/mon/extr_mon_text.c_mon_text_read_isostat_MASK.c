
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mon_text_ptr {scalar_t__ cnt; scalar_t__ limit; scalar_t__ pbuf; } ;
struct mon_reader_text {int dummy; } ;
struct mon_event_text {char type; int status; int interval; int start_frame; int error_count; } ;


 scalar_t__ FUNC_0 (scalar_t__,scalar_t__,char*,int,int,int,...) ;

__attribute__((used)) static void FUNC_1(struct mon_reader_text *VAR_0,
 struct mon_text_ptr *VAR_1, const struct mon_event_text *VAR_2)
{
 if (VAR_2->type == 'S') {
  VAR_1->cnt += FUNC_0(VAR_1->pbuf + VAR_1->cnt, VAR_1->limit - VAR_1->cnt,
      " %d:%d:%d", VAR_2->status, VAR_2->interval, VAR_2->start_frame);
 } else {
  VAR_1->cnt += FUNC_0(VAR_1->pbuf + VAR_1->cnt, VAR_1->limit - VAR_1->cnt,
      " %d:%d:%d:%d",
      VAR_2->status, VAR_2->interval, VAR_2->start_frame, VAR_2->error_count);
 }
}
