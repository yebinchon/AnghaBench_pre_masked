
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mt7603_dev {int mt76; } ;


 int VAR_0 ;
 int FUNC_0 (struct mt7603_dev*) ;
 int FUNC_1 (int *,int ) ;

__attribute__((used)) static int
FUNC_2(struct mt7603_dev *VAR_1)
{
 int VAR_2;

 VAR_2 = FUNC_1(&VAR_1->mt76, VAR_0);
 if (VAR_2 < 0)
  return VAR_2;

 return FUNC_0(VAR_1);
}
