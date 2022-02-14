
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
typedef scalar_t__ u16 ;
struct TYPE_4__ {int speed; } ;
struct TYPE_3__ {scalar_t__ num_vfs; } ;
struct fm10k_hw {TYPE_2__ bus; TYPE_1__ iov; } ;
typedef int s32 ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int VAR_1 ;
 int FUNC_2 (scalar_t__) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;


 int FUNC_3 (struct fm10k_hw*,int ,int) ;

__attribute__((used)) static s32 FUNC_4(struct fm10k_hw *VAR_8, u16 VAR_9, int VAR_10)
{

 u32 VAR_11 = VAR_4;
 u32 VAR_12 = VAR_5;


 if (VAR_9 >= VAR_8->iov.num_vfs)
  return VAR_0;


 switch (VAR_8->bus.speed) {
 case 129:
  VAR_11 = VAR_2;
  break;
 case 128:
  VAR_11 = VAR_3;
  break;
 default:
  break;
 }

 if (VAR_10) {
  if (VAR_10 > VAR_6 || VAR_10 < VAR_7)
   return VAR_0;
  VAR_12 = (VAR_10 * 128) / 125;




  if (VAR_10 < 4000)
   VAR_11 <<= 1;
  else
   VAR_12 >>= 1;
 }


 FUNC_3(VAR_8, FUNC_2(VAR_9), VAR_12 | VAR_11);
 FUNC_3(VAR_8, FUNC_1(VAR_9), VAR_1);
 FUNC_3(VAR_8, FUNC_0(VAR_9), VAR_1);

 return 0;
}
