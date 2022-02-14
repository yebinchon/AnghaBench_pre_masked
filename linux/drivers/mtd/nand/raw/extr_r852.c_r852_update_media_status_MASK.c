
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct r852_device {int sm; int readonly; int irqlock; int card_detected; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (struct r852_device*,int ) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_4(struct r852_device *VAR_6)
{
 uint8_t VAR_7;
 unsigned long VAR_8;
 int VAR_9;

 FUNC_2(&VAR_6->irqlock, VAR_8);
 if (!VAR_6->card_detected) {
  FUNC_0("card removed");
  FUNC_3(&VAR_6->irqlock, VAR_8);
  return ;
 }

 VAR_9 = FUNC_1(VAR_6, VAR_0) & VAR_1;
 VAR_7 = FUNC_1(VAR_6, VAR_4);
 VAR_6->sm = (VAR_7 & (VAR_2 | VAR_3)) && (VAR_7 & VAR_5);

 FUNC_0("detected %s %s card in slot",
  VAR_6->sm ? "SmartMedia" : "xD",
  VAR_9 ? "readonly" : "writeable");

 VAR_6->readonly = VAR_9;
 FUNC_3(&VAR_6->irqlock, VAR_8);
}
