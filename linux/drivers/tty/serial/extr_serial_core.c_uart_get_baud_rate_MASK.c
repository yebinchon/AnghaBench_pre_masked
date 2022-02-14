
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int upf_t ;
struct uart_port {int flags; } ;
struct ktermios {int c_cflag; } ;


 int VAR_0 ;

 int VAR_1 ;



 int FUNC_0 (int) ;
 unsigned int FUNC_1 (struct ktermios*) ;
 int FUNC_2 (struct ktermios*,unsigned int,unsigned int) ;

unsigned int
FUNC_3(struct uart_port *VAR_2, struct ktermios *VAR_3,
     struct ktermios *VAR_4, unsigned int VAR_5, unsigned int VAR_6)
{
 unsigned int VAR_7;
 unsigned int VAR_8;
 unsigned int VAR_9;
 int VAR_10 = 0;
 upf_t VAR_11 = VAR_2->flags & VAR_1;

 switch (VAR_11) {
 case 131:
  VAR_9 = 57600;
  break;
 case 129:
  VAR_9 = 115200;
  break;
 case 130:
  VAR_9 = 230400;
  break;
 case 128:
  VAR_9 = 460800;
  break;
 default:
  VAR_9 = 38400;
  break;
 }

 for (VAR_7 = 0; VAR_7 < 2; VAR_7++) {
  VAR_8 = FUNC_1(VAR_3);





  if (VAR_7 == 0 && VAR_8 == 38400)
   VAR_8 = VAR_9;




  if (VAR_8 == 0) {
   VAR_10 = 1;
   VAR_8 = 9600;
  }

  if (VAR_8 >= VAR_5 && VAR_8 <= VAR_6)
   return VAR_8;





  VAR_3->c_cflag &= ~VAR_0;
  if (VAR_4) {
   VAR_8 = FUNC_1(VAR_4);
   if (!VAR_10)
    FUNC_2(VAR_3,
        VAR_8, VAR_8);
   VAR_4 = ((void*)0);
   continue;
  }





  if (!VAR_10) {
   if (VAR_8 <= VAR_5)
    FUNC_2(VAR_3,
       VAR_5 + 1, VAR_5 + 1);
   else
    FUNC_2(VAR_3,
       VAR_6 - 1, VAR_6 - 1);
  }
 }

 FUNC_0(1);
 return 0;
}
