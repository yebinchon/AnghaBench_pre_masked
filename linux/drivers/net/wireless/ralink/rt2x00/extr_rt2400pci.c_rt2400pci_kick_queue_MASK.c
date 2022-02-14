
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct rt2x00_dev {int dummy; } ;
struct data_queue {int qid; struct rt2x00_dev* rt2x00dev; } ;





 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int ,int) ;
 int FUNC_1 (struct rt2x00_dev*,int ) ;
 int FUNC_2 (struct rt2x00_dev*,int ,int ) ;

__attribute__((used)) static void FUNC_3(struct data_queue *VAR_4)
{
 struct rt2x00_dev *VAR_5 = VAR_4->rt2x00dev;
 u32 VAR_6;

 switch (VAR_4->qid) {
 case 129:
  VAR_6 = FUNC_1(VAR_5, VAR_0);
  FUNC_0(&VAR_6, VAR_2, 1);
  FUNC_2(VAR_5, VAR_0, VAR_6);
  break;
 case 130:
  VAR_6 = FUNC_1(VAR_5, VAR_0);
  FUNC_0(&VAR_6, VAR_3, 1);
  FUNC_2(VAR_5, VAR_0, VAR_6);
  break;
 case 128:
  VAR_6 = FUNC_1(VAR_5, VAR_0);
  FUNC_0(&VAR_6, VAR_1, 1);
  FUNC_2(VAR_5, VAR_0, VAR_6);
  break;
 default:
  break;
 }
}
