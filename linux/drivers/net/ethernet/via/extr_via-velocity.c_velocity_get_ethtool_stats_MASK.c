
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct velocity_info {int lock; int * mib_counter; } ;
struct net_device {int dummy; } ;
struct ethtool_stats {int dummy; } ;


 int FUNC_0 (int ) ;
 struct velocity_info* FUNC_1 (struct net_device*) ;
 scalar_t__ FUNC_2 (struct net_device*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int VAR_0 ;
 int FUNC_5 (struct velocity_info*) ;

__attribute__((used)) static void FUNC_6(struct net_device *VAR_1,
           struct ethtool_stats *VAR_2, u64 *VAR_3)
{
 if (FUNC_2(VAR_1)) {
  struct velocity_info *VAR_4 = FUNC_1(VAR_1);
  u32 *VAR_5 = VAR_4->mib_counter;
  int VAR_6;

  FUNC_3(&VAR_4->lock);
  FUNC_5(VAR_4);
  FUNC_4(&VAR_4->lock);

  for (VAR_6 = 0; VAR_6 < FUNC_0(VAR_0); VAR_6++)
   *VAR_3++ = *VAR_5++;
 }
}
