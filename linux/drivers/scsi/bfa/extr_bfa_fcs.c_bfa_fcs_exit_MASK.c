
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int lps; } ;
struct bfa_fcs_s {int wc; TYPE_1__ fabric; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*,int ) ;
 int FUNC_2 (struct bfa_fcs_s*,int ) ;
 int FUNC_3 (int *,int ,struct bfa_fcs_s*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

void
FUNC_6(struct bfa_fcs_s *VAR_2)
{
 FUNC_3(&VAR_2->wc, VAR_1, VAR_2);
 FUNC_4(&VAR_2->wc);
 FUNC_2(VAR_2, 0);
 FUNC_0(VAR_2->fabric.lps);
 FUNC_1(&VAR_2->fabric, VAR_0);
 FUNC_5(&VAR_2->wc);
}
