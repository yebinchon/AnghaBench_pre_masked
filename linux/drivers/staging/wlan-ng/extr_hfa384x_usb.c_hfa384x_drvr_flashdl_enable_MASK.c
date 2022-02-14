
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int len; int offset; int page; } ;
struct hfa384x {scalar_t__ dlstate; int dltimeout; TYPE_1__ bufinfo; scalar_t__* port_enabled; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct hfa384x*,int ,TYPE_1__*,int) ;
 int FUNC_1 (struct hfa384x*,int ,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char*) ;

int FUNC_4(struct hfa384x *VAR_6)
{
 int VAR_7 = 0;
 int VAR_8;


 for (VAR_8 = 0; VAR_8 < VAR_3; VAR_8++) {
  if (VAR_6->port_enabled[VAR_8]) {
   FUNC_3("called when port enabled.\n");
   return -VAR_0;
  }
 }


 if (VAR_6->dlstate != VAR_1)
  return -VAR_0;


 VAR_7 = FUNC_0(VAR_6, VAR_4,
     &VAR_6->bufinfo, sizeof(VAR_6->bufinfo));
 if (VAR_7)
  return VAR_7;

 FUNC_2(&VAR_6->bufinfo.page);
 FUNC_2(&VAR_6->bufinfo.offset);
 FUNC_2(&VAR_6->bufinfo.len);
 VAR_7 = FUNC_1(VAR_6, VAR_5,
       &VAR_6->dltimeout);
 if (VAR_7)
  return VAR_7;

 FUNC_2(&VAR_6->dltimeout);

 FUNC_3("flashdl_enable\n");

 VAR_6->dlstate = VAR_2;

 return VAR_7;
}
