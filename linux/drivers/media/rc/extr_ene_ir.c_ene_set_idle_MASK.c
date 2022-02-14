
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rc_dev {struct ene_device* priv; } ;
struct ene_device {int dummy; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (struct ene_device*) ;

__attribute__((used)) static void FUNC_2(struct rc_dev *VAR_0, bool VAR_1)
{
 struct ene_device *VAR_2 = VAR_0->priv;

 if (VAR_1) {
  FUNC_1(VAR_2);
  FUNC_0("RX: end of data");
 }
}
