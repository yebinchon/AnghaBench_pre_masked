
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wlandevice {struct hfa384x* priv; } ;
struct hfa384x_inf_frame {int framelen; } ;
struct hfa384x {int scanflag; int cmdq; int scanresults; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct hfa384x_inf_frame*,int,int ) ;
 int FUNC_2 (char*,int) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct wlandevice *VAR_1,
       struct hfa384x_inf_frame *VAR_2)
{
 struct hfa384x *VAR_3 = VAR_1->priv;
 int VAR_4;

 VAR_4 = (VAR_2->framelen - 3) / 32;
 FUNC_2("Received %d hostscan results\n", VAR_4);

 if (VAR_4 > 32)
  VAR_4 = 32;

 FUNC_0(VAR_3->scanresults);

 VAR_3->scanresults = FUNC_1(VAR_2, sizeof(*VAR_2), VAR_0);

 if (VAR_4 == 0)
  VAR_4 = -1;


 VAR_3->scanflag = VAR_4;
 FUNC_3(&VAR_3->cmdq);
}
