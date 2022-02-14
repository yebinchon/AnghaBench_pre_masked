
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct evtchn_fifo_control_block {int ready; } ;


 int VAR_0 ;
 int FUNC_0 (unsigned int,struct evtchn_fifo_control_block*,unsigned int,unsigned long*,int) ;
 int VAR_1 ;
 unsigned int FUNC_1 (unsigned long*,int ) ;
 struct evtchn_fifo_control_block* FUNC_2 (int ,unsigned int) ;
 unsigned long FUNC_3 (int *,int ) ;

__attribute__((used)) static void FUNC_4(unsigned VAR_2, bool VAR_3)
{
 struct evtchn_fifo_control_block *VAR_4;
 unsigned long VAR_5;
 unsigned VAR_6;

 VAR_4 = FUNC_2(VAR_1, VAR_2);

 VAR_5 = FUNC_3(&VAR_4->ready, 0);

 while (VAR_5) {
  VAR_6 = FUNC_1(&VAR_5, VAR_0);
  FUNC_0(VAR_2, VAR_4, VAR_6, &VAR_5, VAR_3);
  VAR_5 |= FUNC_3(&VAR_4->ready, 0);
 }
}
