
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtl8169_private {scalar_t__ RxDescArray; struct page** Rx_databuff; } ;
struct page {int dummy; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 struct page* FUNC_0 (struct rtl8169_private*,scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (struct rtl8169_private*) ;

__attribute__((used)) static int FUNC_4(struct rtl8169_private *VAR_2)
{
 unsigned int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_1; VAR_3++) {
  struct page *VAR_4;

  VAR_4 = FUNC_0(VAR_2, VAR_2->RxDescArray + VAR_3);
  if (!VAR_4) {
   FUNC_1(VAR_2->RxDescArray + VAR_3);
   goto err_out;
  }
  VAR_2->Rx_databuff[VAR_3] = VAR_4;
 }

 FUNC_2(VAR_2->RxDescArray + VAR_1 - 1);
 return 0;

err_out:
 FUNC_3(VAR_2);
 return -VAR_0;
}
