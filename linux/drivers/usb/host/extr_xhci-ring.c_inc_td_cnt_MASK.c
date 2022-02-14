
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct urb_priv {int num_tds_done; } ;
struct urb {struct urb_priv* hcpriv; } ;



__attribute__((used)) static void FUNC_0(struct urb *VAR_0)
{
 struct urb_priv *VAR_1 = VAR_0->hcpriv;

 VAR_1->num_tds_done++;
}
