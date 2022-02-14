
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct chaoskey {int interface; struct chaoskey* buf; struct chaoskey* name; int urb; } ;


 int FUNC_0 (struct chaoskey*) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(struct chaoskey *VAR_0)
{
 if (VAR_0) {
  FUNC_1(VAR_0->interface, "free");
  FUNC_2(VAR_0->urb);
  FUNC_0(VAR_0->name);
  FUNC_0(VAR_0->buf);
  FUNC_3(VAR_0->interface);
  FUNC_0(VAR_0);
 }
}
