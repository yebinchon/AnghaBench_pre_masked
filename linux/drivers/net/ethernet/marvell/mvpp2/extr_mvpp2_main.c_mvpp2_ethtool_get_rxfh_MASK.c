
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct net_device {int dummy; } ;
struct mvpp2_port {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct mvpp2_port*,int ,int *) ;
 int FUNC_1 () ;
 struct mvpp2_port* FUNC_2 (struct net_device*) ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_2, u32 *VAR_3, u8 *VAR_4,
      u8 *VAR_5)
{
 struct mvpp2_port *VAR_6 = FUNC_2(VAR_2);
 int VAR_7 = 0;

 if (!FUNC_1())
  return -VAR_0;

 if (VAR_3)
  VAR_7 = FUNC_0(VAR_6, 0, VAR_3);

 if (VAR_5)
  *VAR_5 = VAR_1;

 return VAR_7;
}
