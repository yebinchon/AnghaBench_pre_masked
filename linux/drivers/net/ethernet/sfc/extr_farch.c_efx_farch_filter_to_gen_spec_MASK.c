
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct efx_filter_spec {int flags; int match_flags; int* loc_mac; void* outer_vid; void* rem_port; void* loc_port; int ip_proto; void** rem_host; void** loc_host; void* ether_type; int dmaq_id; int priority; } ;
struct efx_farch_filter_spec {int flags; int type; int* data; int dmaq_id; int priority; } ;
typedef void* __be32 ;
typedef void* __be16 ;
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
 int VAR_12 ;
 int FUNC_0 (int) ;
 void* FUNC_1 (int) ;
 void* FUNC_2 (int) ;
 int FUNC_3 (struct efx_filter_spec*,int ,int) ;

__attribute__((used)) static void
FUNC_4(struct efx_filter_spec *VAR_13,
        const struct efx_farch_filter_spec *VAR_14)
{
 bool VAR_15 = 0;





 FUNC_3(VAR_13, 0, sizeof(*VAR_13));

 VAR_13->priority = VAR_14->priority;
 VAR_13->flags = VAR_14->flags;
 VAR_13->dmaq_id = VAR_14->dmaq_id;

 switch (VAR_14->type) {
 case 132:
 case 129:
  VAR_15 = 1;

 case 131:
 case 128: {
  __be32 VAR_16, VAR_17;
  __be16 VAR_18, VAR_19;

  VAR_13->match_flags =
   VAR_1 |
   VAR_2 |
   VAR_3 | VAR_6;
  if (VAR_15)
   VAR_13->match_flags |= (VAR_8 |
        VAR_9);
  VAR_13->ether_type = FUNC_2(VAR_10);
  VAR_13->ip_proto =
   (VAR_14->type == 132 ||
    VAR_14->type == 131) ?
   VAR_11 : VAR_12;

  VAR_16 = FUNC_1(VAR_14->data[0] >> 16 | VAR_14->data[1] << 16);
  VAR_18 = FUNC_2(VAR_14->data[0]);
  VAR_17 = FUNC_1(VAR_14->data[2]);
  VAR_19 = FUNC_2(VAR_14->data[1] >> 16);
  if (VAR_14->flags & VAR_0) {
   VAR_13->loc_host[0] = VAR_16;
   VAR_13->rem_host[0] = VAR_17;
  } else {
   VAR_13->loc_host[0] = VAR_17;
   VAR_13->rem_host[0] = VAR_16;
  }
  if (!!(VAR_13->flags & VAR_0) ^
      (!VAR_15 && VAR_13->ip_proto == VAR_12)) {
   VAR_13->loc_port = VAR_18;
   VAR_13->rem_port = VAR_19;
  } else {
   VAR_13->loc_port = VAR_19;
   VAR_13->rem_port = VAR_18;
  }

  break;
 }

 case 135:
  VAR_15 = 1;

 case 134:
  VAR_13->match_flags = VAR_4;
  if (VAR_15)
   VAR_13->match_flags |= VAR_7;
  VAR_13->loc_mac[0] = VAR_14->data[2] >> 8;
  VAR_13->loc_mac[1] = VAR_14->data[2];
  VAR_13->loc_mac[2] = VAR_14->data[1] >> 24;
  VAR_13->loc_mac[3] = VAR_14->data[1] >> 16;
  VAR_13->loc_mac[4] = VAR_14->data[1] >> 8;
  VAR_13->loc_mac[5] = VAR_14->data[1];
  VAR_13->outer_vid = FUNC_2(VAR_14->data[0]);
  break;

 case 130:
 case 133:
  VAR_13->match_flags = VAR_5;
  VAR_13->loc_mac[0] = VAR_14->type == 133;
  break;

 default:
  FUNC_0(1);
  break;
 }
}
