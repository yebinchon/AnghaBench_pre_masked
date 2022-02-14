
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dvb_frontend {int dummy; } ;
struct analog_parameters {int std; int frequency; } ;


 int VAR_0 ;
 int FUNC_0 (struct dvb_frontend*,int,int,int,int,int) ;

__attribute__((used)) static int FUNC_1(struct dvb_frontend *VAR_1,
         struct analog_parameters *VAR_2)
{
 int VAR_3,VAR_4,VAR_5;


 if (VAR_2->std & VAR_0) {

  VAR_4 = 40750*1000;
  VAR_5 = 46750*1000;
  VAR_3 = 45750*1000;
 } else {

  VAR_4 = 32900*1000;
  VAR_5 = 39900*1000;
  VAR_3 = 38900*1000;
 }

 FUNC_0(VAR_1, VAR_2->frequency*62500,
      1090*1000*1000, VAR_3, VAR_4, VAR_5);

 return 0;
}
