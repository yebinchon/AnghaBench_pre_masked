
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct net_device {int dummy; } ;
struct ef4_nic {int rx_indir_table; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,int) ;
 struct ef4_nic* FUNC_1 (struct net_device*) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_1, u32 *VAR_2, u8 *VAR_3,
    u8 *VAR_4)
{
 struct ef4_nic *VAR_5 = FUNC_1(VAR_1);

 if (VAR_4)
  *VAR_4 = VAR_0;
 if (VAR_2)
  FUNC_0(VAR_2, VAR_5->rx_indir_table, sizeof(VAR_5->rx_indir_table));
 return 0;
}
