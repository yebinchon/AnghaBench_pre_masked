
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct saa7134_dev {int name; } ;


 int FUNC_0 (char*,int ,int ,int ) ;

__attribute__((used)) static void FUNC_1(struct saa7134_dev *VAR_0)
{
 FUNC_0("%s: there are different flyvideo cards with different tuners\n"
  "%s: out there, you might have to use the tuner=<nr> insmod\n"
  "%s: option to override the default value.\n",
  VAR_0->name, VAR_0->name, VAR_0->name);
}
