
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct rt2x00_dev {scalar_t__ curr_band; } ;
struct antenna_setup {scalar_t__ rx; scalar_t__ tx; } ;
struct antenna_sel {int * value; int word; } ;


 scalar_t__ VAR_0 ;
 unsigned int FUNC_0 (struct antenna_sel*) ;
 int FUNC_1 (int) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 struct antenna_sel* VAR_10 ;
 struct antenna_sel* VAR_11 ;
 unsigned int FUNC_2 (struct rt2x00_dev*) ;
 unsigned int FUNC_3 (struct rt2x00_dev*) ;
 scalar_t__ FUNC_4 (struct rt2x00_dev*,int ) ;
 int FUNC_5 (int *,int ,int) ;
 int FUNC_6 (struct rt2x00_dev*,int ) ;
 int FUNC_7 (struct rt2x00_dev*,int ,int ) ;
 int FUNC_8 (struct rt2x00_dev*,int ,int ) ;
 int FUNC_9 (struct rt2x00_dev*,struct antenna_setup*) ;
 int FUNC_10 (struct rt2x00_dev*,struct antenna_setup*) ;

__attribute__((used)) static void FUNC_11(struct rt2x00_dev *VAR_12,
          struct antenna_setup *VAR_13)
{
 const struct antenna_sel *VAR_14;
 unsigned int VAR_15;
 unsigned int VAR_16;
 u32 VAR_17;





 FUNC_1(VAR_13->rx == VAR_0 ||
        VAR_13->tx == VAR_0);

 if (VAR_12->curr_band == VAR_2) {
  VAR_14 = VAR_10;
  VAR_15 = FUNC_2(VAR_12);
 } else {
  VAR_14 = VAR_11;
  VAR_15 = FUNC_3(VAR_12);
 }

 for (VAR_16 = 0; VAR_16 < FUNC_0(VAR_10); VAR_16++)
  FUNC_8(VAR_12, VAR_14[VAR_16].word, VAR_14[VAR_16].value[VAR_15]);

 VAR_17 = FUNC_6(VAR_12, VAR_3);

 FUNC_5(&VAR_17, VAR_5,
      (VAR_12->curr_band == VAR_1));
 FUNC_5(&VAR_17, VAR_4,
      (VAR_12->curr_band == VAR_2));

 FUNC_7(VAR_12, VAR_3, VAR_17);

 if (FUNC_4(VAR_12, VAR_9) || FUNC_4(VAR_12, VAR_8))
  FUNC_10(VAR_12, VAR_13);
 else if (FUNC_4(VAR_12, VAR_7) || FUNC_4(VAR_12, VAR_6))
  FUNC_9(VAR_12, VAR_13);
}
