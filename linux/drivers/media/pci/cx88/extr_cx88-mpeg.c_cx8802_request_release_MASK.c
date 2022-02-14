
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cx88_core {scalar_t__ active_ref; int active_type_id; int last_analog_input; int input; } ;
struct cx8802_driver {scalar_t__ type_id; int (* advise_release ) (struct cx8802_driver*) ;struct cx88_core* core; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int,char*,int ) ;
 int FUNC_2 (struct cx8802_driver*) ;

__attribute__((used)) static int FUNC_3(struct cx8802_driver *VAR_3)
{
 struct cx88_core *VAR_4 = VAR_3->core;

 if (VAR_3->advise_release && --VAR_4->active_ref == 0) {
  if (VAR_3->type_id == VAR_1) {




   VAR_4->input = VAR_4->last_analog_input;
  }

  VAR_3->advise_release(VAR_3);
  VAR_4->active_type_id = VAR_0;
  FUNC_1(1, "Post release GPIO=%x\n", FUNC_0(VAR_2));
 }

 return 0;
}
