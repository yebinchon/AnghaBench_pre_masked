
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mt7603_dev {int dummy; } ;


 int FUNC_0 (int*) ;
 int FUNC_1 (int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (struct mt7603_dev*,int ) ;
 int FUNC_3 (struct mt7603_dev*,int,int) ;

__attribute__((used)) static void
FUNC_4(struct mt7603_dev *VAR_4)
{
 u32 VAR_5[5] = {
  [1] = FUNC_1(VAR_2, 0xf),
  [3] = VAR_3
 };
 u32 VAR_6;
 int VAR_7;

 VAR_6 = FUNC_2(VAR_4, VAR_0);
 VAR_6 += VAR_1;
 for (VAR_7 = 0; VAR_7 < FUNC_0(VAR_5); VAR_7++)
  FUNC_3(VAR_4, VAR_6 + 4 * VAR_7, VAR_5[VAR_7]);
}
