
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {int fck; TYPE_1__* fbdev; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,int,int,int,int) ;
 int FUNC_3 (unsigned int,int) ;
 TYPE_2__ VAR_3 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int) ;

__attribute__((used)) static int FUNC_6(unsigned VAR_4,
    unsigned VAR_5, unsigned VAR_6,
    int VAR_7, int VAR_8, int VAR_9)
{
 int VAR_10, VAR_11;
 u32 VAR_12;

 if (VAR_4 != 1 || VAR_9 < 1 || VAR_9 > 8)
  return -VAR_1;

 VAR_10 = FUNC_3(VAR_5, VAR_9);
 VAR_11 = FUNC_3(VAR_6, VAR_9);
 if (VAR_11 < 8 || VAR_11 <= VAR_10 || VAR_11 >= (1 << 12))
  return -VAR_0;
 VAR_11 /= 8;
 VAR_11--;
 if (VAR_10 > 8)
  VAR_10 = 8;
 if (VAR_10)
  VAR_10--;

 FUNC_2(VAR_3.fbdev->dev,
  "setup_tearsync: hs %d vs %d hs_inv %d vs_inv %d\n",
  VAR_10, VAR_11, VAR_7, VAR_8);

 FUNC_1(VAR_3.fck);
 VAR_12 = FUNC_4(VAR_2);
 VAR_12 &= ~((1 << 15) - 1);
 VAR_12 |= VAR_11 << 3;
 VAR_12 |= VAR_10;
 if (VAR_7)
  VAR_12 |= 1 << 29;
 else
  VAR_12 &= ~(1 << 29);
 if (VAR_8)
  VAR_12 |= 1 << 28;
 else
  VAR_12 &= ~(1 << 28);
 FUNC_5(VAR_2, VAR_12);
 FUNC_0(VAR_3.fck);

 return 0;
}
