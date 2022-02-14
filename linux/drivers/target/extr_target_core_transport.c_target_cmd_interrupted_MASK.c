
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct se_cmd {int transport_state; int t_transport_stop_comp; int (* transport_complete_callback ) (struct se_cmd*,int,int*) ;int work; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (struct se_cmd*,int,int*) ;
 int FUNC_4 (struct se_cmd*,int,int*) ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static bool FUNC_5(struct se_cmd *VAR_4)
{
 int VAR_5;

 if (VAR_4->transport_state & VAR_0) {
  if (VAR_4->transport_complete_callback)
   VAR_4->transport_complete_callback(VAR_4, 0, &VAR_5);
  FUNC_0(&VAR_4->work, VAR_2);
  FUNC_2(VAR_3, &VAR_4->work);
  return 1;
 } else if (VAR_4->transport_state & VAR_1) {
  if (VAR_4->transport_complete_callback)
   VAR_4->transport_complete_callback(VAR_4, 0, &VAR_5);
  FUNC_1(&VAR_4->t_transport_stop_comp);
  return 1;
 }

 return 0;
}
