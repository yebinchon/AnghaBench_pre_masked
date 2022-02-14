
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct TYPE_2__ {scalar_t__ curr_rateidx; } ;
struct _adapter {TYPE_1__ mppriv; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct _adapter*,scalar_t__) ;
 int FUNC_1 (struct _adapter*,scalar_t__) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct _adapter*,int ) ;
 int FUNC_4 (struct _adapter*,int ,int) ;
 int VAR_3 ;

void FUNC_5(struct _adapter *VAR_4, u8 VAR_5)
{

 if (VAR_5) {
  FUNC_4(VAR_4, VAR_3,
       FUNC_3(VAR_4,
       VAR_3) & 0xFE1FFFFF);
  FUNC_2(100);
 }
 if (VAR_4->mppriv.curr_rateidx <= VAR_0)
  FUNC_0(VAR_4, VAR_5);
 else if ((VAR_4->mppriv.curr_rateidx >= VAR_1) &&
   (VAR_4->mppriv.curr_rateidx <= VAR_2))
  FUNC_1(VAR_4, VAR_5);

 if (!VAR_5)
  FUNC_4(VAR_4, VAR_3,
       FUNC_3(VAR_4,
       VAR_3) | 0x01E00000);
}
