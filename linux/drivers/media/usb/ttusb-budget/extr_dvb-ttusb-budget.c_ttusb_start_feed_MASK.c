
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ttusb {int running_feed_count; } ;
struct dvb_demux_feed {int type; int pes_type; int pid; int index; scalar_t__ demux; } ;
 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (struct ttusb*,int ,int,int ) ;
 int FUNC_2 (struct ttusb*) ;

__attribute__((used)) static int FUNC_3(struct dvb_demux_feed *VAR_1)
{
 struct ttusb *VAR_2 = (struct ttusb *) VAR_1->demux;
 int VAR_3 = 1;

 FUNC_0("ttusb_start_feed\n");

 switch (VAR_1->type) {
 case 128:
  break;
 case 129:
  break;
 default:
  return -VAR_0;
 }

 if (VAR_1->type == 128) {
  switch (VAR_1->pes_type) {
  case 130:
  case 134:
  case 131:
  case 132:
  case 133:
   break;
  default:
   return -VAR_0;
  }
 }
 FUNC_1(VAR_2, VAR_1->index, VAR_3, VAR_1->pid);

 if (0 == VAR_2->running_feed_count++)
  FUNC_2(VAR_2);

 return 0;
}
