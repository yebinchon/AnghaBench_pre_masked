
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct serial_info {unsigned int c950ctrl; } ;
struct pcmcia_device {struct serial_info* priv; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int,unsigned int) ;

__attribute__((used)) static void FUNC_2(struct pcmcia_device *VAR_0)
{
 struct serial_info *VAR_1 = VAR_0->priv;
 unsigned int VAR_2 = VAR_1->c950ctrl;

 FUNC_1(0xA, VAR_2 + 1);
 FUNC_0(100);
 FUNC_1(0xE, VAR_2 + 1);
 FUNC_0(300);
 FUNC_1(0xC, VAR_2 + 1);
 FUNC_0(100);
 FUNC_1(0xE, VAR_2 + 1);
 FUNC_0(200);
 FUNC_1(0xF, VAR_2 + 1);
 FUNC_0(100);
 FUNC_1(0xE, VAR_2 + 1);
 FUNC_0(100);
 FUNC_1(0xC, VAR_2 + 1);
}
