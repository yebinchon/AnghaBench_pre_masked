
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int lan_id; } ;
struct ixgbe_hw {TYPE_1__ bus; } ;
typedef scalar_t__ s32 ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int ) ;
 int VAR_3 ;
 int FUNC_3 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_4 (struct ixgbe_hw*,int ,int ,int *) ;
 scalar_t__ FUNC_5 (struct ixgbe_hw*,int ,int ,int ) ;

__attribute__((used)) static s32 FUNC_6(struct ixgbe_hw *VAR_9)
{
 s32 VAR_10;
 u32 VAR_11;


 VAR_10 = FUNC_4(VAR_9,
    FUNC_2(VAR_9->bus.lan_id),
    VAR_8, &VAR_11);
 if (VAR_10)
  return VAR_10;

 VAR_11 |= VAR_3;
 VAR_10 = FUNC_5(VAR_9,
    FUNC_2(VAR_9->bus.lan_id),
    VAR_8, VAR_11);
 if (VAR_10)
  return VAR_10;


 VAR_10 = FUNC_4(VAR_9,
    FUNC_0(VAR_9->bus.lan_id),
    VAR_8, &VAR_11);
 if (VAR_10)
  return VAR_10;

 VAR_11 &= ~VAR_0;
 VAR_11 &= ~VAR_2;
 VAR_11 &= ~VAR_1;
 VAR_10 = FUNC_5(VAR_9,
    FUNC_0(VAR_9->bus.lan_id),
    VAR_8, VAR_11);
 if (VAR_10)
  return VAR_10;

 VAR_10 = FUNC_4(VAR_9,
    FUNC_1(VAR_9->bus.lan_id),
    VAR_8, &VAR_11);
 if (VAR_10)
  return VAR_10;

 VAR_11 &= ~VAR_0;
 VAR_11 &= ~VAR_2;
 VAR_11 &= ~VAR_1;
 VAR_10 = FUNC_5(VAR_9,
    FUNC_1(VAR_9->bus.lan_id),
    VAR_8, VAR_11);
 if (VAR_10)
  return VAR_10;


 VAR_10 = FUNC_4(VAR_9,
    FUNC_3(VAR_9->bus.lan_id),
    VAR_8, &VAR_11);
 if (VAR_10)
  return VAR_10;

 VAR_11 |= VAR_7;
 VAR_11 |= VAR_6;
 VAR_11 |= VAR_5;
 VAR_11 |= VAR_4;
 VAR_10 = FUNC_5(VAR_9,
    FUNC_3(VAR_9->bus.lan_id),
    VAR_8, VAR_11);
 return VAR_10;
}
