
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sky2_hw {scalar_t__ chip_id; scalar_t__ chip_rev; int flags; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (unsigned int,int ) ;
 int VAR_10 ;
 int VAR_11 ;
 int * VAR_12 ;
 int FUNC_1 (struct sky2_hw*,unsigned int,int ,int ) ;
 int * VAR_13 ;
 int FUNC_2 (struct sky2_hw*,int ) ;
 int FUNC_3 (struct sky2_hw*,int ,int ) ;
 int FUNC_4 (struct sky2_hw*,int ,int ) ;

__attribute__((used)) static void FUNC_5(struct sky2_hw *VAR_14, unsigned VAR_15)
{
 u32 VAR_16;

 FUNC_4(VAR_14, VAR_0, VAR_11);
 VAR_16 = FUNC_2(VAR_14, VAR_6);
 VAR_16 &= ~VAR_13[VAR_15];

 if (VAR_14->chip_id == VAR_2 && VAR_14->chip_rev > VAR_3)
  VAR_16 |= VAR_12[VAR_15];

 FUNC_3(VAR_14, VAR_6, VAR_16);
 FUNC_4(VAR_14, VAR_0, VAR_10);
 FUNC_2(VAR_14, VAR_6);

 if (VAR_14->chip_id == VAR_1)
  FUNC_1(VAR_14, VAR_15, VAR_8, VAR_7);
 else if (VAR_14->flags & VAR_9)
  FUNC_4(VAR_14, FUNC_0(VAR_15, VAR_5), VAR_4);
}
