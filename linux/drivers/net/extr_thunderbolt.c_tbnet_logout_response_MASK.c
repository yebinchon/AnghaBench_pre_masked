
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u64 ;
typedef int u32 ;
struct thunderbolt_ip_status {int hdr; } ;
struct tbnet {int command_id; struct tb_xdomain* xd; } ;
struct tb_xdomain {int remote_uuid; int local_uuid; } ;
typedef int reply ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct thunderbolt_ip_status*,int ,int) ;
 int FUNC_2 (struct tb_xdomain*,struct thunderbolt_ip_status*,int,int ) ;
 int FUNC_3 (int *,int ,int ,int ,int ,int ,int,int ) ;

__attribute__((used)) static int FUNC_4(struct tbnet *VAR_2, u64 VAR_3, u8 VAR_4,
     u32 VAR_5)
{
 struct thunderbolt_ip_status VAR_6;
 struct tb_xdomain *VAR_7 = VAR_2->xd;

 FUNC_1(&VAR_6, 0, sizeof(VAR_6));
 FUNC_3(&VAR_6.hdr, VAR_3, VAR_4, VAR_7->local_uuid,
     VAR_7->remote_uuid, VAR_0, sizeof(VAR_6),
     FUNC_0(&VAR_2->command_id));
 return FUNC_2(VAR_7, &VAR_6, sizeof(VAR_6),
       VAR_1);
}
