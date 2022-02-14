
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct iscsi_transport {int dummy; } ;
struct iscsi_cls_session {int dev; int sid; struct iscsi_transport* transport; } ;
struct TYPE_4__ {int release; int * parent; } ;
struct iscsi_cls_conn {int conn_list; TYPE_1__ dev; int cid; struct iscsi_transport* transport; int ep_mutex; struct iscsi_cls_conn* dd_data; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct iscsi_cls_conn*,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (TYPE_1__*,char*,int ,int ) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,struct iscsi_cls_session*,char*) ;
 int VAR_4 ;
 int FUNC_6 (struct iscsi_cls_conn*) ;
 struct iscsi_cls_conn* FUNC_7 (int,int ) ;
 int FUNC_8 (int *,int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *,unsigned long) ;
 int FUNC_12 (int *,unsigned long) ;
 int FUNC_13 (TYPE_1__*) ;

struct iscsi_cls_conn *
FUNC_14(struct iscsi_cls_session *VAR_5, int VAR_6, uint32_t VAR_7)
{
 struct iscsi_transport *VAR_8 = VAR_5->transport;
 struct iscsi_cls_conn *VAR_9;
 unsigned long VAR_10;
 int VAR_11;

 VAR_9 = FUNC_7(sizeof(*VAR_9) + VAR_6, VAR_0);
 if (!VAR_9)
  return ((void*)0);
 if (VAR_6)
  VAR_9->dd_data = &VAR_9[1];

 FUNC_9(&VAR_9->ep_mutex);
 FUNC_0(&VAR_9->conn_list);
 VAR_9->transport = VAR_8;
 VAR_9->cid = VAR_7;


 if (!FUNC_4(&VAR_5->dev))
  goto free_conn;

 FUNC_2(&VAR_9->dev, "connection%d:%u", VAR_5->sid, VAR_7);
 VAR_9->dev.parent = &VAR_5->dev;
 VAR_9->dev.release = VAR_4;
 VAR_11 = FUNC_3(&VAR_9->dev);
 if (VAR_11) {
  FUNC_5(VAR_1, VAR_5, "could not "
      "register connection's dev\n");
  goto release_parent_ref;
 }
 FUNC_13(&VAR_9->dev);

 FUNC_11(&VAR_3, VAR_10);
 FUNC_8(&VAR_9->conn_list, &VAR_2);
 FUNC_12(&VAR_3, VAR_10);

 FUNC_1(VAR_9, "Completed conn creation\n");
 return VAR_9;

release_parent_ref:
 FUNC_10(&VAR_5->dev);
free_conn:
 FUNC_6(VAR_9);
 return ((void*)0);
}
