
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct net_device {int dummy; } ;
struct enic {scalar_t__ mc_count; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct enic*,int const*) ;
 unsigned int FUNC_1 (struct net_device*) ;
 struct enic* FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*,char*,scalar_t__,unsigned int) ;

__attribute__((used)) static int FUNC_4(struct net_device *VAR_2, const u8 *VAR_3)
{
 struct enic *VAR_4 = FUNC_2(VAR_2);

 if (VAR_4->mc_count == VAR_0) {
  unsigned int VAR_5 = FUNC_1(VAR_2);

  FUNC_3(VAR_2, "Registering only %d out of %d multicast addresses\n",
       VAR_0, VAR_5);

  return -VAR_1;
 }

 FUNC_0(VAR_4, VAR_3);
 VAR_4->mc_count++;

 return 0;
}
