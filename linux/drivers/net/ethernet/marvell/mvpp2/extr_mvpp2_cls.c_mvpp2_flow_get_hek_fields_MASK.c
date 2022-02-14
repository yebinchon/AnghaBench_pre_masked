
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct mvpp2_cls_flow_entry {int dummy; } ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (struct mvpp2_cls_flow_entry*,int) ;
 int FUNC_1 (struct mvpp2_cls_flow_entry*) ;

u16 FUNC_2(struct mvpp2_cls_flow_entry *VAR_10)
{
 u16 VAR_11 = 0;
 int VAR_12, VAR_13, VAR_14;

 VAR_12 = FUNC_1(VAR_10);

 for (VAR_13 = 0; VAR_13 < VAR_12; VAR_13++) {
  VAR_14 = FUNC_0(VAR_10, VAR_13);

  switch (VAR_14) {
  case 130:
   VAR_11 |= VAR_7;
   break;
  case 129:
   VAR_11 |= VAR_8;
   break;
  case 128:
   VAR_11 |= VAR_9;
   break;
  case 133:
   VAR_11 |= VAR_4;
   break;
  case 136:
   VAR_11 |= VAR_1;
   break;
  case 137:
   VAR_11 |= VAR_0;
   break;
  case 134:
   VAR_11 |= VAR_3;
   break;
  case 135:
   VAR_11 |= VAR_2;
   break;
  case 131:
   VAR_11 |= VAR_6;
   break;
  case 132:
   VAR_11 |= VAR_5;
   break;
  default:
   break;
  }
 }
 return VAR_11;
}
