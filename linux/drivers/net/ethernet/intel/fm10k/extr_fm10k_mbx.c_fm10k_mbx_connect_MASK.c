
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int buffer; } ;
struct fm10k_mbx_info {scalar_t__ state; int mbmem_reg; int mbmem_len; int mbx_lock; int mbx_hdr; int timeout; TYPE_1__ rx; } ;
struct fm10k_hw {int dummy; } ;
typedef int s32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (struct fm10k_mbx_info*) ;
 int FUNC_1 (struct fm10k_mbx_info*) ;
 int FUNC_2 (struct fm10k_mbx_info*) ;
 int FUNC_3 (struct fm10k_hw*,struct fm10k_mbx_info*) ;
 int FUNC_4 (struct fm10k_hw*,int,int ) ;

__attribute__((used)) static s32 FUNC_5(struct fm10k_hw *VAR_8, struct fm10k_mbx_info *VAR_9)
{

 if (!VAR_9->rx.buffer)
  return VAR_2;


 if (VAR_9->state != VAR_6)
  return VAR_1;


 VAR_9->timeout = VAR_3;


 VAR_9->state = VAR_7;

 FUNC_2(VAR_9);


 FUNC_1(VAR_9);
 FUNC_4(VAR_8, VAR_9->mbmem_reg ^ VAR_9->mbmem_len, VAR_9->mbx_hdr);


 VAR_9->mbx_lock = VAR_5 | VAR_0 |
   VAR_4;


 FUNC_0(VAR_9);
 FUNC_3(VAR_8, VAR_9);

 return 0;
}
