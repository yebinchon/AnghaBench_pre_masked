
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct urb {int dummy; } ;
struct ucan_priv {int rx_urbs; int netdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (struct ucan_priv*,struct urb**) ;
 int FUNC_2 (struct urb*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct urb*,int ) ;

__attribute__((used)) static int FUNC_5(struct ucan_priv *VAR_2, struct urb **VAR_3)
{
 int VAR_4, VAR_5;




 for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++) {
  VAR_5 = FUNC_4(VAR_3[VAR_4], VAR_0);
  if (VAR_5) {
   FUNC_0(VAR_2->netdev,
       "could not submit urb; code: %d\n",
       VAR_5);
   goto err;
  }




  FUNC_2(VAR_3[VAR_4]);
  VAR_3[VAR_4] = ((void*)0);
 }
 return 0;

err:

 FUNC_1(VAR_2, VAR_3);


 FUNC_3(&VAR_2->rx_urbs);

 return VAR_5;
}
