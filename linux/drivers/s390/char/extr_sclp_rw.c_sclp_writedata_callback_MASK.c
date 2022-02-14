
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sclp_req {scalar_t__ status; } ;
struct TYPE_2__ {void* status; } ;
struct sclp_buffer {int (* callback ) (struct sclp_buffer*,int) ;TYPE_1__ request; int retry_count; struct sccb_header* sccb; } ;
struct sccb_header {int response_code; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 void* VAR_5 ;
 int FUNC_0 (struct sclp_req*) ;
 int FUNC_1 (struct sccb_header*) ;
 int FUNC_2 (struct sclp_buffer*,int) ;
 int FUNC_3 (struct sclp_buffer*,int) ;

__attribute__((used)) static void
FUNC_4(struct sclp_req *VAR_6, void *VAR_7)
{
 int VAR_8;
 struct sclp_buffer *VAR_9;
 struct sccb_header *VAR_10;

 VAR_9 = (struct sclp_buffer *) VAR_7;
 VAR_10 = VAR_9->sccb;

 if (VAR_6->status == VAR_4) {
  if (VAR_9->callback != ((void*)0))
   VAR_9->callback(VAR_9, -VAR_1);
  return;
 }

 switch (VAR_10->response_code) {
 case 0x0020 :

  VAR_8 = 0;
  break;

 case 0x0340:
  if (++VAR_9->retry_count > VAR_3) {
   VAR_8 = -VAR_1;
   break;
  }

  if (FUNC_1((struct sccb_header *) VAR_10) > 0) {

   VAR_10->response_code = 0x0000;
   VAR_9->request.status = VAR_5;
   VAR_8 = FUNC_0(VAR_6);
   if (VAR_8 == 0)
    return;
  } else
   VAR_8 = 0;
  break;

 case 0x0040:
 case 0x05f0:
  if (++VAR_9->retry_count > VAR_3) {
   VAR_8 = -VAR_1;
   break;
  }

  VAR_10->response_code = 0x0000;
  VAR_9->request.status = VAR_5;
  VAR_8 = FUNC_0(VAR_6);
  if (VAR_8 == 0)
   return;
  break;
 default:
  if (VAR_10->response_code == 0x71f0)
   VAR_8 = -VAR_2;
  else
   VAR_8 = -VAR_0;
  break;
 }
 if (VAR_9->callback != ((void*)0))
  VAR_9->callback(VAR_9, VAR_8);
}
