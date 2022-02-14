
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcmcia_device {struct ipw_dev* priv; } ;
struct ipw_dev {int hardware; struct pcmcia_device* link; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ipw_dev*) ;
 int FUNC_1 (struct pcmcia_device*) ;
 int FUNC_2 () ;
 int FUNC_3 (struct ipw_dev*) ;
 struct ipw_dev* FUNC_4 (int,int ) ;

__attribute__((used)) static int FUNC_5(struct pcmcia_device *VAR_2)
{
 struct ipw_dev *VAR_3;
 int VAR_4;

 VAR_3 = FUNC_4(sizeof(struct ipw_dev), VAR_1);
 if (!VAR_3)
  return -VAR_0;

 VAR_3->link = VAR_2;
 VAR_2->priv = VAR_3;

 VAR_3->hardware = FUNC_2();
 if (!VAR_3->hardware) {
  FUNC_3(VAR_3);
  return -VAR_0;
 }


 VAR_4 = FUNC_0(VAR_3);

 if (VAR_4 != 0) {
  FUNC_1(VAR_2);
  return VAR_4;
 }

 return 0;
}
