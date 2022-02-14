
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct r852_device {scalar_t__ card_detected; scalar_t__ card_unstable; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct r852_device*,int ) ;
 int FUNC_1 (struct r852_device*,int ,int) ;

__attribute__((used)) static void FUNC_2(struct r852_device *VAR_4)
{
 int VAR_5 = FUNC_0(VAR_4, VAR_0);
 VAR_4->card_unstable = 0;

 VAR_5 &= ~(VAR_3 | VAR_2);
 VAR_5 |= VAR_1;

 VAR_5 |= VAR_4->card_detected ?
  VAR_3 : VAR_2;

 FUNC_1(VAR_4, VAR_0, VAR_5);
}
