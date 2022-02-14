
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int resp; int resp_cmpl; } ;
struct mt7601u_dev {TYPE_1__ mcu; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *) ;
 int VAR_6 ;
 int FUNC_1 (struct mt7601u_dev*,int ,int) ;
 scalar_t__ FUNC_2 (struct mt7601u_dev*,int ,int *) ;
 int FUNC_3 (struct mt7601u_dev*,int *) ;
 int FUNC_4 (struct mt7601u_dev*,int ,int ,int *,int ,int ,int *) ;

int FUNC_5(struct mt7601u_dev *VAR_7)
{
 int VAR_8;

 VAR_8 = FUNC_1(VAR_7, VAR_4, 1);
 if (VAR_8)
  return VAR_8;

 FUNC_0(&VAR_7->mcu.resp_cmpl);
 if (FUNC_2(VAR_7, VAR_2, &VAR_7->mcu.resp)) {
  FUNC_3(VAR_7, &VAR_7->mcu.resp);
  return -VAR_0;
 }

 VAR_8 = FUNC_4(VAR_7, VAR_5, VAR_3,
         &VAR_7->mcu.resp, VAR_1,
         VAR_6, &VAR_7->mcu.resp_cmpl);
 if (VAR_8) {
  FUNC_3(VAR_7, &VAR_7->mcu.resp);
  return VAR_8;
 }

 return 0;
}
