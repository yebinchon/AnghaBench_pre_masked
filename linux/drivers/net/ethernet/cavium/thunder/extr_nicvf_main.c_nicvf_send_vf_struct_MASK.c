
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ nicvf; int sqs_mode; int msg; } ;
union nic_mbx {TYPE_1__ nicvf; } ;
typedef scalar_t__ u64 ;
struct nicvf {int sqs_mode; } ;


 int VAR_0 ;
 int FUNC_0 (struct nicvf*,union nic_mbx*) ;

__attribute__((used)) static void FUNC_1(struct nicvf *VAR_1)
{
 union nic_mbx VAR_2 = {};

 VAR_2.nicvf.msg = VAR_0;
 VAR_2.nicvf.sqs_mode = VAR_1->sqs_mode;
 VAR_2.nicvf.nicvf = (u64)VAR_1;
 FUNC_0(VAR_1, &VAR_2);
}
