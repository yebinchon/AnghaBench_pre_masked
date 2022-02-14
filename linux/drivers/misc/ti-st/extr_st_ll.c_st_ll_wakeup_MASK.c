
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct st_data_s {scalar_t__ ll_state; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (struct st_data_s*,int ) ;

void FUNC_3(struct st_data_s *VAR_3)
{
 if (FUNC_0(VAR_3->ll_state != VAR_2)) {
  FUNC_2(VAR_3, VAR_0);
  VAR_3->ll_state = VAR_1;
 } else {

  FUNC_1(" Chip already AWAKE ");
 }
}
