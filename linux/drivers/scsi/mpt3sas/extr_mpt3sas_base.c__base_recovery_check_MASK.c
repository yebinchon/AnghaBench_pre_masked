
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct MPT3SAS_ADAPTER {scalar_t__ pending_io_count; int reset_wq; int shost; scalar_t__ shost_recovery; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void
FUNC_2(struct MPT3SAS_ADAPTER *VAR_0)
{



 if (VAR_0->shost_recovery && VAR_0->pending_io_count) {
  VAR_0->pending_io_count = FUNC_0(VAR_0->shost);
  if (VAR_0->pending_io_count == 0)
   FUNC_1(&VAR_0->reset_wq);
 }
}
