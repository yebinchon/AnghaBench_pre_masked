
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct hdlc_proto {int module; } ;
struct TYPE_2__ {struct hdlc_proto* proto; int * state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct net_device*) ;
 TYPE_1__* FUNC_1 (struct net_device*) ;
 int * FUNC_2 (size_t,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;

int FUNC_5(struct net_device *VAR_3, struct hdlc_proto *VAR_4,
    size_t VAR_5)
{
 int VAR_6;

 VAR_6 = FUNC_0(VAR_3);
 if (VAR_6)
  return VAR_6;

 if (!FUNC_4(VAR_4->module))
  return -VAR_1;

 if (VAR_5) {
  FUNC_1(VAR_3)->state = FUNC_2(VAR_5, VAR_2);
  if (FUNC_1(VAR_3)->state == ((void*)0)) {
   FUNC_3(VAR_4->module);
   return -VAR_0;
  }
 }
 FUNC_1(VAR_3)->proto = VAR_4;

 return 0;
}
