
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int msg; } ;
union nic_mbx {TYPE_1__ nicvf; } ;
struct nicvf {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct nicvf*,union nic_mbx*) ;

__attribute__((used)) static void FUNC_1(struct nicvf *VAR_1)
{
 union nic_mbx VAR_2 = {};

 VAR_2.nicvf.msg = VAR_0;
 FUNC_0(VAR_1, &VAR_2);
}
