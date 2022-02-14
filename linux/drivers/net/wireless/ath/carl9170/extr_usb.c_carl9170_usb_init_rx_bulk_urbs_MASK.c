
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct urb {int dummy; } ;
struct ar9170 {int rx_anch; int rx_work; int rx_pool; int rx_pool_urbs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct ar9170*,int ,int ) ;
 struct urb* FUNC_2 (struct ar9170*,int ) ;
 int FUNC_3 (struct ar9170*,int ) ;
 int FUNC_4 (struct urb*,int *) ;
 int FUNC_5 (struct urb*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static int FUNC_8(struct ar9170 *VAR_6)
{
 struct urb *VAR_7;
 int VAR_8, VAR_9 = -VAR_3;
 for (VAR_8 = 0; VAR_8 < VAR_0; VAR_8++) {
  VAR_7 = FUNC_2(VAR_6, VAR_5);
  if (!VAR_7) {
   VAR_9 = -VAR_4;
   goto err_out;
  }

  FUNC_4(VAR_7, &VAR_6->rx_pool);
  FUNC_0(&VAR_6->rx_pool_urbs);
  FUNC_5(VAR_7);
 }

 VAR_9 = FUNC_3(VAR_6, VAR_5);
 if (VAR_9)
  goto err_out;


 FUNC_1(VAR_6, VAR_2, VAR_1);
 return 0;

err_out:

 FUNC_7(&VAR_6->rx_pool);
 FUNC_7(&VAR_6->rx_work);
 FUNC_6(&VAR_6->rx_anch);
 return VAR_9;
}
