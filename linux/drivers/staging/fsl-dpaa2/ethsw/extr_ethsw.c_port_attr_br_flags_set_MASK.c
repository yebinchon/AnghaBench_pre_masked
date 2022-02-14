
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct switchdev_trans {int dummy; } ;
struct net_device {int dummy; } ;
struct ethsw_port_priv {int ethsw_data; } ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 int FUNC_0 (struct ethsw_port_priv*,int) ;
 int FUNC_1 (int ,int) ;
 struct ethsw_port_priv* FUNC_2 (struct net_device*) ;
 scalar_t__ FUNC_3 (struct switchdev_trans*) ;

__attribute__((used)) static int FUNC_4(struct net_device *VAR_2,
      struct switchdev_trans *VAR_3,
      unsigned long VAR_4)
{
 struct ethsw_port_priv *VAR_5 = FUNC_2(VAR_2);
 int VAR_6 = 0;

 if (FUNC_3(VAR_3))
  return 0;


 VAR_6 = FUNC_1(VAR_5->ethsw_data,
     !!(VAR_4 & VAR_1));
 if (VAR_6)
  goto exit;

 VAR_6 = FUNC_0(VAR_5, !!(VAR_4 & VAR_0));

exit:
 return VAR_6;
}
