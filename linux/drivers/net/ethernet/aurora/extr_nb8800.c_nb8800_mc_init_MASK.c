
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct nb8800_priv {scalar_t__ base; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct nb8800_priv*,scalar_t__,int) ;
 struct nb8800_priv* FUNC_1 (struct net_device*) ;
 int FUNC_2 (scalar_t__,int,int,int,int) ;

__attribute__((used)) static void FUNC_3(struct net_device *VAR_1, int VAR_2)
{
 struct nb8800_priv *VAR_3 = FUNC_1(VAR_1);

 FUNC_0(VAR_3, VAR_0, VAR_2);
 FUNC_2(VAR_3->base + VAR_0, VAR_2, !VAR_2,
      1, 1000);
}
