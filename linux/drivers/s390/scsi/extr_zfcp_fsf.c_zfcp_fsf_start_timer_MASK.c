
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ expires; int function; } ;
struct zfcp_fsf_req {TYPE_1__ timer; } ;


 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_1(struct zfcp_fsf_req *VAR_2,
     unsigned long VAR_3)
{
 VAR_2->timer.function = VAR_1;
 VAR_2->timer.expires = VAR_0 + VAR_3;
 FUNC_0(&VAR_2->timer);
}
