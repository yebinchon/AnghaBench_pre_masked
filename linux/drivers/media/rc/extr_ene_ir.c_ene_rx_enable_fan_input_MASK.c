
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ene_device {int hw_fan_input; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct ene_device*,int ,int ) ;

__attribute__((used)) static void FUNC_1(struct ene_device *VAR_4, bool VAR_5)
{
 if (!VAR_4->hw_fan_input)
  return;

 if (!VAR_5)
  FUNC_0(VAR_4, VAR_0, 0);
 else {
  FUNC_0(VAR_4, VAR_0, VAR_1);
  FUNC_0(VAR_4, VAR_2, VAR_3);
 }
}
