
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ufs_hba {int outstanding_reqs; TYPE_1__* lrb; } ;
struct TYPE_2__ {int compl_time_stamp; int issue_time_stamp; } ;


 int VAR_0 ;
 int FUNC_0 (unsigned int,int *) ;
 int FUNC_1 () ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (struct ufs_hba*,unsigned int,char*) ;
 int FUNC_4 (struct ufs_hba*) ;
 int FUNC_5 (struct ufs_hba*,int,int ) ;
 int FUNC_6 () ;

__attribute__((used)) static inline
void FUNC_7(struct ufs_hba *VAR_1, unsigned int VAR_2)
{
 VAR_1->lrb[VAR_2].issue_time_stamp = FUNC_1();
 VAR_1->lrb[VAR_2].compl_time_stamp = FUNC_2(0, 0);
 FUNC_4(VAR_1);
 FUNC_0(VAR_2, &VAR_1->outstanding_reqs);
 FUNC_5(VAR_1, 1 << VAR_2, VAR_0);

 FUNC_6();
 FUNC_3(VAR_1, VAR_2, "send");
}
