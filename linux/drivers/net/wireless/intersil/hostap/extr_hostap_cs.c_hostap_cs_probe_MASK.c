
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcmcia_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,...) ;
 int VAR_2 ;
 int FUNC_1 (struct pcmcia_device*) ;

__attribute__((used)) static int FUNC_2(struct pcmcia_device *VAR_3)
{
 int VAR_4;

 FUNC_0(VAR_1, "%s: setting Vcc=33 (constant)\n", VAR_2);

 VAR_4 = FUNC_1(VAR_3);
 if (VAR_4) {
  FUNC_0(VAR_0, "prism2_config() failed\n");
 }

 return VAR_4;
}
