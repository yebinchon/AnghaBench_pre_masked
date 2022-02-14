
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int current_mode; int high_water; scalar_t__ send_xon; int low_water; } ;
struct igc_hw {TYPE_1__ fc; } ;
typedef int s32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ) ;

__attribute__((used)) static s32 FUNC_1(struct igc_hw *VAR_4)
{
 u32 VAR_5 = 0, VAR_6 = 0;







 if (VAR_4->fc.current_mode & VAR_3) {




  VAR_5 = VAR_4->fc.low_water;
  if (VAR_4->fc.send_xon)
   VAR_5 |= VAR_2;

  VAR_6 = VAR_4->fc.high_water;
 }
 FUNC_0(VAR_1, VAR_5);
 FUNC_0(VAR_0, VAR_6);

 return 0;
}
