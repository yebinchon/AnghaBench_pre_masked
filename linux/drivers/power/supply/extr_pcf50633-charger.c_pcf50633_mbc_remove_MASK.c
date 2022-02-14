
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dummy; } ;
struct pcf50633_mbc {int ac; int adapter; int usb; int pcf; } ;


 int FUNC_0 (int *) ;
 int * VAR_0 ;
 int FUNC_1 (int ,int ) ;
 struct pcf50633_mbc* FUNC_2 (struct platform_device*) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct platform_device *VAR_1)
{
 struct pcf50633_mbc *VAR_2 = FUNC_2(VAR_1);
 int VAR_3;


 for (VAR_3 = 0; VAR_3 < FUNC_0(VAR_0); VAR_3++)
  FUNC_1(VAR_2->pcf, VAR_0[VAR_3]);

 FUNC_3(VAR_2->usb);
 FUNC_3(VAR_2->adapter);
 FUNC_3(VAR_2->ac);

 return 0;
}
