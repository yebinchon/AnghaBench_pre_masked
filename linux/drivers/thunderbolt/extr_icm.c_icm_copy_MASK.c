
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tb_cfg_request {size_t npackets; size_t response_size; scalar_t__ response; } ;
struct icm_pkg_header {size_t packet_id; int total_packets; } ;
struct ctl_pkg {struct icm_pkg_header* buffer; } ;


 int FUNC_0 (scalar_t__,struct icm_pkg_header*,size_t) ;

__attribute__((used)) static bool FUNC_1(struct tb_cfg_request *VAR_0, const struct ctl_pkg *VAR_1)
{
 const struct icm_pkg_header *VAR_2 = VAR_1->buffer;

 if (VAR_2->packet_id < VAR_0->npackets) {
  size_t VAR_3 = VAR_2->packet_id * VAR_0->response_size;

  FUNC_0(VAR_0->response + VAR_3, VAR_1->buffer, VAR_0->response_size);
 }

 return VAR_2->packet_id == VAR_2->total_packets - 1;
}
