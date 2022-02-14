
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dummy; } ;
struct cpcap_charger_ddata {int dummy; } ;


 int FUNC_0 (int *) ;
 int * VAR_0 ;
 int FUNC_1 (struct platform_device*,struct cpcap_charger_ddata*,int ) ;

__attribute__((used)) static int FUNC_2(struct platform_device *VAR_1,
         struct cpcap_charger_ddata *VAR_2)
{
 int VAR_3, VAR_4;

 for (VAR_3 = 0; VAR_3 < FUNC_0(VAR_0); VAR_3++) {
  VAR_4 = FUNC_1(VAR_1, VAR_2, VAR_0[VAR_3]);
  if (VAR_4)
   return VAR_4;
 }

 return 0;
}
