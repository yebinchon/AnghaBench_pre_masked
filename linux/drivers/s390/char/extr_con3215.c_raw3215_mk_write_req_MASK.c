
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct raw3215_req {int len; int start; int delayable; struct ccw1* ccws; struct raw3215_info* info; int type; } ;
struct raw3215_info {int count; int written; int head; int* buffer; struct raw3215_req* queued_write; } ;
struct ccw1 {int flags; int cmd_code; int count; scalar_t__ cda; } ;
typedef scalar_t__ __u32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int*) ;
 struct raw3215_req* FUNC_1 () ;

__attribute__((used)) static void FUNC_2(struct raw3215_info *VAR_5)
{
 struct raw3215_req *VAR_6;
 struct ccw1 *VAR_7;
 int VAR_8, VAR_9, VAR_10, VAR_11;

 if (VAR_5->count <= VAR_5->written)
  return;

 VAR_6 = VAR_5->queued_write;
 if (VAR_6 == ((void*)0)) {

  VAR_6 = FUNC_1();
  VAR_6->type = VAR_4;
  VAR_6->info = VAR_5;
  VAR_5->queued_write = VAR_6;
 } else {
  VAR_5->written -= VAR_6->len;
 }

 VAR_7 = VAR_6->ccws;
 VAR_6->start = (VAR_5->head - VAR_5->count + VAR_5->written) &
       (VAR_0 - 1);





 VAR_11 = 0;
 VAR_10 = VAR_6->start;
 while (VAR_11 < VAR_2 && VAR_10 != VAR_5->head) {
  if (VAR_5->buffer[VAR_10] == 0x15)
   VAR_11++;
  VAR_10 = (VAR_10 + 1) & (VAR_0 - 1);
 }
 VAR_8 = ((VAR_10 - 1 - VAR_6->start) & (VAR_0 - 1)) + 1;
 if (VAR_8 > VAR_1)
  VAR_8 = VAR_1;
 VAR_6->len = VAR_8;
 VAR_5->written += VAR_8;


 VAR_6->delayable = (VAR_10 == VAR_5->head) && (VAR_8 < VAR_3);

 VAR_10 = VAR_6->start;
 while (VAR_8 > 0) {
  if (VAR_7 > VAR_6->ccws)
   VAR_7[-1].flags |= 0x40;
  VAR_7->cmd_code = 0x01;
  VAR_7->flags = 0x20;
  VAR_7->cda =
   (__u32) FUNC_0(VAR_5->buffer + VAR_10);
  VAR_9 = VAR_8;
  if (VAR_10 + VAR_9 > VAR_0)
   VAR_9 = VAR_0 - VAR_10;
  VAR_7->count = VAR_9;
  VAR_8 -= VAR_9;
  VAR_10 = (VAR_10 + VAR_9) & (VAR_0 - 1);
  VAR_7++;
 }





 if (VAR_7 > VAR_6->ccws)
  VAR_7[-1].flags |= 0x40;
 VAR_7->cmd_code = 0x03;
 VAR_7->flags = 0;
 VAR_7->cda = 0;
 VAR_7->count = 1;
}
