
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct service_processor {int dummy; } ;
struct reverse_heartbeat {scalar_t__ stopped; int wait; } ;
struct command {scalar_t__ status; int buffer; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct command*) ;
 int VAR_7 ;
 int FUNC_1 (struct service_processor*,struct command*) ;
 struct command* FUNC_2 (struct service_processor*,int) ;
 int FUNC_3 (struct command*,int ) ;
 int FUNC_4 (int ,void*,int) ;
 int VAR_8 ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (int ,scalar_t__,int) ;

int FUNC_7(struct service_processor *VAR_9, struct reverse_heartbeat *VAR_10)
{
 struct command *VAR_11;
 int VAR_12 = 0;
 int VAR_13 = 1;

 VAR_11 = FUNC_2(VAR_9, sizeof VAR_8);
 if (!VAR_11)
  return -VAR_1;

 while (VAR_12 < 3) {
  FUNC_4(VAR_11->buffer, (void *)&VAR_8, sizeof VAR_8);
  VAR_11->status = VAR_4;
  FUNC_1(VAR_9, VAR_11);
  FUNC_3(VAR_11, VAR_5);

  if (VAR_11->status != VAR_3)
   VAR_12++;

  FUNC_6(VAR_10->wait,
   VAR_10->stopped,
   VAR_6 * VAR_2);

  if (FUNC_5(VAR_7) || VAR_10->stopped) {
   VAR_13 = -VAR_0;
   break;
  }
 }
 FUNC_0(VAR_11);
 VAR_10->stopped = 0;

 return VAR_13;
}
