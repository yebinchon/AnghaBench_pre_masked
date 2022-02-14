
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int route_hi; int route_lo; } ;
struct tb_switch {int connection_id; TYPE_1__ config; int uuid; } ;
struct tb {int dummy; } ;
struct TYPE_4__ {int flags; int code; } ;
struct icm_tr_pkg_approve_device {TYPE_2__ hdr; int connection_id; int route_hi; int route_lo; int ep_uuid; } ;
typedef int request ;
typedef int reply ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct tb*,struct icm_tr_pkg_approve_device*,int,struct icm_tr_pkg_approve_device*,int,int,int ) ;
 int FUNC_1 (int *,int ,int) ;
 int FUNC_2 (struct icm_tr_pkg_approve_device*,int ,int) ;
 int FUNC_3 (struct tb*,char*) ;

__attribute__((used)) static int FUNC_4(struct tb *VAR_4, struct tb_switch *VAR_5)
{
 struct icm_tr_pkg_approve_device VAR_6;
 struct icm_tr_pkg_approve_device VAR_7;
 int VAR_8;

 FUNC_2(&VAR_6, 0, sizeof(VAR_6));
 FUNC_1(&VAR_6.ep_uuid, VAR_5->uuid, sizeof(VAR_6.ep_uuid));
 VAR_6.hdr.code = VAR_1;
 VAR_6.route_lo = VAR_5->config.route_lo;
 VAR_6.route_hi = VAR_5->config.route_hi;
 VAR_6.connection_id = VAR_5->connection_id;

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
