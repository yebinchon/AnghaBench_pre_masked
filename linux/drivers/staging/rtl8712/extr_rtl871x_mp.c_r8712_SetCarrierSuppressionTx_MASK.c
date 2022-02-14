
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct TYPE_2__ {scalar_t__ curr_rateidx; } ;
struct _adapter {TYPE_1__ mppriv; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (struct _adapter*,int ,int ) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_1 (struct _adapter*,int ,int ,int) ;

void FUNC_2(struct _adapter *VAR_15, u8 VAR_16)
{
 if (VAR_16) {
  if (VAR_15->mppriv.curr_rateidx <= VAR_0) {

   if (!FUNC_0(VAR_15, VAR_12, VAR_3)) {

    FUNC_1(VAR_15, VAR_12, VAR_3,
        VAR_7);
   }

   FUNC_1(VAR_15, VAR_13, VAR_8,
       VAR_6);
   FUNC_1(VAR_15, VAR_13, VAR_9,
       VAR_6);
   FUNC_1(VAR_15, VAR_13, VAR_10,
       VAR_6);

   FUNC_1(VAR_15, VAR_11, VAR_2, 0x2);

   FUNC_1(VAR_15, VAR_11, VAR_4,
       VAR_6);


   FUNC_1(VAR_15, VAR_11, VAR_5, 0x0);
  }
 } else {
  if (VAR_15->mppriv.curr_rateidx <= VAR_0) {

   FUNC_1(VAR_15, VAR_11, VAR_2, 0x0);

   FUNC_1(VAR_15, VAR_11, VAR_4,
       VAR_7);

   FUNC_1(VAR_15, VAR_14, VAR_1, 0x0);
   FUNC_1(VAR_15, VAR_14, VAR_1, 0x1);
  }
 }
}
