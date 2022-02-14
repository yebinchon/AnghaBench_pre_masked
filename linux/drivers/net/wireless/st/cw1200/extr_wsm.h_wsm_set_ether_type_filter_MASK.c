
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wsm_ether_type_filter_hdr {int num; } ;
struct wsm_ether_type_filter {int dummy; } ;
struct cw1200_common {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct cw1200_common*,int ,struct wsm_ether_type_filter_hdr*,size_t) ;

__attribute__((used)) static inline int FUNC_1(struct cw1200_common *VAR_1,
    struct wsm_ether_type_filter_hdr *VAR_2)
{
 size_t VAR_3 = sizeof(struct wsm_ether_type_filter_hdr) +
  VAR_2->num * sizeof(struct wsm_ether_type_filter);
 return FUNC_0(VAR_1, VAR_0,
  VAR_2, VAR_3);
}
