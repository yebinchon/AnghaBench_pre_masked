
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef int u64 ;
typedef int u32 ;
struct TYPE_4__ {int addr; } ;
struct TYPE_5__ {int addr; } ;
struct TYPE_6__ {TYPE_1__ a4; TYPE_2__ a6; } ;
struct qeth_ipaddr {scalar_t__ proto; TYPE_3__ u; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int*) ;

__attribute__((used)) static inline u64 FUNC_1(struct qeth_ipaddr *VAR_2)
{
 u64 VAR_3 = 0;
 u8 *VAR_4;

 if (VAR_2->proto == VAR_1) {
  VAR_4 = (u8 *) &VAR_2->u.a6.addr;
  VAR_3 = FUNC_0((u64 *)VAR_4) ^
   FUNC_0((u64 *) (VAR_4 + 8));
 }
 if (VAR_2->proto == VAR_0) {
  VAR_4 = (u8 *) &VAR_2->u.a4.addr;
  VAR_3 = FUNC_0((u32 *) VAR_4);
 }
 return VAR_3;
}
