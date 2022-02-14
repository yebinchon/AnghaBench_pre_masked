
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tb_switch {int connection_key; int connection_id; int uuid; } ;
struct tb {int dummy; } ;
struct TYPE_2__ {int flags; int code; } ;
struct icm_fr_pkg_approve_device {TYPE_1__ hdr; int connection_key; int connection_id; int ep_uuid; } ;
typedef int request ;
typedef int reply ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct tb*,struct icm_fr_pkg_approve_device*,int,struct icm_fr_pkg_approve_device*,int,int,int ) ;
 int FUNC_1 (int *,int ,int) ;
 int FUNC_2 (struct icm_fr_pkg_approve_device*,int ,int) ;
 int FUNC_3 (struct tb*,char*) ;

__attribute__((used)) static int FUNC_4(struct tb *VAR_4, struct tb_switch *VAR_5)
{
 struct icm_fr_pkg_approve_device VAR_6;
 struct icm_fr_pkg_approve_device VAR_7;
 int VAR_8;

 FUNC_2(&VAR_6, 0, sizeof(VAR_6));
 FUNC_1(&VAR_6.ep_uuid, VAR_5->uuid, sizeof(VAR_6.ep_uuid));
 VAR_6.hdr.code = VAR_1;
 VAR_6.connection_id = VAR_5->connection_id;
 VAR_6.connection_key = VAR_5->connection_key;

 FUNC_2(&VAR_7, 0, sizeof(VAR_7));

 VAR_8 = FUNC_0(VAR_4, &VAR_6, sizeof(VAR_6), &VAR_7, sizeof(VAR_7),
     1, VAR_2);
 if (VAR_8)
  return VAR_8;

 if (VAR_7.hdr.flags & VAR_3) {
  FUNC_3(VAR_4, "PCIe tunnel creation failed\n");
  return -VAR_0;
 }

 return 0;
}
