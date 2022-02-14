
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usbnet {int dummy; } ;
struct ethtool_eee {void* lp_advertised; void* advertised; int supported; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct usbnet*,int ,int ) ;
 void* FUNC_1 (int) ;
 int FUNC_2 (int) ;

__attribute__((used)) static int
FUNC_3(struct usbnet *VAR_5, struct ethtool_eee *VAR_6)
{
 int VAR_7;


 VAR_7 = FUNC_0(VAR_5, VAR_4,
         VAR_3);
 if (VAR_7 < 0)
  return VAR_7;
 VAR_6->supported = FUNC_2(VAR_7);


 VAR_7 = FUNC_0(VAR_5, VAR_0,
         VAR_2);
 if (VAR_7 < 0)
  return VAR_7;
 VAR_6->advertised = FUNC_1(VAR_7);


 VAR_7 = FUNC_0(VAR_5, VAR_1,
         VAR_2);
 if (VAR_7 < 0)
  return VAR_7;
 VAR_6->lp_advertised = FUNC_1(VAR_7);

 return 0;
}
