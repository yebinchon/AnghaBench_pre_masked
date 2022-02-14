
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tb_switch {int key; int connection_key; int connection_id; int uuid; } ;
struct tb {int dummy; } ;
struct TYPE_2__ {int flags; int code; } ;
struct icm_fr_pkg_add_device_key_response {TYPE_1__ hdr; int * key; int connection_key; int connection_id; int ep_uuid; } ;
struct icm_fr_pkg_add_device_key {TYPE_1__ hdr; int * key; int connection_key; int connection_id; int ep_uuid; } ;
typedef int request ;
typedef int reply ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct tb*,struct icm_fr_pkg_add_device_key_response*,int,struct icm_fr_pkg_add_device_key_response*,int,int,int ) ;
 int FUNC_1 (int *,int ,int) ;
 int FUNC_2 (struct icm_fr_pkg_add_device_key_response*,int ,int) ;
 int FUNC_3 (struct tb*,char*) ;

__attribute__((used)) static int FUNC_4(struct tb *VAR_5, struct tb_switch *VAR_6)
{
 struct icm_fr_pkg_add_device_key VAR_7;
 struct icm_fr_pkg_add_device_key_response VAR_8;
 int VAR_9;

 FUNC_2(&VAR_7, 0, sizeof(VAR_7));
 FUNC_1(&VAR_7.ep_uuid, VAR_6->uuid, sizeof(VAR_7.ep_uuid));
 VAR_7.hdr.code = VAR_1;
 VAR_7.connection_id = VAR_6->connection_id;
 VAR_7.connection_key = VAR_6->connection_key;
 FUNC_1(VAR_7.key, VAR_6->key, VAR_4);

 FUNC_2(&VAR_8, 0, sizeof(VAR_8));
 VAR_9 = FUNC_0(VAR_5, &VAR_7, sizeof(VAR_7), &VAR_8, sizeof(VAR_8),
     1, VAR_3);
 if (VAR_9)
  return VAR_9;

 if (VAR_8.hdr.flags & VAR_2) {
  FUNC_3(VAR_5, "Adding key to switch failed\n");
  return -VAR_0;
 }

 return 0;
}
