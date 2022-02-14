
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct net_device {int dummy; } ;
struct TYPE_2__ {int hthi; int htlo; } ;
struct fs_enet_private {TYPE_1__ fec; } ;


 int FUNC_0 (int,int const*) ;
 struct fs_enet_private* FUNC_1 (struct net_device*) ;

__attribute__((used)) static void FUNC_2(struct net_device *VAR_0, const u8 *VAR_1)
{
 struct fs_enet_private *VAR_2 = FUNC_1(VAR_0);
 int VAR_3, VAR_4;
 u32 VAR_5, VAR_6;

 VAR_5 = FUNC_0(6, VAR_1);

 VAR_3 = (VAR_5 & 0x3f) >> 1;
 VAR_4 = ((VAR_3 & 0x01) << 4) |
       ((VAR_3 & 0x02) << 2) |
       ((VAR_3 & 0x04)) |
       ((VAR_3 & 0x08) >> 2) |
       ((VAR_3 & 0x10) >> 4);
 VAR_6 = 1 << VAR_4;
 if (VAR_5 & 1)
  VAR_2->fec.hthi |= VAR_6;
 else
  VAR_2->fec.htlo |= VAR_6;
}
