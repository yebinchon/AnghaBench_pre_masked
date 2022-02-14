
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
typedef size_t u16 ;
struct TYPE_3__ {int msgs_tx; } ;
struct TYPE_4__ {TYPE_1__ stats; } ;
struct e1000_hw {TYPE_2__ mbx; int mbx_lock; } ;
typedef scalar_t__ s32 ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,size_t,int ) ;
 int FUNC_3 (struct e1000_hw*) ;
 int FUNC_4 (struct e1000_hw*) ;
 scalar_t__ FUNC_5 (struct e1000_hw*) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static s32 FUNC_8(struct e1000_hw *VAR_1, u32 *VAR_2, u16 VAR_3)
{
 s32 VAR_4;
 u16 VAR_5;

 FUNC_7(&VAR_1->mbx_lock);


 VAR_4 = FUNC_5(VAR_1);
 if (VAR_4)
  goto out_no_write;


 FUNC_3(VAR_1);
 FUNC_4(VAR_1);


 for (VAR_5 = 0; VAR_5 < VAR_3; VAR_5++)
  FUNC_2(FUNC_1(0), VAR_5, VAR_2[VAR_5]);


 VAR_1->mbx.stats.msgs_tx++;


 FUNC_6(FUNC_0(0), VAR_0);

out_no_write:
 return VAR_4;
}
