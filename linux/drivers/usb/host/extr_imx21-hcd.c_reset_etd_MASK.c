
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct imx21 {struct etd_priv* etd; } ;
struct etd_priv {int * bounce_buffer; int * td; int * ep; int * urb; } ;


 int FUNC_0 (struct imx21*,int) ;
 int FUNC_1 (struct imx21*,int,int,int ) ;

__attribute__((used)) static void FUNC_2(struct imx21 *VAR_0, int VAR_1)
{
 struct etd_priv *VAR_2 = VAR_0->etd + VAR_1;
 int VAR_3;

 FUNC_0(VAR_0, VAR_1);

 for (VAR_3 = 0; VAR_3 < 4; VAR_3++)
  FUNC_1(VAR_0, VAR_1, VAR_3, 0);
 VAR_2->urb = ((void*)0);
 VAR_2->ep = ((void*)0);
 VAR_2->td = ((void*)0);
 VAR_2->bounce_buffer = ((void*)0);
}
