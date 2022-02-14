
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct pcmcia_device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct pcmcia_device*,int,int*) ;
 int FUNC_1 (struct pcmcia_device*,int,int) ;

__attribute__((used)) static int FUNC_2(struct pcmcia_device *VAR_1)
{
 u8 VAR_2;
 int VAR_3;

 VAR_3 = FUNC_0(VAR_1, 0x800, &VAR_2);
 if (VAR_3)
  goto failed;

 VAR_3 = FUNC_1(VAR_1, 0x800, VAR_2 | 1);
 if (VAR_3)
  goto failed;
 return 0;

 failed:
 return -VAR_0;
}
