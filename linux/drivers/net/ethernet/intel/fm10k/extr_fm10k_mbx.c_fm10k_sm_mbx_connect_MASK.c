
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int buffer; } ;
struct fm10k_mbx_info {scalar_t__ state; int mbx_lock; int max_size; int timeout; TYPE_1__ rx; } ;
struct fm10k_hw {int dummy; } ;
typedef int s32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_0 (struct fm10k_hw*,struct fm10k_mbx_info*) ;
 int FUNC_1 (struct fm10k_mbx_info*) ;
 int FUNC_2 (struct fm10k_mbx_info*,int ) ;

__attribute__((used)) static s32 FUNC_3(struct fm10k_hw *VAR_9, struct fm10k_mbx_info *VAR_10)
{

 if (!VAR_10->rx.buffer)
  return VAR_2;


 if (VAR_10->state != VAR_7)
  return VAR_1;


 VAR_10->timeout = VAR_3;


 VAR_10->state = VAR_8;
 VAR_10->max_size = VAR_5;


 FUNC_1(VAR_10);


 VAR_10->mbx_lock = VAR_6 | VAR_0 |
   VAR_4;


 FUNC_2(VAR_10, 0);
 FUNC_0(VAR_9, VAR_10);

 return 0;
}
