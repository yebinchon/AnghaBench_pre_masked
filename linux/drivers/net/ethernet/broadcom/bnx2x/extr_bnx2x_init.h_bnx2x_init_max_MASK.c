
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct cmng_vnic {TYPE_3__* vnic_max_rate; } ;
struct TYPE_4__ {int rs_periodic_timeout; int rs_threshold; } ;
struct cmng_struct_per_port {TYPE_1__ rs_vars; } ;
struct cmng_init_input {scalar_t__* vnic_max_rate; } ;
struct cmng_init {struct cmng_struct_per_port port; struct cmng_vnic vnic; } ;
struct TYPE_5__ {int quota; scalar_t__ rate; } ;
struct TYPE_6__ {TYPE_2__ vn_counter; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static inline void FUNC_0(const struct cmng_init_input *VAR_3,
      u32 VAR_4, struct cmng_init *VAR_5)
{
 u32 VAR_6;
 struct cmng_vnic *VAR_7 = &VAR_5->vnic;
 struct cmng_struct_per_port *VAR_8 = &VAR_5->port;





 VAR_8->rs_vars.rs_periodic_timeout =
 VAR_1 / VAR_2;





 VAR_8->rs_vars.rs_threshold =
 (5 * VAR_1 * VAR_4)/4;


 for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++) {

  VAR_7->vnic_max_rate[VAR_6].vn_counter.rate =
  VAR_3->vnic_max_rate[VAR_6];




  VAR_7->vnic_max_rate[VAR_6].vn_counter.quota =
   VAR_1 *
   (u32)VAR_7->vnic_max_rate[VAR_6].vn_counter.rate / 8;
 }

}
