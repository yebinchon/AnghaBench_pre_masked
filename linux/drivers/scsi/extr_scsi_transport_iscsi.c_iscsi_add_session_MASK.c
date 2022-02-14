
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iscsi_cls_session {unsigned int target_id; int ida_used; int sess_list; int dev; int sid; } ;


 int VAR_0 ;
 int FUNC_0 (struct iscsi_cls_session*,char*) ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int,int *) ;
 int FUNC_2 (int *,char*,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int ,int ,int ) ;
 int FUNC_5 (int *,unsigned int) ;
 int FUNC_6 (int ,struct iscsi_cls_session*,char*) ;
 int VAR_4 ;
 int FUNC_7 (struct iscsi_cls_session*,int ) ;
 int VAR_5 ;
 int FUNC_8 (int *,int *) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_9 (int *,unsigned long) ;
 int FUNC_10 (int *,unsigned long) ;
 int FUNC_11 (int *) ;

int FUNC_12(struct iscsi_cls_session *VAR_8, unsigned int VAR_9)
{
 unsigned long VAR_10;
 int VAR_11 = 0;
 int VAR_12;

 VAR_8->sid = FUNC_1(1, &VAR_5);

 if (VAR_9 == VAR_2) {
  VAR_11 = FUNC_4(&VAR_4, 0, 0, VAR_0);

  if (VAR_11 < 0) {
   FUNC_6(VAR_3, VAR_8,
     "Failure in Target ID Allocation\n");
   return VAR_11;
  }
  VAR_8->target_id = (unsigned int)VAR_11;
  VAR_8->ida_used = 1;
 } else
  VAR_8->target_id = VAR_9;

 FUNC_2(&VAR_8->dev, "session%u", VAR_8->sid);
 VAR_12 = FUNC_3(&VAR_8->dev);
 if (VAR_12) {
  FUNC_6(VAR_3, VAR_8,
      "could not register session's dev\n");
  goto release_ida;
 }
 FUNC_11(&VAR_8->dev);

 FUNC_9(&VAR_7, VAR_10);
 FUNC_8(&VAR_8->sess_list, &VAR_6);
 FUNC_10(&VAR_7, VAR_10);

 FUNC_7(VAR_8, VAR_1);
 FUNC_0(VAR_8, "Completed session adding\n");
 return 0;

release_ida:
 if (VAR_8->ida_used)
  FUNC_5(&VAR_4, VAR_8->target_id);

 return VAR_12;
}
