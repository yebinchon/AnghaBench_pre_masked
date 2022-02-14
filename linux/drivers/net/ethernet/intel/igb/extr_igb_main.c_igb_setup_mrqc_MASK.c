
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int type; } ;
struct e1000_hw {TYPE_1__ mac; } ;
struct igb_adapter {int rss_queues; int vfs_allocated_count; int rss_indir_tbl_init; int* rss_indir_tbl; int flags; struct e1000_hw hw; } ;
typedef int rss_key ;


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
 int VAR_10 ;
 int FUNC_0 (int) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;

 int VAR_22 ;
 int FUNC_1 (struct igb_adapter*) ;
 int FUNC_2 (struct igb_adapter*) ;
 int FUNC_3 (int*,int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int) ;

__attribute__((used)) static void FUNC_6(struct igb_adapter *VAR_23)
{
 struct e1000_hw *VAR_24 = &VAR_23->hw;
 u32 VAR_25, VAR_26;
 u32 VAR_27, VAR_28;
 u32 VAR_29[10];

 FUNC_3(VAR_29, sizeof(VAR_29));
 for (VAR_27 = 0; VAR_27 < 10; VAR_27++)
  FUNC_5(FUNC_0(VAR_27), VAR_29[VAR_27]);

 VAR_28 = VAR_23->rss_queues;

 switch (VAR_24->mac.type) {
 case 128:

  if (VAR_23->vfs_allocated_count)
   VAR_28 = 2;
  break;
 default:
  break;
 }

 if (VAR_23->rss_indir_tbl_init != VAR_28) {
  for (VAR_27 = 0; VAR_27 < VAR_20; VAR_27++)
   VAR_23->rss_indir_tbl[VAR_27] =
   (VAR_27 * VAR_28) / VAR_20;
  VAR_23->rss_indir_tbl_init = VAR_28;
 }
 FUNC_2(VAR_23);





 VAR_26 = FUNC_4(VAR_11);
 VAR_26 |= VAR_13;

 if (VAR_23->hw.mac.type >= 128)

  VAR_26 |= VAR_12;


 FUNC_5(VAR_11, VAR_26);




 VAR_25 = VAR_4 |
        VAR_5 |
        VAR_7 |
        VAR_8 |
        VAR_9;

 if (VAR_23->flags & VAR_18)
  VAR_25 |= VAR_6;
 if (VAR_23->flags & VAR_19)
  VAR_25 |= VAR_10;





 if (VAR_23->vfs_allocated_count) {
  if (VAR_24->mac.type > VAR_21) {

   u32 VAR_30 = FUNC_4(VAR_14);

   VAR_30 &= ~(VAR_15 |
       VAR_17);
   VAR_30 |= VAR_23->vfs_allocated_count <<
    VAR_16;
   FUNC_5(VAR_14, VAR_30);
  }
  if (VAR_23->rss_queues > 1)
   VAR_25 |= VAR_3;
  else
   VAR_25 |= VAR_2;
 } else {
  if (VAR_24->mac.type != VAR_22)
   VAR_25 |= VAR_1;
 }
 FUNC_1(VAR_23);

 FUNC_5(VAR_0, VAR_25);
}
