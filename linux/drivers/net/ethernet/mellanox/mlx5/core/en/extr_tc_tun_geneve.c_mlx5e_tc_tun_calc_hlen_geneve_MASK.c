
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct udphdr {int dummy; } ;
struct mlx5e_encap_entry {TYPE_1__* tun_info; } ;
struct genevehdr {int dummy; } ;
struct TYPE_2__ {int options_len; } ;



__attribute__((used)) static int FUNC_0(struct mlx5e_encap_entry *VAR_0)
{
 return sizeof(struct udphdr) +
        sizeof(struct genevehdr) +
        VAR_0->tun_info->options_len;
}
