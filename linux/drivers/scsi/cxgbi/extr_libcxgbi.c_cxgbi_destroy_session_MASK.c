
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iscsi_cls_session {int dd_data; } ;


 int VAR_0 ;
 int FUNC_0 (struct iscsi_cls_session*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int,char*,struct iscsi_cls_session*) ;

void FUNC_3(struct iscsi_cls_session *VAR_1)
{
 FUNC_2(1 << VAR_0,
  "cls sess 0x%p.\n", VAR_1);

 FUNC_1(VAR_1->dd_data);
 FUNC_0(VAR_1);
}
