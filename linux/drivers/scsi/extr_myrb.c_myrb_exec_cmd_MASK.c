
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct myrb_hba {int queue_lock; int (* qcmd ) (struct myrb_hba*,struct myrb_cmdblk*) ;} ;
struct myrb_cmdblk {unsigned short status; int * completion; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 () ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (struct myrb_hba*,struct myrb_cmdblk*) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static unsigned short FUNC_7(struct myrb_hba *VAR_1,
  struct myrb_cmdblk *VAR_2)
{
 FUNC_0(VAR_0);
 unsigned long VAR_3;

 VAR_2->completion = &VAR_0;

 FUNC_3(&VAR_1->queue_lock, VAR_3);
 VAR_1->qcmd(VAR_1, VAR_2);
 FUNC_4(&VAR_1->queue_lock, VAR_3);

 FUNC_1(FUNC_2());
 FUNC_6(&VAR_0);
 return VAR_2->status;
}
