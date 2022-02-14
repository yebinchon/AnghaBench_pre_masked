
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_2__ {int requested_mode; } ;
struct e1000_hw {TYPE_1__ fc; } ;
typedef scalar_t__ s32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (struct e1000_hw*,int ,int,int*) ;
 int FUNC_1 (char*) ;

__attribute__((used)) static s32 FUNC_2(struct e1000_hw *VAR_6)
{
 s32 VAR_7;
 u16 VAR_8;
 VAR_7 = FUNC_0(VAR_6, VAR_0, 1, &VAR_8);

 if (VAR_7) {
  FUNC_1("NVM Read Error\n");
  return VAR_7;
 }

 if (!(VAR_8 & VAR_2))
  VAR_6->fc.requested_mode = VAR_4;
 else if ((VAR_8 & VAR_2) == VAR_1)
  VAR_6->fc.requested_mode = VAR_5;
 else
  VAR_6->fc.requested_mode = VAR_3;

 return 0;
}
