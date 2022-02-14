
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scif_endpt {int state; int conwq; } ;
typedef scalar_t__ scif_epd_t ;


 int VAR_0 ;

 int FUNC_0 (int *) ;

int FUNC_1(scif_epd_t VAR_1)
{
 struct scif_endpt *VAR_2 = (struct scif_endpt *)VAR_1;

 switch (VAR_2->state) {
 case 128:
 {
  VAR_2->state = VAR_0;


  FUNC_0(&VAR_2->conwq);
  break;
 }
 default:
  break;
 }
 return 0;
}
