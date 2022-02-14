
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct solo_p2m_dev {int error; int completion; } ;
struct solo_dev {struct solo_p2m_dev* p2m_dev; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int FUNC_1 (int *) ;
 unsigned int FUNC_2 (struct solo_dev*,int ) ;
 int FUNC_3 (struct solo_dev*,int ,int ) ;

void FUNC_4(struct solo_dev *VAR_4)
{
 unsigned int VAR_5 = FUNC_2(VAR_4, VAR_1);
 struct solo_p2m_dev *VAR_6;
 int VAR_7;

 if (!(VAR_5 & (VAR_2 | VAR_3)))
  return;

 for (VAR_7 = 0; VAR_7 < VAR_0; VAR_7++) {
  VAR_6 = &VAR_4->p2m_dev[VAR_7];
  VAR_6->error = 1;
  FUNC_3(VAR_4, FUNC_0(VAR_7), 0);
  FUNC_1(&VAR_6->completion);
 }
}
