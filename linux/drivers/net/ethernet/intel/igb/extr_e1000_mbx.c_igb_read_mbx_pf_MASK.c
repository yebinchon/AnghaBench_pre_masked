
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
typedef size_t u16 ;
struct TYPE_4__ {int msgs_rx; } ;
struct TYPE_3__ {TYPE_2__ stats; } ;
struct e1000_hw {TYPE_1__ mbx; } ;
typedef scalar_t__ s32 ;


 int FUNC_0 (size_t) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (size_t) ;
 int FUNC_2 (int ,size_t) ;
 scalar_t__ FUNC_3 (struct e1000_hw*,size_t) ;
 int FUNC_4 (int ,int) ;

__attribute__((used)) static s32 FUNC_5(struct e1000_hw *VAR_2, u32 *VAR_3, u16 VAR_4,
      u16 VAR_5, bool VAR_6)
{
 s32 VAR_7;
 u16 VAR_8;


 VAR_7 = FUNC_3(VAR_2, VAR_5);
 if (VAR_7)
  goto out_no_read;


 for (VAR_8 = 0; VAR_8 < VAR_4; VAR_8++)
  VAR_3[VAR_8] = FUNC_2(FUNC_1(VAR_5), VAR_8);


 if (VAR_6)
  FUNC_4(FUNC_0(VAR_5), VAR_0);
 else
  FUNC_4(FUNC_0(VAR_5),
       VAR_0 | VAR_1);


 VAR_2->mbx.stats.msgs_rx++;

out_no_read:
 return VAR_7;
}
