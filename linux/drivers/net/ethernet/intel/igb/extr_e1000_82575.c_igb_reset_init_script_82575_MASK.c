
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ type; } ;
struct e1000_hw {TYPE_1__ mac; } ;
typedef int s32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (struct e1000_hw*,int ,int,int) ;

__attribute__((used)) static s32 FUNC_2(struct e1000_hw *VAR_5)
{
 if (VAR_5->mac.type == VAR_4) {
  FUNC_0("Running reset init script for 82575\n");

  FUNC_1(VAR_5, VAR_3, 0x00, 0x0C);
  FUNC_1(VAR_5, VAR_3, 0x01, 0x78);
  FUNC_1(VAR_5, VAR_3, 0x1B, 0x23);
  FUNC_1(VAR_5, VAR_3, 0x23, 0x15);


  FUNC_1(VAR_5, VAR_0, 0x14, 0x00);
  FUNC_1(VAR_5, VAR_0, 0x10, 0x00);


  FUNC_1(VAR_5, VAR_1, 0x00, 0xEC);
  FUNC_1(VAR_5, VAR_1, 0x61, 0xDF);
  FUNC_1(VAR_5, VAR_1, 0x34, 0x05);
  FUNC_1(VAR_5, VAR_1, 0x2F, 0x81);


  FUNC_1(VAR_5, VAR_2, 0x02, 0x47);
  FUNC_1(VAR_5, VAR_2, 0x14, 0x00);
  FUNC_1(VAR_5, VAR_2, 0x10, 0x00);
 }

 return 0;
}
