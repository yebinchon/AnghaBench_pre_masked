
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u32 ;
struct pcb_config {scalar_t__ config_num; } ;
struct cx231xx {int current_pcb_config; } ;



 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;






 int FUNC_0 (struct cx231xx*,int) ;
 int FUNC_1 (struct cx231xx*,scalar_t__) ;
 int FUNC_2 (struct cx231xx*,scalar_t__) ;

int FUNC_3(struct cx231xx *VAR_6, int VAR_7, u8 VAR_8)
{
 int VAR_9 = -1;
 u32 VAR_10 = -1;
 struct pcb_config *VAR_11;


 VAR_11 = (struct pcb_config *)&VAR_6->current_pcb_config;

 if (VAR_11->config_num) {
  switch (VAR_8) {
  case 133:
   VAR_10 = VAR_3;
   break;
  case 134:
   VAR_10 = VAR_2;
   break;
  case 128:
   VAR_10 = VAR_4;
   break;
  case 132:
   VAR_10 = VAR_5;
   break;
  case 130:
  case 131:
   VAR_10 = VAR_0;
   break;
  case 129:
   VAR_10 = VAR_1;
   break;
  }
 }

 if (VAR_7) {
  VAR_9 = FUNC_0(VAR_6, VAR_8);

  if (VAR_9 < 0)
   return VAR_9;


  if (VAR_10 > 0)
   VAR_9 = FUNC_1(VAR_6, VAR_10);
 } else {

  if (VAR_10 > 0)
   VAR_9 = FUNC_2(VAR_6, VAR_10);
 }

 return VAR_9;
}
