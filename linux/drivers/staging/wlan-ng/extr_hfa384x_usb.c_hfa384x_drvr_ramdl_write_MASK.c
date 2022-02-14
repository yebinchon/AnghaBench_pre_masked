
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct hfa384x {scalar_t__ dlstate; TYPE_1__* wlandev; } ;
struct TYPE_2__ {int netdev; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (struct hfa384x*,int,int,int *,int) ;
 int FUNC_3 (int ,char*,int,int) ;

int FUNC_4(struct hfa384x *VAR_3, u32 VAR_4, void *VAR_5, u32 VAR_6)
{
 int VAR_7 = 0;
 int VAR_8;
 u8 *VAR_9 = VAR_5;
 int VAR_10;
 u32 VAR_11;
 u16 VAR_12;
 u16 VAR_13;
 u16 VAR_14;


 if (VAR_3->dlstate != VAR_1)
  return -VAR_0;

 FUNC_3(VAR_3->wlandev->netdev, "Writing %d bytes to ram @0x%06x\n",
      VAR_6, VAR_4);


 VAR_8 = VAR_6 / VAR_2;
 VAR_8 += VAR_6 % VAR_2 ? 1 : 0;


 for (VAR_10 = 0; VAR_10 < VAR_8; VAR_10++) {

  VAR_11 = VAR_4 + (VAR_10 * VAR_2);
  VAR_12 = FUNC_1(VAR_11);
  VAR_13 = FUNC_0(VAR_11);
  VAR_14 = VAR_6 - (VAR_10 * VAR_2);
  if (VAR_14 > VAR_2)
   VAR_14 = VAR_2;


  VAR_7 = FUNC_2(VAR_3,
     VAR_12,
     VAR_13,
     VAR_9 + (VAR_10 * VAR_2),
     VAR_14);

  if (VAR_7)
   break;


 }

 return VAR_7;
}
