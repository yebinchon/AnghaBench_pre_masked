
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mt7601u_dev {int dummy; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct mt7601u_dev*,int ,int ) ;
 int FUNC_2 (struct mt7601u_dev*,int ,int ,int ) ;
 int FUNC_3 (struct mt7601u_dev*) ;

__attribute__((used)) static int FUNC_4(struct mt7601u_dev *VAR_4)
{
 int VAR_5;

 VAR_5 = FUNC_2(VAR_4, VAR_1, VAR_3,
          FUNC_0(VAR_3));
 if (VAR_5)
  return VAR_5;
 VAR_5 = FUNC_2(VAR_4, VAR_1,
          VAR_2, FUNC_0(VAR_2));
 if (VAR_5)
  return VAR_5;

 FUNC_3(VAR_4);

 FUNC_1(VAR_4, VAR_0, 0);

 return 0;
}
