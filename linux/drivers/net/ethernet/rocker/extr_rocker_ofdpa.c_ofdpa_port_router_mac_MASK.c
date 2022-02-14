
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct ofdpa_port {TYPE_1__* dev; int pport; int internal_vlan_id; } ;
typedef int __be16 ;
struct TYPE_2__ {int dev_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int * VAR_2 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (struct ofdpa_port*,int ,int,int ,int ,int const*,int ,int ,int,int) ;

__attribute__((used)) static int FUNC_3(struct ofdpa_port *VAR_3,
     int VAR_4, __be16 VAR_5)
{
 u32 VAR_6 = 0xffffffff;
 __be16 VAR_7;
 const u8 *VAR_8 = VAR_2;
 __be16 VAR_9 = FUNC_0(0xffff);
 bool VAR_10 = 0;
 int VAR_11;

 if (FUNC_1(VAR_5) == 0)
  VAR_5 = VAR_3->internal_vlan_id;

 VAR_7 = FUNC_0(VAR_0);
 VAR_11 = FUNC_2(VAR_3, VAR_3->pport,
          VAR_6, VAR_7,
          VAR_3->dev->dev_addr,
          VAR_8, VAR_5, VAR_9,
          VAR_10, VAR_4);
 if (VAR_11)
  return VAR_11;

 VAR_7 = FUNC_0(VAR_1);
 VAR_11 = FUNC_2(VAR_3, VAR_3->pport,
          VAR_6, VAR_7,
          VAR_3->dev->dev_addr,
          VAR_8, VAR_5, VAR_9,
          VAR_10, VAR_4);

 return VAR_11;
}
