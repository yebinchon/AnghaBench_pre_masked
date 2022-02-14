
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fc_rport {scalar_t__ port_state; int flags; } ;
typedef int blk_status_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static blk_status_t FUNC_0(struct fc_rport *VAR_6)
{
 if (VAR_6->port_state == VAR_3 &&
     !(VAR_6->flags & VAR_5))
  return VAR_2;

 if (VAR_6->port_state != VAR_4)
  return VAR_0;

 return VAR_1;
}
