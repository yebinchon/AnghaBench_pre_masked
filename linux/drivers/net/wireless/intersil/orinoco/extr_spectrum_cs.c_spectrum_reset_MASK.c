
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct pcmcia_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct pcmcia_device*) ;
 int FUNC_1 (struct pcmcia_device*,int ,int*) ;
 int FUNC_2 (struct pcmcia_device*,int ,int) ;
 int FUNC_3 (int) ;

__attribute__((used)) static int
FUNC_4(struct pcmcia_device *VAR_7, int VAR_8)
{
 int VAR_9;
 u8 VAR_10;
 u8 VAR_11;


 if (!FUNC_0(VAR_7))
  return -VAR_3;


 VAR_9 = FUNC_1(VAR_7, VAR_1, &VAR_10);
 if (VAR_9)
  goto failed;


 VAR_9 = FUNC_2(VAR_7, VAR_1,
    (VAR_10 | VAR_2));
 if (VAR_9)
  goto failed;
 FUNC_3(1000);


 VAR_9 = FUNC_1(VAR_7, VAR_0, &VAR_11);
 if (VAR_9)
  goto failed;





 VAR_11 = (VAR_8 ? VAR_4 : VAR_6) | (VAR_11 & VAR_5);
 VAR_9 = FUNC_2(VAR_7, VAR_0, VAR_11);
 if (VAR_9)
  goto failed;
 FUNC_3(1000);


 VAR_9 = FUNC_2(VAR_7, VAR_1,
    (VAR_10 & ~VAR_2));
 if (VAR_9)
  goto failed;
 FUNC_3(1000);
 return 0;

failed:
 return -VAR_3;
}
