
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mlx5e_encap_entry {TYPE_1__* tunnel; } ;
typedef int __u8 ;
struct TYPE_2__ {int (* generate_ip_tun_hdr ) (char*,int *,struct mlx5e_encap_entry*) ;} ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*,int *,struct mlx5e_encap_entry*) ;

__attribute__((used)) static int FUNC_2(char VAR_1[], __u8 *VAR_2,
          struct mlx5e_encap_entry *VAR_3)
{
 if (!VAR_3->tunnel) {
  FUNC_0("mlx5: Cannot generate tunnel header for this tunnel\n");
  return -VAR_0;
 }

 return VAR_3->tunnel->generate_ip_tun_hdr(VAR_1, VAR_2, VAR_3);
}
