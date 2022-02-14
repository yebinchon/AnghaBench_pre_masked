
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mt76_queue {int dummy; } ;
struct mt7603_dev {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (struct mt7603_dev*,int ) ;
 int FUNC_2 (struct mt7603_dev*,struct mt76_queue*,int,int,int,int ) ;

__attribute__((used)) static int
FUNC_3(struct mt7603_dev *VAR_1, struct mt76_queue *VAR_2,
       int VAR_3, int VAR_4, int VAR_5)
{
 int VAR_6;

 VAR_6 = FUNC_2(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5,
          VAR_0);
 if (VAR_6 < 0)
  return VAR_6;

 FUNC_1(VAR_1, FUNC_0(VAR_3));

 return 0;
}
