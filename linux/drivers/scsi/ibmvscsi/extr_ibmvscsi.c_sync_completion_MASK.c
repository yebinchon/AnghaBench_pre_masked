
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct srp_event_struct {int comp; int * xfer_iu; int * sync_srp; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct srp_event_struct *VAR_0)
{

 if (VAR_0->sync_srp)
  *VAR_0->sync_srp = *VAR_0->xfer_iu;

 FUNC_0(&VAR_0->comp);
}
