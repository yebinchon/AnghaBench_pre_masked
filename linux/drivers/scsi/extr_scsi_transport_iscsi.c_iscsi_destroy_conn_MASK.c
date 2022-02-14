
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iscsi_cls_conn {int dev; int conn_list; } ;


 int FUNC_0 (struct iscsi_cls_conn*,char*) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *) ;

int FUNC_6(struct iscsi_cls_conn *VAR_1)
{
 unsigned long VAR_2;

 FUNC_3(&VAR_0, VAR_2);
 FUNC_2(&VAR_1->conn_list);
 FUNC_4(&VAR_0, VAR_2);

 FUNC_5(&VAR_1->dev);
 FUNC_0(VAR_1, "Completing conn destruction\n");
 FUNC_1(&VAR_1->dev);
 return 0;
}
