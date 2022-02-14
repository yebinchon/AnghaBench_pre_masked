
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ ircnt; } ;
union cvmx_mixx_ircnt {void* u64; TYPE_1__ s; } ;
struct octeon_mgmt {int netdev; scalar_t__ mix; } ;


 scalar_t__ VAR_0 ;
 void* FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct octeon_mgmt*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct octeon_mgmt *VAR_1, int VAR_2)
{
 unsigned int VAR_3 = 0;
 union cvmx_mixx_ircnt VAR_4;
 int VAR_5;

 VAR_4.u64 = FUNC_0(VAR_1->mix + VAR_0);
 while (VAR_3 < VAR_2 && VAR_4.s.ircnt) {

  VAR_5 = FUNC_1(VAR_1);
  if (!VAR_5)
   VAR_3++;


  VAR_4.u64 = FUNC_0(VAR_1->mix + VAR_0);
 }

 FUNC_2(VAR_1->netdev);

 return VAR_3;
}
