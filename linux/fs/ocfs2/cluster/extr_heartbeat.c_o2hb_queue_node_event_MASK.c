
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct o2nm_node {int dummy; } ;
struct o2hb_node_event {int hn_event_type; int hn_node_num; int hn_item; struct o2nm_node* hn_node; } ;
typedef enum o2hb_callback_type { ____Placeholder_o2hb_callback_type } o2hb_callback_type ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int ,char*,char*,int) ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static void FUNC_4(struct o2hb_node_event *VAR_5,
      enum o2hb_callback_type VAR_6,
      struct o2nm_node *VAR_7,
      int VAR_8)
{
 FUNC_1(&VAR_3);

 FUNC_0((!VAR_7) && (VAR_6 != VAR_1));

 VAR_5->hn_event_type = VAR_6;
 VAR_5->hn_node = VAR_7;
 VAR_5->hn_node_num = VAR_8;

 FUNC_3(VAR_0, "Queue node %s event for node %d\n",
      VAR_6 == VAR_2 ? "UP" : "DOWN", VAR_8);

 FUNC_2(&VAR_5->hn_item, &VAR_4);
}
