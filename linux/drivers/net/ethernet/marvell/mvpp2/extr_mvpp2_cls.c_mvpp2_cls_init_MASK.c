
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mvpp2_cls_lookup_entry {int lkpid; int way; scalar_t__ data; } ;
struct mvpp2_cls_c2_entry {int valid; int index; } ;
struct mvpp2_cls_flow_entry {int index; struct mvpp2_cls_c2_entry data; } ;
struct mvpp2 {int dummy; } ;
typedef int c2 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct mvpp2_cls_c2_entry*,int ,int) ;
 int FUNC_1 (struct mvpp2*,struct mvpp2_cls_c2_entry*) ;
 int FUNC_2 (struct mvpp2*,struct mvpp2_cls_flow_entry*) ;
 int FUNC_3 (struct mvpp2*,struct mvpp2_cls_lookup_entry*) ;
 int FUNC_4 (struct mvpp2*) ;
 int FUNC_5 (struct mvpp2*,int ,int ) ;

void FUNC_6(struct mvpp2 *VAR_7)
{
 struct mvpp2_cls_lookup_entry VAR_8;
 struct mvpp2_cls_flow_entry VAR_9;
 struct mvpp2_cls_c2_entry VAR_10;
 int VAR_11;


 FUNC_5(VAR_7, VAR_6, VAR_5);


 FUNC_0(&VAR_9.data, 0, sizeof(VAR_9.data));
 for (VAR_11 = 0; VAR_11 < VAR_3; VAR_11++) {
  VAR_9.index = VAR_11;
  FUNC_2(VAR_7, &VAR_9);
 }


 VAR_8.data = 0;
 for (VAR_11 = 0; VAR_11 < VAR_4; VAR_11++) {
  VAR_8.lkpid = VAR_11;
  VAR_8.way = 0;
  FUNC_3(VAR_7, &VAR_8);

  VAR_8.way = 1;
  FUNC_3(VAR_7, &VAR_8);
 }


 FUNC_0(&VAR_10, 0, sizeof(VAR_10));
 VAR_10 = 0;
 for (VAR_11 = 0; VAR_11 < VAR_0; VAR_11++) {
  VAR_10 = VAR_11;
  FUNC_1(VAR_7, &VAR_10);
 }




 FUNC_5(VAR_7, VAR_2,
      VAR_1);

 FUNC_4(VAR_7);
}
