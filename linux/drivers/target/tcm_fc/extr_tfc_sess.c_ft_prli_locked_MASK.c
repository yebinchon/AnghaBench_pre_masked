
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct ft_tport {int dummy; } ;
struct ft_sess {int params; int max_frame; int port_name; } ;
struct TYPE_2__ {int port_name; int port_id; } ;
struct fc_rport_priv {int maxframe_size; TYPE_1__ ids; int prli_count; int local_port; } ;
struct fc_els_spp {int spp_flags; void* spp_params; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ FUNC_0 (struct ft_sess*) ;
 int FUNC_1 (struct ft_sess*) ;
 struct ft_sess* FUNC_2 (struct ft_tport*,int ,struct fc_rport_priv*) ;
 struct ft_tport* FUNC_3 (int ) ;
 void* FUNC_4 (int) ;
 int FUNC_5 (void*) ;

__attribute__((used)) static int FUNC_6(struct fc_rport_priv *VAR_12, u32 VAR_13,
     const struct fc_els_spp *VAR_14, struct fc_els_spp *VAR_15)
{
 struct ft_tport *VAR_16;
 struct ft_sess *VAR_17;
 u32 VAR_18;

 VAR_16 = FUNC_3(VAR_12->local_port);
 if (!VAR_16)
  goto not_target;

 if (!VAR_14)
  goto fill;

 if (VAR_14->spp_flags & (VAR_5 | VAR_11))
  return VAR_9;




 VAR_18 = FUNC_5(VAR_14->spp_params);
 if (!(VAR_18 & (VAR_1 | VAR_3)))
  return VAR_8;





 if (VAR_14->spp_flags & VAR_4) {
  VAR_15->spp_flags |= VAR_4;
  if (!(VAR_18 & VAR_1))
   return VAR_7;
  VAR_17 = FUNC_2(VAR_16, VAR_12->ids.port_id, VAR_12);
  if (FUNC_0(VAR_17)) {
   if (FUNC_1(VAR_17) == -VAR_0) {
    VAR_15->spp_flags &= ~VAR_4;
    return VAR_7;
   } else
    return VAR_10;
  }
  if (!VAR_17->params)
   VAR_12->prli_count++;
  VAR_17->params = VAR_18;
  VAR_17->port_name = VAR_12->ids.port_name;
  VAR_17->max_frame = VAR_12->maxframe_size;


 }




fill:
 VAR_18 = FUNC_5(VAR_15->spp_params);
 VAR_18 &= ~VAR_2;
 VAR_15->spp_params = FUNC_4(VAR_18 | VAR_3);
 return VAR_6;

not_target:
 VAR_18 = FUNC_5(VAR_15->spp_params);
 VAR_18 &= ~VAR_3;
 VAR_15->spp_params = FUNC_4(VAR_18);
 return 0;
}
