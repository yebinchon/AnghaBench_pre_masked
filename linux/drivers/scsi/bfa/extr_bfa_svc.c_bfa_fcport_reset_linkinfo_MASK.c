
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bfa_fcport_s {int fec_state; int topology; int speed; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void
FUNC_0(struct bfa_fcport_s *VAR_3)
{
 VAR_3->speed = VAR_1;
 VAR_3->topology = VAR_2;
 VAR_3->fec_state = VAR_0;
}
