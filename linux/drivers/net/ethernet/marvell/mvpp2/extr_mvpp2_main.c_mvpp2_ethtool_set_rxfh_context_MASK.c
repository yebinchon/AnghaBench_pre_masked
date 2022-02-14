
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
 int VAR_3 ;
 int FUNC_0 (struct mvpp2_port*,int *) ;
 int FUNC_1 (struct mvpp2_port*,int ) ;
 int FUNC_2 (struct mvpp2_port*,int ,int const*) ;
 int FUNC_3 () ;
 struct mvpp2_port* FUNC_4 (struct net_device*) ;

__attribute__((used)) static int FUNC_5(struct net_device *VAR_4,
       const u32 *VAR_5, const u8 *VAR_6,
       const u8 VAR_7, u32 *VAR_8,
       bool VAR_9)
{
 struct mvpp2_port *VAR_10 = FUNC_4(VAR_4);
 int VAR_11;

 if (!FUNC_3())
  return -VAR_0;

 if (VAR_7 != VAR_2 && VAR_7 != VAR_1)
  return -VAR_0;

 if (VAR_6)
  return -VAR_0;

 if (VAR_9)
  return FUNC_1(VAR_10, *VAR_8);

 if (*VAR_8 == VAR_3) {
  VAR_11 = FUNC_0(VAR_10, VAR_8);
  if (VAR_11)
   return VAR_11;
 }

 return FUNC_2(VAR_10, *VAR_8, VAR_5);
}
