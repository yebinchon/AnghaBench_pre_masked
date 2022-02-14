
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xenbus_device {int dummy; } ;
struct evtchn_close {int port; } ;


 int VAR_0 ;
 int FUNC_0 (int ,struct evtchn_close*) ;
 int FUNC_1 (struct xenbus_device*,int,char*,int) ;

int FUNC_2(struct xenbus_device *VAR_1, int VAR_2)
{
 struct evtchn_close VAR_3;
 int VAR_4;

 VAR_3.port = VAR_2;

 VAR_4 = FUNC_0(VAR_0, &VAR_3);
 if (VAR_4)
  FUNC_1(VAR_1, VAR_4, "freeing event channel %d", VAR_2);

 return VAR_4;
}
