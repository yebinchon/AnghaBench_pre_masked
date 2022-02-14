
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct atl1c_tpd_ring {scalar_t__ desc; struct atl1c_buffer* buffer_info; } ;
struct atl1c_tpd_desc {int dummy; } ;
struct atl1c_buffer {int dummy; } ;
struct atl1c_adapter {struct atl1c_tpd_ring* tpd_ring; } ;



__attribute__((used)) static struct atl1c_buffer *
FUNC_0(struct atl1c_adapter *VAR_0, struct atl1c_tpd_desc *VAR_1)
{
 struct atl1c_tpd_ring *VAR_2 = VAR_0->tpd_ring;

 return &VAR_2->buffer_info[VAR_1 -
   (struct atl1c_tpd_desc *)VAR_2->desc];
}
