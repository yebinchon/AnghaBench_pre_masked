
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {void* wr_hi; } ;
struct ulp_mem_io {void* len; void* cmd_lock_addr; TYPE_1__ wr; } ;
struct sk_buff {scalar_t__ head; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (unsigned int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ) ;
 void* FUNC_5 (int) ;
 int FUNC_6 (struct ulp_mem_io*,int ,int) ;

__attribute__((used)) static inline void FUNC_7(struct sk_buff *VAR_3, unsigned int VAR_4)
{
 struct ulp_mem_io *VAR_5 = (struct ulp_mem_io *)VAR_3->head;

 FUNC_6(VAR_5, 0, sizeof(*VAR_5));

 VAR_5->wr.wr_hi = FUNC_5(FUNC_4(VAR_0));
 VAR_5->cmd_lock_addr = FUNC_5(FUNC_2(VAR_4 >> 5) |
       FUNC_0(VAR_2));
 VAR_5->len = FUNC_5(FUNC_3(VAR_1 >> 5) |
    FUNC_1((VAR_1 >> 3) + 1));
}
