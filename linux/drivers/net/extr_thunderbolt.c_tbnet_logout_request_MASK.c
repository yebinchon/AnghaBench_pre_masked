
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thunderbolt_ip_status {int dummy; } ;
struct thunderbolt_ip_logout {int hdr; } ;
struct tbnet {int command_id; struct tb_xdomain* xd; } ;
struct tb_xdomain {int remote_uuid; int local_uuid; int route; } ;
typedef int request ;
typedef int reply ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct thunderbolt_ip_logout*,int ,int) ;
 int FUNC_2 (struct tb_xdomain*,struct thunderbolt_ip_logout*,int,int ,struct thunderbolt_ip_status*,int,int ,int ) ;
 int FUNC_3 (int *,int ,int ,int ,int ,int ,int,int ) ;

__attribute__((used)) static int FUNC_4(struct tbnet *VAR_3)
{
 struct thunderbolt_ip_logout VAR_4;
 struct thunderbolt_ip_status VAR_5;
 struct tb_xdomain *VAR_6 = VAR_3->xd;

 FUNC_1(&VAR_4, 0, sizeof(VAR_4));
 FUNC_3(&VAR_4.hdr, VAR_6->route, 0, VAR_6->local_uuid,
     VAR_6->remote_uuid, VAR_0, sizeof(VAR_4),
     FUNC_0(&VAR_3->command_id));

 return FUNC_2(VAR_6, &VAR_4, sizeof(VAR_4),
      VAR_2, &VAR_5,
      sizeof(VAR_5), VAR_2,
      VAR_1);
}
