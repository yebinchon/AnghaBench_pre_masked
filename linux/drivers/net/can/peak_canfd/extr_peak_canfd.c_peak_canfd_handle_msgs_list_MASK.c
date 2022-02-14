
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pucan_rx_msg {int dummy; } ;
struct peak_canfd_priv {int dummy; } ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (struct peak_canfd_priv*,void*) ;

int FUNC_2(struct peak_canfd_priv *VAR_0,
    struct pucan_rx_msg *VAR_1, int VAR_2)
{
 void *VAR_3 = VAR_1;
 int VAR_4, VAR_5 = 0;

 for (VAR_4 = 0; VAR_4 < VAR_2; VAR_4++) {
  VAR_5 = FUNC_1(VAR_0, VAR_3);


  if (VAR_5 <= 0)
   break;

  VAR_3 += FUNC_0(VAR_5, 4);
 }

 if (VAR_5 < 0)
  return VAR_5;

 return VAR_4;
}
