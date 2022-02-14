
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int enable; int msg; } ;
union nic_mbx {TYPE_1__ ptp; } ;
struct nicvf {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct nicvf*,union nic_mbx*) ;

__attribute__((used)) static int FUNC_1(struct nicvf *VAR_1, bool VAR_2)
{
 union nic_mbx VAR_3 = {};

 VAR_3.ptp.msg = VAR_0;
 VAR_3.ptp.enable = VAR_2;

 return FUNC_0(VAR_1, &VAR_3);
}
