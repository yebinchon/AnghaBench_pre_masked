
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcmciamtd_dev {struct pcmcia_device* p_dev; } ;
struct pcmcia_device {struct pcmciamtd_dev* priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct pcmciamtd_dev* FUNC_0 (int,int ) ;
 int FUNC_1 (struct pcmcia_device*) ;
 int FUNC_2 (char*,struct pcmciamtd_dev*) ;

__attribute__((used)) static int FUNC_3(struct pcmcia_device *VAR_2)
{
 struct pcmciamtd_dev *VAR_3;


 VAR_3 = FUNC_0(sizeof(*VAR_3), VAR_1);
 if (!VAR_3) return -VAR_0;
 FUNC_2("dev=0x%p\n", VAR_3);

 VAR_3->p_dev = VAR_2;
 VAR_2->priv = VAR_3;

 return FUNC_1(VAR_2);
}
