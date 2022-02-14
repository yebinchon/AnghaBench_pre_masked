
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct imx21 {struct etd_priv* etd; } ;
struct etd_priv {int alloc; } ;


 int VAR_0 ;
 int FUNC_0 (struct imx21*) ;
 int FUNC_1 (struct etd_priv*,int ,int) ;

__attribute__((used)) static int FUNC_2(struct imx21 *VAR_1)
{
 int VAR_2;
 struct etd_priv *VAR_3 = VAR_1->etd;

 for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++, VAR_3++) {
  if (VAR_3->alloc == 0) {
   FUNC_1(VAR_3, 0, sizeof(VAR_1->etd[0]));
   VAR_3->alloc = 1;
   FUNC_0(VAR_1);
   return VAR_2;
  }
 }
 return -1;
}
