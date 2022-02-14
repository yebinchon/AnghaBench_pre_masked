
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mt7603_dev {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct mt7603_dev*) ;
 int FUNC_1 (struct mt7603_dev*,scalar_t__) ;
 scalar_t__ FUNC_2 (struct mt7603_dev*) ;
 int FUNC_3 (struct mt7603_dev*,int) ;
 int FUNC_4 (struct mt7603_dev*,int,int) ;

__attribute__((used)) static bool FUNC_5(struct mt7603_dev *VAR_4)
{
 u32 VAR_5, VAR_6;

 if (FUNC_3(VAR_4, VAR_2) & VAR_3)
  return 1;

 if (FUNC_2(VAR_4))
  return 0;

 VAR_5 = FUNC_1(VAR_4, VAR_0 + VAR_1);
 FUNC_4(VAR_4, VAR_5, 3);
 VAR_6 = FUNC_3(VAR_4, VAR_5) >> 16;

 if (FUNC_0(VAR_4) && (VAR_6 & 0x4001) == 0x4001)
  return 1;

 return (VAR_6 & 0x8001) == 0x8001 || (VAR_6 & 0xe001) == 0xe001;
}
