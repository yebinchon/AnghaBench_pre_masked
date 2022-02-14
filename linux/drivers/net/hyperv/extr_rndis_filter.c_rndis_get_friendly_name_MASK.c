
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wname ;
typedef int ucs2_char_t ;
typedef int u8 ;
typedef int u32 ;
struct rndis_device {int dummy; } ;
struct netvsc_device {int dummy; } ;
struct net_device {int dummy; } ;
typedef int ifalias ;


 int VAR_0 ;
 int FUNC_0 (struct net_device*,int *,unsigned long) ;
 scalar_t__ FUNC_1 (struct rndis_device*,struct netvsc_device*,int ,int *,int*) ;
 scalar_t__ FUNC_2 (int *,char*) ;
 unsigned long FUNC_3 (int *,int *,int) ;

__attribute__((used)) static void FUNC_4(struct net_device *VAR_1,
        struct rndis_device *VAR_2,
        struct netvsc_device *VAR_3)
{
 ucs2_char_t VAR_4[256];
 unsigned long VAR_5;
 u8 VAR_6[256];
 u32 VAR_7;

 VAR_7 = sizeof(VAR_4);
 if (FUNC_1(VAR_2, VAR_3,
          VAR_0,
          VAR_4, &VAR_7) != 0)
  return;

 if (VAR_7 == 0)
  return;


 VAR_5 = FUNC_3(VAR_6, VAR_4, sizeof(VAR_6));


 if (FUNC_2(VAR_6, "Network Adapter") != 0)
  FUNC_0(VAR_1, VAR_6, VAR_5);
}
