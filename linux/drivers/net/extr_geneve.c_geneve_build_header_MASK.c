
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int tun_flags; int tun_id; } ;
struct ip_tunnel_info {int options_len; TYPE_1__ key; } ;
struct genevehdr {int opt_len; int oam; int critical; int options; scalar_t__ rsvd2; int proto_type; int vni; scalar_t__ rsvd1; int ver; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,struct ip_tunnel_info const*) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static void FUNC_3(struct genevehdr *VAR_5,
    const struct ip_tunnel_info *VAR_6)
{
 VAR_5->ver = VAR_1;
 VAR_5->opt_len = VAR_6->options_len / 4;
 VAR_5->oam = !!(VAR_6->key.tun_flags & VAR_4);
 VAR_5->critical = !!(VAR_6->key.tun_flags & VAR_2);
 VAR_5->rsvd1 = 0;
 FUNC_2(VAR_6->key.tun_id, VAR_5->vni);
 VAR_5->proto_type = FUNC_0(VAR_0);
 VAR_5->rsvd2 = 0;

 if (VAR_6->key.tun_flags & VAR_3)
  FUNC_1(VAR_5->options, VAR_6);
}
