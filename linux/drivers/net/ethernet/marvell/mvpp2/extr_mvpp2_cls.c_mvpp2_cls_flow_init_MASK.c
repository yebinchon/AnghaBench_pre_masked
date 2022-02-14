
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mvpp2_cls_flow_entry {int index; } ;
struct mvpp2_cls_flow {int flow_id; } ;
struct mvpp2 {int dummy; } ;
typedef int fe ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int,int ) ;
 int FUNC_4 (int ) ;
 int VAR_3 ;
 int FUNC_5 (struct mvpp2_cls_flow_entry*,int ,int) ;
 int FUNC_6 (struct mvpp2_cls_flow_entry*,int ) ;
 int FUNC_7 (struct mvpp2_cls_flow_entry*,int) ;
 int FUNC_8 (struct mvpp2_cls_flow_entry*,int ) ;
 int FUNC_9 (struct mvpp2_cls_flow_entry*,int ) ;
 int FUNC_10 (struct mvpp2_cls_flow_entry*,int) ;
 int FUNC_11 (struct mvpp2_cls_flow_entry*,int ) ;
 int FUNC_12 (struct mvpp2*,int ,struct mvpp2_cls_flow_entry*) ;
 int FUNC_13 (struct mvpp2*,struct mvpp2_cls_flow_entry*) ;

__attribute__((used)) static void FUNC_14(struct mvpp2 *VAR_4,
    const struct mvpp2_cls_flow *VAR_5)
{
 struct mvpp2_cls_flow_entry VAR_6;
 int VAR_7, VAR_8 = 0;


 for (VAR_7 = FUNC_2(VAR_5->flow_id);
      VAR_7 <= FUNC_4(VAR_5->flow_id); VAR_7++) {
  FUNC_5(&VAR_6, 0, sizeof(VAR_6));
  VAR_6.index = VAR_7;
  FUNC_11(&VAR_6, VAR_8++);

  if (VAR_7 == FUNC_4(VAR_5->flow_id))
   FUNC_7(&VAR_6, 1);

  FUNC_13(VAR_4, &VAR_6);
 }


 FUNC_12(VAR_4, FUNC_1(VAR_5->flow_id),
       &VAR_6);

 FUNC_6(&VAR_6, VAR_0);
 FUNC_10(&VAR_6, 1);
 FUNC_8(&VAR_6, VAR_2);


 for (VAR_7 = 0; VAR_7 < VAR_3; VAR_7++)
  FUNC_9(&VAR_6, FUNC_0(VAR_7));

 FUNC_13(VAR_4, &VAR_6);


 for (VAR_7 = 0; VAR_7 < VAR_3; VAR_7++) {
  FUNC_12(VAR_4,
        FUNC_3(VAR_7, VAR_5->flow_id),
        &VAR_6);




  FUNC_6(&VAR_6, VAR_1);
  FUNC_10(&VAR_6, 1);
  FUNC_9(&VAR_6, FUNC_0(VAR_7));

  FUNC_13(VAR_4, &VAR_6);
 }
}
