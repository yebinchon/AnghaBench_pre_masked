
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct uart_port {int fifosize; int type; } ;
struct TYPE_2__ {scalar_t__ size; } ;


 int VAR_0 ;



 int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int FUNC_0 (int,char*) ;
 TYPE_1__* FUNC_1 (struct uart_port*,int ) ;
 unsigned int FUNC_2 (struct uart_port*,int ) ;
 int FUNC_3 (struct uart_port*,int ,unsigned int) ;

__attribute__((used)) static int FUNC_4(struct uart_port *VAR_4, int VAR_5)
{
 unsigned int VAR_6;

 if (VAR_5 < 1)
  VAR_5 = 1;
 if (VAR_5 >= VAR_4->fifosize)
  VAR_5 = VAR_4->fifosize;


 if (FUNC_1(VAR_4, VAR_0)->size) {
  FUNC_3(VAR_4, VAR_0, VAR_5);
  return VAR_5;
 }

 switch (VAR_4->type) {
 case 130:
  if (VAR_5 < 4) {
   VAR_6 = 0;
   VAR_5 = 1;
  } else if (VAR_5 < 8) {
   VAR_6 = VAR_2;
   VAR_5 = 4;
  } else if (VAR_5 < 14) {
   VAR_6 = VAR_3;
   VAR_5 = 8;
  } else {
   VAR_6 = VAR_2 | VAR_3;
   VAR_5 = 14;
  }
  break;
 case 129:
 case 128:
  if (VAR_5 < 16) {
   VAR_6 = 0;
   VAR_5 = 1;
  } else if (VAR_5 < 32) {
   VAR_6 = VAR_2;
   VAR_5 = 16;
  } else if (VAR_5 < 48) {
   VAR_6 = VAR_3;
   VAR_5 = 32;
  } else {
   VAR_6 = VAR_2 | VAR_3;
   VAR_5 = 48;
  }
  break;
 default:
  FUNC_0(1, "unknown FIFO configuration");
  return 1;
 }

 FUNC_3(VAR_4, VAR_1,
  (FUNC_2(VAR_4, VAR_1) &
  ~(VAR_3 | VAR_2)) | VAR_6);

 return VAR_5;
}
