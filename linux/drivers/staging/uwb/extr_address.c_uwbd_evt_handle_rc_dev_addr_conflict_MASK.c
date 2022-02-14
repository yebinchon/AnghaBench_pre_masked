
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uwb_rc {int dummy; } ;
struct uwb_event {struct uwb_rc* rc; } ;


 int FUNC_0 (struct uwb_rc*) ;

int FUNC_1(struct uwb_event *VAR_0)
{
 struct uwb_rc *VAR_1 = VAR_0->rc;

 return FUNC_0(VAR_1);
}
