
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mt7603_dev {int* reset_cause; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 int FUNC_0 (struct mt7603_dev*,int ,int ) ;
 int FUNC_1 (struct mt7603_dev*,int ,int ,int ,int) ;
 int FUNC_2 (struct mt7603_dev*,int ,int ) ;

__attribute__((used)) static void FUNC_3(struct mt7603_dev *VAR_5)
{

 if (!VAR_5->reset_cause[VAR_4])
  FUNC_0(VAR_5, VAR_0, VAR_2);


 FUNC_2(VAR_5, VAR_0, VAR_1);

 if (!FUNC_1(VAR_5, VAR_0,
       VAR_2,
       VAR_2, 500)) {
  VAR_5->reset_cause[VAR_4]++;
  FUNC_0(VAR_5, VAR_0, VAR_1);
 } else {
  VAR_5->reset_cause[VAR_4] = 0;
  FUNC_0(VAR_5, VAR_0, VAR_3);
 }

 if (VAR_5->reset_cause[VAR_4] >= 3)
  VAR_5->reset_cause[VAR_4] = 0;
}
