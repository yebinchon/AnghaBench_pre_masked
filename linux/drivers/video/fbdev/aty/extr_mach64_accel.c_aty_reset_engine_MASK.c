
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct atyfb_par {scalar_t__ fifo_space; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,struct atyfb_par*) ;
 int FUNC_1 (int ,int,struct atyfb_par*) ;

void FUNC_2(struct atyfb_par *VAR_6)
{

 FUNC_1(VAR_3,
  FUNC_0(VAR_3, VAR_6) &
  ~(VAR_4 | VAR_5), VAR_6);

 FUNC_1(VAR_3,
  FUNC_0(VAR_3, VAR_6) | VAR_4, VAR_6);


 FUNC_1(VAR_0,
  FUNC_0(VAR_0, VAR_6) | VAR_2 | VAR_1, VAR_6);

 VAR_6->fifo_space = 0;
}
