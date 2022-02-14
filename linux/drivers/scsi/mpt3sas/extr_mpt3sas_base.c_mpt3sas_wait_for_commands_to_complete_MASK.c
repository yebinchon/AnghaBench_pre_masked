
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct MPT3SAS_ADAPTER {scalar_t__ pending_io_count; int reset_wq; int shost; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct MPT3SAS_ADAPTER*,int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ,int,int) ;

void
FUNC_3(struct MPT3SAS_ADAPTER *VAR_3)
{
 u32 VAR_4;

 VAR_3->pending_io_count = 0;

 VAR_4 = FUNC_0(VAR_3, 0);
 if ((VAR_4 & VAR_1) != VAR_2)
  return;


 VAR_3->pending_io_count = FUNC_1(VAR_3->shost);

 if (!VAR_3->pending_io_count)
  return;


 FUNC_2(VAR_3->reset_wq, VAR_3->pending_io_count == 0, 10 * VAR_0);
}
