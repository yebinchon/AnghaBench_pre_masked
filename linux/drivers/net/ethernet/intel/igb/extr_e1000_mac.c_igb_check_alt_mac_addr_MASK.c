
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u32 ;
typedef int u16 ;
struct TYPE_9__ {int (* rar_set ) (struct e1000_hw*,scalar_t__*,int ) ;} ;
struct TYPE_10__ {scalar_t__ type; TYPE_4__ ops; } ;
struct TYPE_7__ {scalar_t__ (* read ) (struct e1000_hw*,int,int,int*) ;} ;
struct TYPE_8__ {TYPE_2__ ops; } ;
struct TYPE_6__ {scalar_t__ func; } ;
struct e1000_hw {TYPE_5__ mac; TYPE_3__ nvm; TYPE_1__ bus; } ;
typedef scalar_t__ s32 ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (scalar_t__*) ;
 scalar_t__ FUNC_2 (struct e1000_hw*,int,int,int*) ;
 scalar_t__ FUNC_3 (struct e1000_hw*,int,int,int*) ;
 int FUNC_4 (struct e1000_hw*,scalar_t__*,int ) ;

s32 FUNC_5(struct e1000_hw *VAR_9)
{
 u32 VAR_10;
 s32 VAR_11 = 0;
 u16 VAR_12, VAR_13, VAR_14;
 u8 VAR_15[VAR_6];




 if (VAR_9->mac.type >= VAR_8)
  goto out;

 VAR_11 = VAR_9->nvm.ops.read(VAR_9, VAR_7, 1,
     &VAR_13);
 if (VAR_11) {
  FUNC_0("NVM Read Error\n");
  goto out;
 }

 if ((VAR_13 == 0xFFFF) ||
     (VAR_13 == 0x0000))

  goto out;

 if (VAR_9->bus.func == VAR_3)
  VAR_13 += VAR_0;
 if (VAR_9->bus.func == VAR_4)
  VAR_13 += VAR_1;

 if (VAR_9->bus.func == VAR_5)
  VAR_13 += VAR_2;
 for (VAR_10 = 0; VAR_10 < VAR_6; VAR_10 += 2) {
  VAR_12 = VAR_13 + (VAR_10 >> 1);
  VAR_11 = VAR_9->nvm.ops.read(VAR_9, VAR_12, 1, &VAR_14);
  if (VAR_11) {
   FUNC_0("NVM Read Error\n");
   goto out;
  }

  VAR_15[VAR_10] = (u8)(VAR_14 & 0xFF);
  VAR_15[VAR_10 + 1] = (u8)(VAR_14 >> 8);
 }


 if (FUNC_1(VAR_15)) {
  FUNC_0("Ignoring Alternate Mac Address with MC bit set\n");
  goto out;
 }





 VAR_9->mac.ops.rar_set(VAR_9, VAR_15, 0);

out:
 return VAR_11;
}
