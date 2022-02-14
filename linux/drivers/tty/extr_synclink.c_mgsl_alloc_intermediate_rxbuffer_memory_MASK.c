
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mgsl_struct {int * intermediate_rxbuffer; int flag_buf; int max_frame_size; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (int ,int) ;
 int FUNC_2 (int ,int) ;

__attribute__((used)) static int FUNC_3(struct mgsl_struct *VAR_3)
{
 VAR_3->intermediate_rxbuffer = FUNC_1(VAR_3->max_frame_size, VAR_2 | VAR_1);
 if ( VAR_3->intermediate_rxbuffer == ((void*)0) )
  return -VAR_0;

 VAR_3->flag_buf = FUNC_2(VAR_3->max_frame_size, VAR_2);
 if (!VAR_3->flag_buf) {
  FUNC_0(VAR_3->intermediate_rxbuffer);
  VAR_3->intermediate_rxbuffer = ((void*)0);
  return -VAR_0;
 }
 return 0;

}
