
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_3__ {int route_hi; int route_lo; } ;
struct tb_switch {int connection_id; TYPE_1__ config; int const* uuid; } ;
struct tb {int dummy; } ;
struct TYPE_4__ {int flags; int code; } ;
struct icm_tr_pkg_challenge_device_response {int const* response; TYPE_2__ hdr; int * challenge; int connection_id; int route_hi; int route_lo; int ep_uuid; } ;
struct icm_tr_pkg_challenge_device {int const* response; TYPE_2__ hdr; int * challenge; int connection_id; int route_hi; int route_lo; int ep_uuid; } ;
typedef int request ;
typedef int reply ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct tb*,struct icm_tr_pkg_challenge_device_response*,int,struct icm_tr_pkg_challenge_device_response*,int,int,int ) ;
 int FUNC_1 (int *,int const*,int) ;
 int FUNC_2 (struct icm_tr_pkg_challenge_device_response*,int ,int) ;

__attribute__((used)) static int FUNC_3(struct tb *VAR_7, struct tb_switch *VAR_8,
           const u8 *VAR_9, u8 *VAR_10)
{
 struct icm_tr_pkg_challenge_device_response VAR_11;
 struct icm_tr_pkg_challenge_device VAR_12;
 int VAR_13;

 FUNC_2(&VAR_12, 0, sizeof(VAR_12));
 FUNC_1(&VAR_12.ep_uuid, VAR_8->uuid, sizeof(VAR_12.ep_uuid));
 VAR_12.hdr.code = VAR_2;
 VAR_12.route_lo = VAR_8->config.route_lo;
 VAR_12.route_hi = VAR_8->config.route_hi;
 VAR_12.connection_id = VAR_8->connection_id;
 FUNC_1(VAR_12.challenge, VAR_9, VAR_6);

 FUNC_2(&VAR_11, 0, sizeof(VAR_11));
 VAR_13 = FUNC_0(VAR_7, &VAR_12, sizeof(VAR_12), &VAR_11, sizeof(VAR_11),
     1, VAR_5);
 if (VAR_13)
  return VAR_13;

 if (VAR_11.hdr.flags & VAR_3)
  return -VAR_0;
 if (VAR_11.hdr.flags & VAR_4)
  return -VAR_1;

 FUNC_1(VAR_10, VAR_11.response, VAR_6);

 return 0;
}
