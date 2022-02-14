
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iscsi_cls_session {int dev; } ;


 int FUNC_0 (struct iscsi_cls_session*,char*) ;
 int VAR_0 ;
 int FUNC_1 (struct iscsi_cls_session*,int ) ;
 int FUNC_2 (int *) ;

void FUNC_3(struct iscsi_cls_session *VAR_1)
{
 FUNC_0(VAR_1, "Freeing session\n");
 FUNC_1(VAR_1, VAR_0);
 FUNC_2(&VAR_1->dev);
}
