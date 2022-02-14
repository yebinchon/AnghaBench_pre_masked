
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct sk_buff {scalar_t__ sk; } ;
struct TYPE_2__ {int tx_flags; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int const*) ;
 TYPE_1__* FUNC_1 (struct sk_buff*) ;
 int * FUNC_2 (struct sk_buff*) ;

__attribute__((used)) static inline bool FUNC_3(struct sk_buff *VAR_1)
{
 const u8 *VAR_2 = FUNC_2(VAR_1);

 return FUNC_0(VAR_2) && VAR_1->sk &&
        (FUNC_1(VAR_1)->tx_flags & VAR_0);
}
