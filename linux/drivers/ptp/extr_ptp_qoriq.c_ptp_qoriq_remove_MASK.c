
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ptp_qoriq {int rsrc; } ;
struct platform_device {int dummy; } ;


 int FUNC_0 (struct ptp_qoriq*) ;
 struct ptp_qoriq* FUNC_1 (struct platform_device*) ;
 int FUNC_2 (struct ptp_qoriq*) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct platform_device *VAR_0)
{
 struct ptp_qoriq *VAR_1 = FUNC_1(VAR_0);

 FUNC_2(VAR_1);
 FUNC_3(VAR_1->rsrc);
 FUNC_0(VAR_1);
 return 0;
}
