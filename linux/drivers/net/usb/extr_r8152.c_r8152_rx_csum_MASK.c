
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct rx_desc {int opts3; int opts2; } ;
struct r8152 {TYPE_1__* netdev; } ;
struct TYPE_2__ {int features; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static u8 FUNC_1(struct r8152 *VAR_10, struct rx_desc *VAR_11)
{
 u8 VAR_12 = VAR_0;
 u32 VAR_13, VAR_14;

 if (!(VAR_10->netdev->features & VAR_3))
  goto return_result;

 VAR_13 = FUNC_0(VAR_11->opts2);
 VAR_14 = FUNC_0(VAR_11->opts3);

 if (VAR_13 & VAR_4) {
  if (VAR_14 & VAR_2)
   VAR_12 = VAR_0;
  else if ((VAR_13 & VAR_7) && !(VAR_14 & VAR_9))
   VAR_12 = VAR_1;
  else if ((VAR_13 & VAR_6) && !(VAR_14 & VAR_8))
   VAR_12 = VAR_1;
 } else if (VAR_13 & VAR_5) {
  if ((VAR_13 & VAR_7) && !(VAR_14 & VAR_9))
   VAR_12 = VAR_1;
  else if ((VAR_13 & VAR_6) && !(VAR_14 & VAR_8))
   VAR_12 = VAR_1;
 }

return_result:
 return VAR_12;
}
