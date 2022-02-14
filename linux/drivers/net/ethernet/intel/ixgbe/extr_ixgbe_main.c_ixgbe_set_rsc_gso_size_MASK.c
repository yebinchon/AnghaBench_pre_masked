
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct sk_buff {scalar_t__ len; } ;
struct ixgbe_ring {int dummy; } ;
struct TYPE_4__ {int append_cnt; } ;
struct TYPE_3__ {int gso_type; int gso_size; } ;


 int FUNC_0 (scalar_t__,int ) ;
 TYPE_2__* FUNC_1 (struct sk_buff*) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (struct sk_buff*) ;
 TYPE_1__* FUNC_3 (struct sk_buff*) ;

__attribute__((used)) static void FUNC_4(struct ixgbe_ring *VAR_1,
       struct sk_buff *VAR_2)
{
 u16 VAR_3 = FUNC_2(VAR_2);


 FUNC_3(VAR_2)->gso_size = FUNC_0((VAR_2->len - VAR_3),
       FUNC_1(VAR_2)->append_cnt);
 FUNC_3(VAR_2)->gso_type = VAR_0;
}
