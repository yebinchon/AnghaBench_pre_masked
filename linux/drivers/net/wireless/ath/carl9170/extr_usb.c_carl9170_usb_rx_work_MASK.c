
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct urb {int actual_length; int transfer_buffer; } ;
struct ar9170 {int rx_pool_urbs; int rx_pool; int rx_work_urbs; int rx_work; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct ar9170*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct ar9170*,int ,int ) ;
 int FUNC_4 (struct ar9170*,int ) ;
 int FUNC_5 (struct urb*,int *) ;
 int FUNC_6 (struct urb*) ;
 struct urb* FUNC_7 (int *) ;

__attribute__((used)) static void FUNC_8(struct ar9170 *VAR_2)
{
 struct urb *VAR_3;
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
  VAR_3 = FUNC_7(&VAR_2->rx_work);
  if (!VAR_3)
   break;

  FUNC_1(&VAR_2->rx_work_urbs);
  if (FUNC_0(VAR_2)) {
   FUNC_3(VAR_2, VAR_3->transfer_buffer,
        VAR_3->actual_length);
  }

  FUNC_5(VAR_3, &VAR_2->rx_pool);
  FUNC_2(&VAR_2->rx_pool_urbs);

  FUNC_6(VAR_3);

  FUNC_4(VAR_2, VAR_1);
 }
}
