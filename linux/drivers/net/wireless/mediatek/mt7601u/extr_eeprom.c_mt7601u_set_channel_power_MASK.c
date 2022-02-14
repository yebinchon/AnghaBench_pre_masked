
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u32 ;
struct mt7601u_dev {TYPE_1__* ee; } ;
typedef scalar_t__ s8 ;
struct TYPE_2__ {scalar_t__* chan_pwr; } ;


 scalar_t__ FUNC_0 (int ,int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (struct mt7601u_dev*,scalar_t__*) ;
 int FUNC_3 (struct mt7601u_dev*,int ) ;
 int FUNC_4 (struct mt7601u_dev*,scalar_t__*,scalar_t__) ;

__attribute__((used)) static void
FUNC_5(struct mt7601u_dev *VAR_4, u8 *VAR_5)
{
 u32 VAR_6, VAR_7;
 u8 VAR_8;

 VAR_7 = FUNC_3(VAR_4, VAR_2);
 VAR_8 = FUNC_0(VAR_3, VAR_7);

 if (FUNC_2(VAR_4, VAR_5)) {
  FUNC_4(VAR_4, VAR_5, VAR_8);
  return;
 }

 for (VAR_6 = 0; VAR_6 < 14; VAR_6++) {
  s8 VAR_9 = FUNC_1(VAR_5[VAR_1 + VAR_6]);

  if (VAR_9 > VAR_8 || VAR_9 < 0)
   VAR_9 = VAR_0;

  VAR_4->ee->chan_pwr[VAR_6] = VAR_9;
 }
}
