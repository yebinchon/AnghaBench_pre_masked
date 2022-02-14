
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mt7603_dev {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct mt7603_dev*,int) ;
 int FUNC_2 (struct mt7603_dev*,int,int) ;

__attribute__((used)) static void
FUNC_3(struct mt7603_dev *VAR_1, int VAR_2, bool VAR_3)
{
 u32 VAR_4 = FUNC_0(VAR_2);
 u32 VAR_5 = FUNC_1(VAR_1, VAR_4 + 3 * 4);

 VAR_5 &= ~VAR_0;
 VAR_5 |= VAR_3 * VAR_0;

 FUNC_2(VAR_1, VAR_4 + 3 * 4, VAR_5);
}
