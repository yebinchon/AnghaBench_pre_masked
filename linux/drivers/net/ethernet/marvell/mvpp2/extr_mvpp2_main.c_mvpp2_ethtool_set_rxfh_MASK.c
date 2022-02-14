
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u32 ;
struct net_device {int dummy; } ;
struct mvpp2_port {int dummy; } ;


 int VAR_0 ;
 scalar_t__ const VAR_1 ;
 scalar_t__ const VAR_2 ;
 int FUNC_0 (struct mvpp2_port*,int ,int const*) ;
 int FUNC_1 () ;
 struct mvpp2_port* FUNC_2 (struct net_device*) ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_3, const u32 *VAR_4,
      const u8 *VAR_5, const u8 VAR_6)
{
 struct mvpp2_port *VAR_7 = FUNC_2(VAR_3);
 int VAR_8 = 0;

 if (!FUNC_1())
  return -VAR_0;

 if (VAR_6 != VAR_2 && VAR_6 != VAR_1)
  return -VAR_0;

 if (VAR_5)
  return -VAR_0;

 if (VAR_4)
  VAR_8 = FUNC_0(VAR_7, 0, VAR_4);

 return VAR_8;
}
