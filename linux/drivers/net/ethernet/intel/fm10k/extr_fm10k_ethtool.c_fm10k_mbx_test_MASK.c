
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u64 ;
typedef scalar_t__ u32 ;
struct TYPE_4__ {int (* enqueue_tx ) (struct fm10k_hw*,struct fm10k_mbx_info*,scalar_t__*) ;int (* process ) (struct fm10k_hw*,struct fm10k_mbx_info*) ;} ;
struct fm10k_mbx_info {int test_result; TYPE_2__ ops; } ;
struct TYPE_3__ {scalar_t__ type; } ;
struct fm10k_hw {TYPE_1__ mac; struct fm10k_mbx_info mbx; } ;
struct fm10k_intfc {struct fm10k_hw hw; } ;


 scalar_t__ FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned long VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (struct fm10k_intfc*) ;
 int FUNC_2 (struct fm10k_intfc*) ;
 int FUNC_3 (scalar_t__*,scalar_t__) ;
 unsigned long VAR_6 ;
 int FUNC_4 (struct fm10k_hw*,struct fm10k_mbx_info*,scalar_t__*) ;
 int FUNC_5 (struct fm10k_hw*,struct fm10k_mbx_info*) ;
 scalar_t__ FUNC_6 (unsigned long) ;
 int FUNC_7 (int,int) ;

__attribute__((used)) static int FUNC_8(struct fm10k_intfc *VAR_7, u64 *VAR_8)
{
 struct fm10k_hw *VAR_9 = &VAR_7->hw;
 struct fm10k_mbx_info *VAR_10 = &VAR_9->mbx;
 u32 VAR_11, VAR_12[6];
 unsigned long VAR_13;
 int VAR_14 = -VAR_0;


 if (VAR_9->mac.type != VAR_5)
  return 0;


 for (VAR_11 = FUNC_0(VAR_3);
      VAR_11 < FUNC_0(2 * VAR_2);
      VAR_11 += VAR_11) {

  FUNC_3(VAR_12, VAR_11);

  FUNC_1(VAR_7);
  VAR_10->test_result = VAR_1;
  VAR_14 = VAR_10->ops.enqueue_tx(VAR_9, VAR_10, VAR_12);
  FUNC_2(VAR_7);


  VAR_13 = VAR_6 + VAR_4;
  do {
   if (VAR_14 < 0)
    goto err_out;

   FUNC_7(500, 1000);

   FUNC_1(VAR_7);
   VAR_10->ops.process(VAR_9, VAR_10);
   FUNC_2(VAR_7);

   VAR_14 = VAR_10->test_result;
   if (!VAR_14)
    break;
  } while (FUNC_6(VAR_13));


  if (VAR_14)
   goto err_out;
 }

err_out:
 *VAR_8 = VAR_14 < 0 ? (VAR_11) : (VAR_14 > 0);
 return VAR_14;
}
