
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fc_rport {scalar_t__ dd_data; } ;
struct csio_rnode {int nport_id; } ;
struct csio_lnode {int flags; int lock; int evtq_work; } ;
struct csio_hw {int flags; int lock; int evtq_work; } ;
typedef int rn ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct csio_lnode*,int ) ;
 scalar_t__ FUNC_1 (struct csio_lnode*,int ,struct csio_rnode**,int) ;
 scalar_t__ FUNC_2 (struct csio_lnode*) ;
 scalar_t__ FUNC_3 (struct csio_rnode*) ;
 int FUNC_4 (struct csio_lnode*,char*,struct csio_rnode*,int ,int ) ;
 struct csio_lnode* FUNC_5 (struct csio_lnode*) ;
 int FUNC_6 (struct csio_rnode*) ;
 struct csio_lnode* FUNC_7 (struct csio_rnode*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;

__attribute__((used)) static void
FUNC_11(struct fc_rport *VAR_4)
{
 struct csio_rnode *VAR_5;
 struct csio_hw *VAR_6;
 struct csio_lnode *VAR_7;

 VAR_5 = *((struct csio_rnode **)VAR_4->dd_data);
 VAR_7 = FUNC_7(VAR_5);
 VAR_6 = FUNC_5(VAR_7);

 FUNC_9(&VAR_6->lock);


 if (FUNC_2(VAR_6) || FUNC_3(VAR_5))
  goto out;

 FUNC_4(VAR_7, "devloss timeout on rnode:%p portid:x%x flowid:x%x\n",
      VAR_5, VAR_5->nport_id, FUNC_6(VAR_5));

 FUNC_0(VAR_7, VAR_2);





 if (FUNC_1(VAR_6, VAR_0, &VAR_5, sizeof(VAR_5))) {
  FUNC_0(VAR_6, VAR_3);
  goto out;
 }

 if (!(VAR_6->flags & VAR_1)) {
  VAR_6->flags |= VAR_1;
  FUNC_10(&VAR_6->lock);
  FUNC_8(&VAR_6->evtq_work);
  return;
 }

out:
 FUNC_10(&VAR_6->lock);
}
