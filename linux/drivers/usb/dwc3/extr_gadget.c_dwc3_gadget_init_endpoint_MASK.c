
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_3__ {int dir_in; int dir_out; } ;
struct TYPE_4__ {TYPE_1__ caps; int * comp_desc; int * desc; int name; } ;
struct dwc3_ep {int number; int direction; int cancelled_list; int started_list; int pending_list; TYPE_2__ endpoint; int name; scalar_t__ start_cmd_status; scalar_t__ combo_num; scalar_t__ regs; struct dwc3* dwc; } ;
struct dwc3 {struct dwc3_ep** eps; scalar_t__ regs; } ;


 scalar_t__ FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int VAR_2 ;
 int FUNC_2 (struct dwc3_ep*) ;
 int FUNC_3 (struct dwc3_ep*) ;
 int FUNC_4 (struct dwc3_ep*) ;
 struct dwc3_ep* FUNC_5 (int,int ) ;
 int FUNC_6 (int ,int,char*,int,char*) ;

__attribute__((used)) static int FUNC_7(struct dwc3 *VAR_3, u8 VAR_4)
{
 struct dwc3_ep *VAR_5;
 bool VAR_6 = VAR_4 & 1;
 int VAR_7;
 u8 VAR_8 = VAR_4 >> 1;

 VAR_5 = FUNC_5(sizeof(*VAR_5), VAR_1);
 if (!VAR_5)
  return -VAR_0;

 VAR_5->dwc = VAR_3;
 VAR_5->number = VAR_4;
 VAR_5->direction = VAR_6;
 VAR_5->regs = VAR_3->regs + FUNC_0(VAR_4);
 VAR_3->eps[VAR_4] = VAR_5;
 VAR_5->combo_num = 0;
 VAR_5->start_cmd_status = 0;

 FUNC_6(VAR_5->name, sizeof(VAR_5->name), "ep%u%s", VAR_8,
   VAR_6 ? "in" : "out");

 VAR_5->endpoint.name = VAR_5->name;

 if (!(VAR_5->number > 1)) {
  VAR_5->endpoint.desc = &VAR_2;
  VAR_5->endpoint.comp_desc = ((void*)0);
 }

 if (VAR_8 == 0)
  VAR_7 = FUNC_2(VAR_5);
 else if (VAR_6)
  VAR_7 = FUNC_3(VAR_5);
 else
  VAR_7 = FUNC_4(VAR_5);

 if (VAR_7)
  return VAR_7;

 VAR_5->endpoint.caps.dir_in = VAR_6;
 VAR_5->endpoint.caps.dir_out = !VAR_6;

 FUNC_1(&VAR_5->pending_list);
 FUNC_1(&VAR_5->started_list);
 FUNC_1(&VAR_5->cancelled_list);

 return 0;
}
