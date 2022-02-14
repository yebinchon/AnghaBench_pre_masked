
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct switchtec_ntb {int db_shift; TYPE_1__* mmio_self_dbmsg; } ;
struct ntb_dev {int dummy; } ;
struct TYPE_2__ {int idb; } ;


 int FUNC_0 (int,int *) ;
 struct switchtec_ntb* FUNC_1 (struct ntb_dev*) ;

__attribute__((used)) static int FUNC_2(struct ntb_dev *VAR_0, u64 VAR_1)
{
 struct switchtec_ntb *VAR_2 = FUNC_1(VAR_0);

 FUNC_0(VAR_1 << VAR_2->db_shift, &VAR_2->mmio_self_dbmsg->idb);

 return 0;
}
