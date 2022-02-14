
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct thunderbolt_ip_login_response {int dummy; } ;
struct thunderbolt_ip_login {int transmit_path; int proto_version; int hdr; } ;
struct tbnet {int command_id; struct tb_xdomain* xd; } ;
struct tb_xdomain {int remote_uuid; int local_uuid; int route; } ;
typedef int request ;
typedef int reply ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct thunderbolt_ip_login*,int ,int) ;
 int FUNC_2 (struct tb_xdomain*,struct thunderbolt_ip_login*,int,int ,struct thunderbolt_ip_login_response*,int,int ,int ) ;
 int FUNC_3 (int *,int ,int ,int ,int ,int ,int,int ) ;

__attribute__((used)) static int FUNC_4(struct tbnet *VAR_5, u8 VAR_6)
{
 struct thunderbolt_ip_login_response VAR_7;
 struct thunderbolt_ip_login VAR_8;
 struct tb_xdomain *VAR_9 = VAR_5->xd;

 FUNC_1(&VAR_8, 0, sizeof(VAR_8));
 FUNC_3(&VAR_8.hdr, VAR_9->route, VAR_6, VAR_9->local_uuid,
     VAR_9->remote_uuid, VAR_0, sizeof(VAR_8),
     FUNC_0(&VAR_5->command_id));

 VAR_8.proto_version = VAR_1;
 VAR_8.transmit_path = VAR_2;

 return FUNC_2(VAR_9, &VAR_8, sizeof(VAR_8),
      VAR_4, &VAR_7,
      sizeof(VAR_7), VAR_4,
      VAR_3);
}
