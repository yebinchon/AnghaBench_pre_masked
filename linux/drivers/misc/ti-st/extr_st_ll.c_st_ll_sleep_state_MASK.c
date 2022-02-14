
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct st_data_s {int ll_state; } ;


 unsigned long VAR_0 ;




 int VAR_1 ;
 int FUNC_0 (struct st_data_s*) ;
 int FUNC_1 (struct st_data_s*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*) ;

unsigned long FUNC_4(struct st_data_s *VAR_2,
 unsigned char VAR_3)
{
 switch (VAR_3) {
 case 130:
  FUNC_2("sleep indication recvd");
  FUNC_0(VAR_2);
  break;
 case 131:
  FUNC_3("sleep ack rcvd: host shouldn't");
  break;
 case 128:
  FUNC_2("wake indication recvd");
  FUNC_1(VAR_2);
  break;
 case 129:
  FUNC_2("wake ack rcvd");
  VAR_2->ll_state = VAR_1;
  break;
 default:
  FUNC_3(" unknown input/state ");
  return -VAR_0;
 }
 return 0;
}
