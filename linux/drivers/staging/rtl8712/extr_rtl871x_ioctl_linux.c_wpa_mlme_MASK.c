
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct net_device {int dummy; } ;
struct _adapter {int dummy; } ;


 int VAR_0 ;


 struct _adapter* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct _adapter*) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_1, u32 VAR_2, u32 VAR_3)
{
 struct _adapter *VAR_4 = FUNC_0(VAR_1);

 switch (VAR_2) {
 case 129:
  if (!FUNC_1(VAR_4))
   return -1;
  break;
 case 128:
  if (!FUNC_1(VAR_4))
   return -1;
  break;
 default:
  return -VAR_0;
 }
 return 0;
}
