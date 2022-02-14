
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct efx_filter_spec {int match_flags; int loc_port; int * loc_host; int ip_proto; int ether_type; } ;
typedef int __be32 ;
typedef int __be16 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static inline int
FUNC_1(struct efx_filter_spec *VAR_5, u8 VAR_6,
     __be32 VAR_7, __be16 VAR_8)
{
 VAR_5->match_flags |=
  VAR_0 | VAR_1 |
  VAR_2 | VAR_3;
 VAR_5->ether_type = FUNC_0(VAR_4);
 VAR_5->ip_proto = VAR_6;
 VAR_5->loc_host[0] = VAR_7;
 VAR_5->loc_port = VAR_8;
 return 0;
}
