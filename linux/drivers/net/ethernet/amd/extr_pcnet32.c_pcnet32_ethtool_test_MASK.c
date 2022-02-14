
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct pcnet32_private {int dummy; } ;
struct net_device {int dummy; } ;
struct ethtool_test {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct pcnet32_private* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct pcnet32_private*,int ,int ,struct net_device*,char*) ;
 int FUNC_2 (struct net_device*,int *) ;

__attribute__((used)) static void FUNC_3(struct net_device *VAR_4,
     struct ethtool_test *VAR_5, u64 * VAR_6)
{
 struct pcnet32_private *VAR_7 = FUNC_0(VAR_4);
 int VAR_8;

 if (VAR_5->flags == VAR_1) {
  VAR_8 = FUNC_2(VAR_4, VAR_6);
  if (VAR_8) {
   FUNC_1(VAR_7, VAR_3, VAR_2, VAR_4,
         "Loopback test failed\n");
   VAR_5->flags |= VAR_0;
  } else
   FUNC_1(VAR_7, VAR_3, VAR_2, VAR_4,
         "Loopback test passed\n");
 } else
  FUNC_1(VAR_7, VAR_3, VAR_2, VAR_4,
        "No tests to run (specify 'Offline' on ethtool)\n");
}
