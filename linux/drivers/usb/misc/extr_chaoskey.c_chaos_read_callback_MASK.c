
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct urb {int status; scalar_t__ actual_length; struct chaoskey* context; } ;
struct chaoskey {int reading; int wait_q; scalar_t__ used; scalar_t__ valid; int interface; } ;


 int FUNC_0 () ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct urb *VAR_0)
{
 struct chaoskey *VAR_1 = VAR_0->context;
 int VAR_2 = VAR_0->status;

 FUNC_1(VAR_1->interface, "callback status (%d)", VAR_2);

 if (VAR_2 == 0)
  VAR_1->valid = VAR_0->actual_length;
 else
  VAR_1->valid = 0;

 VAR_1->used = 0;


 FUNC_0();

 VAR_1->reading = 0;
 FUNC_2(&VAR_1->wait_q);
}
