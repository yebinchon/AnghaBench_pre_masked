
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pkt_attrib {int qsel; } ;
struct xmit_frame {struct pkt_attrib attrib; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

u32 FUNC_0(struct xmit_frame *VAR_7)
{
 u32 VAR_8;
 struct pkt_attrib *VAR_9 = &VAR_7->attrib;

 switch (VAR_9->qsel) {
 case 0:
 case 3:
  VAR_8 = VAR_1;
  break;
 case 1:
 case 2:
  VAR_8 = VAR_2;
  break;
 case 4:
 case 5:
  VAR_8 = VAR_5;
  break;
 case 6:
 case 7:
  VAR_8 = VAR_6;
  break;
 case 0x10:
  VAR_8 = VAR_0;
  break;
 case 0x11:
  VAR_8 = VAR_3;
  break;
 case 0x12:
 default:
  VAR_8 = VAR_4;
  break;
 }

 return VAR_8;
}
