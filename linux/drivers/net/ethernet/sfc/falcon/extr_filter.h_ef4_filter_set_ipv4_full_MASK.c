
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ef4_filter_spec {int match_flags; void* rem_port; void** rem_host; void* loc_port; void** loc_host; int ip_proto; int ether_type; } ;
typedef void* __be32 ;
typedef void* __be16 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static inline int
FUNC_1(struct ef4_filter_spec *VAR_7, u8 VAR_8,
    __be32 VAR_9, __be16 VAR_10,
    __be32 VAR_11, __be16 VAR_12)
{
 VAR_7->match_flags |=
  VAR_0 | VAR_1 |
  VAR_2 | VAR_3 |
  VAR_4 | VAR_5;
 VAR_7->ether_type = FUNC_0(VAR_6);
 VAR_7->ip_proto = VAR_8;
 VAR_7->loc_host[0] = VAR_9;
 VAR_7->loc_port = VAR_10;
 VAR_7->rem_host[0] = VAR_11;
 VAR_7->rem_port = VAR_12;
 return 0;
}
