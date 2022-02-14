
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtw_dev {int watch_dog_cnt; } ;


 int FUNC_0 (struct rtw_dev*,int ,struct rtw_dev*) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_1(struct rtw_dev *VAR_1)
{
 if (VAR_1->watch_dog_cnt & 0x3)
  return;

 FUNC_0(VAR_1, VAR_0, VAR_1);
}
