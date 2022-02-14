
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct urb {int dummy; } ;
struct ar9170 {int rx_anch_urbs; int rx_pool_urbs; int rx_pool; int rx_anch; } ;
typedef int gfp_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (struct urb*,int *) ;
 int FUNC_5 (struct urb*) ;
 struct urb* FUNC_6 (int *) ;
 int FUNC_7 (struct urb*,int ) ;
 int FUNC_8 (struct urb*) ;

__attribute__((used)) static int FUNC_9(struct ar9170 *VAR_2, gfp_t VAR_3)
{
 struct urb *VAR_4;
 int VAR_5 = 0, VAR_6 = 0;

 while ((FUNC_2(&VAR_2->rx_anch_urbs) < VAR_0) &&
  (VAR_6++ < VAR_0)) {
  VAR_5 = -VAR_1;
  VAR_4 = FUNC_6(&VAR_2->rx_pool);
  if (VAR_4) {
   FUNC_4(VAR_4, &VAR_2->rx_anch);
   VAR_5 = FUNC_7(VAR_4, VAR_3);
   if (FUNC_3(VAR_5)) {
    FUNC_8(VAR_4);
    FUNC_4(VAR_4, &VAR_2->rx_pool);
   } else {
    FUNC_0(&VAR_2->rx_pool_urbs);
    FUNC_1(&VAR_2->rx_anch_urbs);
   }
   FUNC_5(VAR_4);
  }
 }

 return VAR_5;
}
