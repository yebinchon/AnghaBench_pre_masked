
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct TYPE_2__ {int agg_enable_bitmap; int candidate_tid_bitmap; } ;
struct sta_info {int hwaddr; int lock; int state; TYPE_1__ htpriv; } ;
struct adapter {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct adapter*,struct sta_info*) ;
 int FUNC_1 (struct adapter*,int ,int ) ;
 int FUNC_2 (struct adapter*,int ,int ) ;
 int FUNC_3 (struct adapter*,int ,int ) ;
 int FUNC_4 (struct adapter*,struct sta_info*,int) ;
 int FUNC_5 (struct adapter*,struct sta_info*) ;
 int FUNC_6 (struct adapter*,int,int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

u8 FUNC_9(
 struct adapter *VAR_1,
 struct sta_info *VAR_2,
 bool VAR_3,
 u16 VAR_4
)
{
 u8 VAR_5 = 0;

 if (!VAR_2)
  return VAR_5;

 if (VAR_3) {

  FUNC_6(VAR_1, 0, VAR_2->hwaddr);


  FUNC_6(VAR_1, 1, VAR_2->hwaddr);

  FUNC_1(VAR_1, VAR_2->hwaddr, VAR_4);
 }

 VAR_2->htpriv.agg_enable_bitmap = 0x0;
 VAR_2->htpriv.candidate_tid_bitmap = 0x0;




 FUNC_4(VAR_1, VAR_2, 1);

 FUNC_7(&VAR_2->lock);
 VAR_2->state &= ~VAR_0;
 FUNC_8(&VAR_2->lock);

 FUNC_3(VAR_1, VAR_2->hwaddr, VAR_4);

 FUNC_2(VAR_1, VAR_2->hwaddr, VAR_4);

 VAR_5 = FUNC_0(VAR_1, VAR_2);

 FUNC_5(VAR_1, VAR_2);

 return VAR_5;
}
