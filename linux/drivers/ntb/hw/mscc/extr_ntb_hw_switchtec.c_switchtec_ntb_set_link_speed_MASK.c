
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct switchtec_ntb {void* link_width; void* link_speed; int peer_partition; int self_partition; int link_is_up; } ;
typedef enum ntb_width { ____Placeholder_ntb_width } ntb_width ;
typedef enum ntb_speed { ____Placeholder_ntb_speed } ntb_speed ;


 void* VAR_0 ;
 void* VAR_1 ;
 void* FUNC_0 (int,int) ;
 int FUNC_1 (struct switchtec_ntb*,int ,int*,int*) ;

__attribute__((used)) static void FUNC_2(struct switchtec_ntb *VAR_2)
{
 enum ntb_speed VAR_3, VAR_4;
 enum ntb_width VAR_5, VAR_6;

 if (!VAR_2->link_is_up) {
  VAR_2->link_speed = VAR_0;
  VAR_2->link_width = VAR_1;
  return;
 }

 FUNC_1(VAR_2, VAR_2->self_partition,
          &VAR_3, &VAR_5);
 FUNC_1(VAR_2, VAR_2->peer_partition,
          &VAR_4, &VAR_6);

 VAR_2->link_speed = FUNC_0(VAR_3, VAR_4);
 VAR_2->link_width = FUNC_0(VAR_5, VAR_6);
}
