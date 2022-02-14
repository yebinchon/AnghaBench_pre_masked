
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u64 ;
typedef int u32 ;
struct thunderbolt_ip_login_response {int receiver_mac_len; int receiver_mac; int hdr; } ;
struct tbnet {TYPE_1__* dev; struct tb_xdomain* xd; } ;
struct tb_xdomain {int remote_uuid; int local_uuid; } ;
typedef int reply ;
struct TYPE_2__ {int dev_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (struct thunderbolt_ip_login_response*,int ,int) ;
 int FUNC_2 (struct tb_xdomain*,struct thunderbolt_ip_login_response*,int,int ) ;
 int FUNC_3 (int *,int ,int ,int ,int ,int ,int,int ) ;

__attribute__((used)) static int FUNC_4(struct tbnet *VAR_3, u64 VAR_4, u8 VAR_5,
    u32 VAR_6)
{
 struct thunderbolt_ip_login_response VAR_7;
 struct tb_xdomain *VAR_8 = VAR_3->xd;

 FUNC_1(&VAR_7, 0, sizeof(VAR_7));
 FUNC_3(&VAR_7.hdr, VAR_4, VAR_5, VAR_8->local_uuid,
     VAR_8->remote_uuid, VAR_1, sizeof(VAR_7),
     VAR_6);
 FUNC_0(VAR_7.receiver_mac, VAR_3->dev->dev_addr, VAR_0);
 VAR_7.receiver_mac_len = VAR_0;

 return FUNC_2(VAR_8, &VAR_7, sizeof(VAR_7),
       VAR_2);
}
