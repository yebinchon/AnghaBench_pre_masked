
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int sccb; struct sclp_buffer* callback_data; int callback; int status; int command; } ;
struct sclp_buffer {scalar_t__ messages; void (* callback ) (struct sclp_buffer*,int) ;TYPE_1__ request; int sccb; int * current_line; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (struct sclp_buffer*) ;
 int VAR_3 ;

int
FUNC_2(struct sclp_buffer *VAR_4,
   void (*VAR_5)(struct sclp_buffer *, int))
{

 if (VAR_4->current_line != ((void*)0))
  FUNC_1(VAR_4);


 if (VAR_4->messages == 0)
  return -VAR_0;

 VAR_4->request.command = VAR_1;
 VAR_4->request.status = VAR_2;
 VAR_4->request.callback = VAR_3;
 VAR_4->request.callback_data = VAR_4;
 VAR_4->request.sccb = VAR_4->sccb;
 VAR_4->callback = VAR_5;
 return FUNC_0(&VAR_4->request);
}
