
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct igc_hw {int dummy; } ;
struct igc_adapter {int rss_queues; int rss_indir_tbl_init; int* rss_indir_tbl; int flags; struct igc_hw hw; } ;
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
 int VAR_11 ;
 int FUNC_0 (int) ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_1 (struct igc_adapter*) ;
 int FUNC_2 (int*,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int) ;

__attribute__((used)) static void FUNC_5(struct igc_adapter *VAR_15)
{
 struct igc_hw *VAR_16 = &VAR_15->hw;
 u32 VAR_17, VAR_18;
 u32 VAR_19, VAR_20;
 u32 VAR_21[10];

 FUNC_2(VAR_21, sizeof(VAR_21));
 for (VAR_17 = 0; VAR_17 < 10; VAR_17++)
  FUNC_4(FUNC_0(VAR_17), VAR_21[VAR_17]);

 VAR_18 = VAR_15->rss_queues;

 if (VAR_15->rss_indir_tbl_init != VAR_18) {
  for (VAR_17 = 0; VAR_17 < VAR_11; VAR_17++)
   VAR_15->rss_indir_tbl[VAR_17] =
   (VAR_17 * VAR_18) / VAR_11;
  VAR_15->rss_indir_tbl_init = VAR_18;
 }
 FUNC_1(VAR_15);





 VAR_20 = FUNC_3(VAR_12);
 VAR_20 |= VAR_14;


 VAR_20 |= VAR_13;


 FUNC_4(VAR_12, VAR_20);




 VAR_19 = VAR_4 |
        VAR_5 |
        VAR_7 |
        VAR_8 |
        VAR_9;

 if (VAR_15->flags & VAR_0)
  VAR_19 |= VAR_6;
 if (VAR_15->flags & VAR_1)
  VAR_19 |= VAR_10;

 VAR_19 |= VAR_3;

 FUNC_4(VAR_2, VAR_19);
}
