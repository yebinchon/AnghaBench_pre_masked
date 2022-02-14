
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct octeon_droq {TYPE_1__* recv_buf_list; } ;
struct TYPE_2__ {int buffer; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct sk_buff*,int ,int) ;

__attribute__((used)) static inline void FUNC_2(struct octeon_droq *VAR_0,
        struct sk_buff *VAR_1,
        int VAR_2,
        int VAR_3)
{
 FUNC_1(VAR_1, FUNC_0(VAR_0->recv_buf_list[VAR_3].buffer),
       VAR_2);
}
