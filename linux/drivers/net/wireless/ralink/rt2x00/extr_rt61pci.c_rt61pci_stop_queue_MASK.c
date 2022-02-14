
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct rt2x00_dev {int tbtt_tasklet; } ;
struct data_queue {int qid; struct rt2x00_dev* rt2x00dev; } ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (int *,int ,int) ;
 int FUNC_1 (struct rt2x00_dev*,int ) ;
 int FUNC_2 (struct rt2x00_dev*,int ,int ) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct data_queue *VAR_11)
{
 struct rt2x00_dev *VAR_12 = VAR_11->rt2x00dev;
 u32 VAR_13;

 switch (VAR_11->qid) {
 case 130:
  VAR_13 = FUNC_1(VAR_12, VAR_6);
  FUNC_0(&VAR_13, VAR_7, 1);
  FUNC_2(VAR_12, VAR_6, VAR_13);
  break;
 case 131:
  VAR_13 = FUNC_1(VAR_12, VAR_6);
  FUNC_0(&VAR_13, VAR_8, 1);
  FUNC_2(VAR_12, VAR_6, VAR_13);
  break;
 case 133:
  VAR_13 = FUNC_1(VAR_12, VAR_6);
  FUNC_0(&VAR_13, VAR_9, 1);
  FUNC_2(VAR_12, VAR_6, VAR_13);
  break;
 case 132:
  VAR_13 = FUNC_1(VAR_12, VAR_6);
  FUNC_0(&VAR_13, VAR_10, 1);
  FUNC_2(VAR_12, VAR_6, VAR_13);
  break;
 case 128:
  VAR_13 = FUNC_1(VAR_12, VAR_0);
  FUNC_0(&VAR_13, VAR_1, 1);
  FUNC_2(VAR_12, VAR_0, VAR_13);
  break;
 case 129:
  VAR_13 = FUNC_1(VAR_12, VAR_2);
  FUNC_0(&VAR_13, VAR_5, 0);
  FUNC_0(&VAR_13, VAR_4, 0);
  FUNC_0(&VAR_13, VAR_3, 0);
  FUNC_2(VAR_12, VAR_2, VAR_13);




  FUNC_3(&VAR_12->tbtt_tasklet);
  break;
 default:
  break;
 }
}
