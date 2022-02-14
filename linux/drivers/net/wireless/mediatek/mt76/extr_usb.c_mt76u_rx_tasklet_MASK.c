
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct urb {int dummy; } ;
struct mt76_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct mt76_dev*,int ,int *) ;
 struct urb* FUNC_1 (struct mt76_dev*) ;
 int FUNC_2 (struct mt76_dev*,struct urb*) ;
 int FUNC_3 (struct mt76_dev*,struct urb*,int,int ) ;
 int FUNC_4 (struct mt76_dev*,struct urb*) ;
 int FUNC_5 () ;
 int FUNC_6 () ;

__attribute__((used)) static void FUNC_7(unsigned long VAR_2)
{
 struct mt76_dev *VAR_3 = (struct mt76_dev *)VAR_2;
 struct urb *VAR_4;
 int VAR_5, VAR_6;

 FUNC_5();

 while (1) {
  VAR_4 = FUNC_1(VAR_3);
  if (!VAR_4)
   break;

  VAR_6 = FUNC_2(VAR_3, VAR_4);
  if (VAR_6 > 0) {
   VAR_5 = FUNC_3(VAR_3, VAR_4, VAR_6, VAR_0);
   if (VAR_5 < 0)
    break;
  }
  FUNC_4(VAR_3, VAR_4);
 }
 FUNC_0(VAR_3, VAR_1, ((void*)0));

 FUNC_6();
}
