
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mt7603_dev {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct mt7603_dev*,int) ;
 int FUNC_2 (struct mt7603_dev*,int ) ;

__attribute__((used)) static bool FUNC_3(struct mt7603_dev *VAR_2)
{
 u32 VAR_3;

 if (!(FUNC_2(VAR_2, VAR_0) & VAR_1))
  return 0;

 VAR_3 = FUNC_1(VAR_2, 9);
 return (VAR_3 & FUNC_0(8)) && (VAR_3 & 0xf) != 0xf;
}
