
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ ulong ;
typedef scalar_t__ u8 ;
typedef scalar_t__ u32 ;
struct rndis_per_packet_info {scalar_t__ type; scalar_t__ internal; scalar_t__ ppi_offset; scalar_t__ size; } ;
struct rndis_packet {scalar_t__ per_pkt_info_offset; int per_pkt_info_len; } ;



__attribute__((used)) static inline void *FUNC_0(struct rndis_packet *VAR_0,
      u32 VAR_1, u8 VAR_2)
{
 struct rndis_per_packet_info *VAR_3;
 int VAR_4;

 if (VAR_0->per_pkt_info_offset == 0)
  return ((void*)0);

 VAR_3 = (struct rndis_per_packet_info *)((ulong)VAR_0 +
  VAR_0->per_pkt_info_offset);
 VAR_4 = VAR_0->per_pkt_info_len;

 while (VAR_4 > 0) {
  if (VAR_3->type == VAR_1 && VAR_3->internal == VAR_2)
   return (void *)((ulong)VAR_3 + VAR_3->ppi_offset);
  VAR_4 -= VAR_3->size;
  VAR_3 = (struct rndis_per_packet_info *)((ulong)VAR_3 + VAR_3->size);
 }

 return ((void*)0);
}
