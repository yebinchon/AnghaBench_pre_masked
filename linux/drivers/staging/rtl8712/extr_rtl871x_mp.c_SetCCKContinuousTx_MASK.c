
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u32 ;
struct TYPE_2__ {int curr_rateidx; } ;
struct _adapter {TYPE_1__ mppriv; } ;


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
 int FUNC_0 (struct _adapter*,int ,int ) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_1 (struct _adapter*,int ,int ,int) ;

__attribute__((used)) static void FUNC_2(struct _adapter *VAR_14, u8 VAR_15)
{
 u32 VAR_16;

 if (VAR_15) {

  if (!FUNC_0(VAR_14, VAR_11, VAR_2)) {

   FUNC_1(VAR_14, VAR_11, VAR_2, VAR_6);
  }

  FUNC_1(VAR_14, VAR_12, VAR_7, VAR_5);
  FUNC_1(VAR_14, VAR_12, VAR_8, VAR_5);
  FUNC_1(VAR_14, VAR_12, VAR_9, VAR_5);

  VAR_16 = VAR_14->mppriv.curr_rateidx;
  FUNC_1(VAR_14, VAR_10, VAR_4, VAR_16);

  FUNC_1(VAR_14, VAR_10, VAR_1, 0x2);

  FUNC_1(VAR_14, VAR_10, VAR_3, VAR_6);
 } else {

  FUNC_1(VAR_14, VAR_10, VAR_1, 0x0);

  FUNC_1(VAR_14, VAR_10, VAR_3, VAR_6);

  FUNC_1(VAR_14, VAR_13, VAR_0, 0x0);
  FUNC_1(VAR_14, VAR_13, VAR_0, 0x1);
 }
}
