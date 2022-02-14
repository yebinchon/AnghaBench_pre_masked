
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rc_dev {struct loopback_dev* priv; } ;
struct loopback_dev {int learning; } ;


 int FUNC_0 (char*,char*) ;

__attribute__((used)) static int FUNC_1(struct rc_dev *VAR_0, int VAR_1)
{
 struct loopback_dev *VAR_2 = VAR_0->priv;

 if (VAR_2->learning != VAR_1) {
  FUNC_0("%sing learning mode\n", VAR_1 ? "enter" : "exit");
  VAR_2->learning = !!VAR_1;
 }

 return 0;
}
