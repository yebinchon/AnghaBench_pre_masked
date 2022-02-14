
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int ctrlmode; } ;
struct peak_canfd_priv {TYPE_1__ can; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct net_device*,char*,int) ;
 struct peak_canfd_priv* FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct peak_canfd_priv*) ;
 int FUNC_5 (struct peak_canfd_priv*,int ) ;
 int FUNC_6 (struct peak_canfd_priv*,int ) ;
 int FUNC_7 (struct peak_canfd_priv*) ;
 int FUNC_8 (struct peak_canfd_priv*,int,int) ;
 int FUNC_9 (struct peak_canfd_priv*) ;

__attribute__((used)) static int FUNC_10(struct net_device *VAR_5)
{
 struct peak_canfd_priv *VAR_6 = FUNC_2(VAR_5);
 int VAR_7, VAR_8 = 0;

 VAR_8 = FUNC_3(VAR_5);
 if (VAR_8) {
  FUNC_1(VAR_5, "open_candev() failed, error %d\n", VAR_8);
  goto err_exit;
 }

 VAR_8 = FUNC_7(VAR_6);
 if (VAR_8)
  goto err_close;

 if (VAR_6->can.ctrlmode & VAR_0) {
  if (VAR_6->can.ctrlmode & VAR_1)
   VAR_8 = FUNC_5(VAR_6, VAR_3);
  else
   VAR_8 = FUNC_6(VAR_6, VAR_3);

  if (VAR_8)
   goto err_close;
 }


 VAR_8 = FUNC_6(VAR_6, VAR_4);
 if (VAR_8)
  goto err_close;


 for (VAR_7 = 0; VAR_7 <= VAR_2; VAR_7++)
  FUNC_8(VAR_6, VAR_7, 0xffffffff);

 VAR_8 = FUNC_4(VAR_6);
 if (VAR_8)
  goto err_close;


 VAR_8 = FUNC_9(VAR_6);
 if (!VAR_8)
  goto err_exit;

err_close:
 FUNC_0(VAR_5);
err_exit:
 return VAR_8;
}
