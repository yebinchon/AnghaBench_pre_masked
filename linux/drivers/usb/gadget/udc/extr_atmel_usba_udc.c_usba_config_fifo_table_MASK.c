
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usba_udc {int * fifo_cfg; } ;


 int FUNC_0 (void*) ;
 int FUNC_1 (int ,char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;

__attribute__((used)) static int FUNC_2(struct usba_udc *VAR_6)
{
 int VAR_7;

 switch (VAR_1) {
 default:
  VAR_1 = 0;

 case 0:
  VAR_6->fifo_cfg = ((void*)0);
  VAR_7 = 0;
  break;
 case 1:
  VAR_6->fifo_cfg = VAR_2;
  VAR_7 = FUNC_0(VAR_2);
  break;
 case 2:
  VAR_6->fifo_cfg = VAR_3;
  VAR_7 = FUNC_0(VAR_3);
  break;
 case 3:
  VAR_6->fifo_cfg = VAR_4;
  VAR_7 = FUNC_0(VAR_4);
  break;
 case 4:
  VAR_6->fifo_cfg = VAR_5;
  VAR_7 = FUNC_0(VAR_5);
  break;
 }
 FUNC_1(VAR_0, "Setup fifo_mode %d\n", VAR_1);

 return VAR_7;
}
