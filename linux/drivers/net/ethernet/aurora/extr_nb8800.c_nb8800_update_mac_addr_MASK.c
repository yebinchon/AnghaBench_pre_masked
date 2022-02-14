
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int * dev_addr; } ;
struct nb8800_priv {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct nb8800_priv*,int ,int ) ;
 struct nb8800_priv* FUNC_3 (struct net_device*) ;

__attribute__((used)) static void FUNC_4(struct net_device *VAR_1)
{
 struct nb8800_priv *VAR_2 = FUNC_3(VAR_1);
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++)
  FUNC_2(VAR_2, FUNC_0(VAR_3), VAR_1->dev_addr[VAR_3]);

 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++)
  FUNC_2(VAR_2, FUNC_1(VAR_3), VAR_1->dev_addr[VAR_3]);
}
