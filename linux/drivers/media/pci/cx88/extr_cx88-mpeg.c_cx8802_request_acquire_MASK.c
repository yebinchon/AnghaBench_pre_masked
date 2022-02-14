
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct cx88_input {int dummy; } ;
struct TYPE_4__ {TYPE_1__* input; } ;
struct cx88_core {scalar_t__ active_type_id; unsigned int last_analog_input; unsigned int input; int active_ref; TYPE_2__ board; } ;
struct cx8802_driver {scalar_t__ type_id; int (* advise_acquire ) (struct cx8802_driver*) ;struct cx88_core* core; } ;
struct TYPE_3__ {scalar_t__ type; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int,char*,int ) ;
 int FUNC_2 (struct cx8802_driver*) ;

__attribute__((used)) static int FUNC_3(struct cx8802_driver *VAR_5)
{
 struct cx88_core *VAR_6 = VAR_5->core;
 unsigned int VAR_7;


 if (VAR_6->active_type_id != VAR_0 &&
     VAR_6->active_type_id != VAR_5->type_id)
  return -VAR_3;

 if (VAR_5->type_id == VAR_1) {

  VAR_6->last_analog_input = VAR_6->input;
  VAR_6->input = 0;
  for (VAR_7 = 0;
       VAR_7 < (sizeof(VAR_6->board.input) /
     sizeof(struct cx88_input));
       VAR_7++) {
   if (VAR_6->board.input[VAR_7].type == VAR_2) {
    VAR_6->input = VAR_7;
    break;
   }
  }
 }

 if (VAR_5->advise_acquire) {
  VAR_6->active_ref++;
  if (VAR_6->active_type_id == VAR_0) {
   VAR_6->active_type_id = VAR_5->type_id;
   VAR_5->advise_acquire(VAR_5);
  }

  FUNC_1(1, "Post acquire GPIO=%x\n", FUNC_0(VAR_4));
 }

 return 0;
}
