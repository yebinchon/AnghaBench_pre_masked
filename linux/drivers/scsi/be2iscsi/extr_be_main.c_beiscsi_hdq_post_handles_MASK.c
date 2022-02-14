
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_8__ ;
typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef size_t u8 ;
typedef int u32 ;
typedef size_t u16 ;
struct phys_addr {int lo; int hi; } ;
struct hwi_controller {TYPE_2__* default_pdu_data; TYPE_1__* default_pdu_hdr; } ;
struct TYPE_12__ {int address_hi; int address_lo; } ;
struct TYPE_13__ {TYPE_4__ a32; } ;
struct TYPE_14__ {TYPE_5__ u; } ;
struct hd_async_handle {size_t is_header; size_t index; TYPE_6__ pa; } ;
struct TYPE_16__ {size_t pi; struct phys_addr* ring_base; } ;
struct TYPE_15__ {size_t pi; struct phys_addr* ring_base; } ;
struct hd_async_context {size_t num_entries; TYPE_8__ async_data; TYPE_7__ async_header; TYPE_3__* async_entry; } ;
struct beiscsi_hba {int db_va; struct hwi_controller* phwi_ctrlr; } ;
struct TYPE_11__ {struct hd_async_handle* data; struct hd_async_handle* header; } ;
struct TYPE_10__ {int id; int doorbell_offset; } ;
struct TYPE_9__ {int id; int doorbell_offset; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct hd_async_context* FUNC_0 (struct hwi_controller*,size_t) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,int) ;

__attribute__((used)) static void
FUNC_3(struct beiscsi_hba *VAR_5,
    u8 VAR_6, u8 VAR_7, u16 VAR_8)
{
 struct hd_async_handle *VAR_9;
 struct hd_async_context *VAR_10;
 struct hwi_controller *VAR_11;
 struct phys_addr *VAR_12;
 u32 VAR_13, VAR_14 = 0;
 u32 VAR_15;
 u16 VAR_16, VAR_17;

 VAR_11 = VAR_5->phwi_ctrlr;
 VAR_10 = FUNC_0(VAR_11, VAR_7);
 if (VAR_6) {
  VAR_12 = VAR_10->async_header.ring_base;
  VAR_17 = VAR_10->async_header.pi;
  VAR_13 = VAR_11->default_pdu_hdr[VAR_7].id;
  VAR_15 = VAR_11->default_pdu_hdr[VAR_7].
     doorbell_offset;
 } else {
  VAR_12 = VAR_10->async_data.ring_base;
  VAR_17 = VAR_10->async_data.pi;
  VAR_13 = VAR_11->default_pdu_data[VAR_7].id;
  VAR_15 = VAR_11->default_pdu_data[VAR_7].
     doorbell_offset;
 }

 for (VAR_16 = 0; VAR_16 < VAR_8; VAR_16++) {
  if (VAR_6)
   VAR_9 = VAR_10->async_entry[VAR_17].header;
  else
   VAR_9 = VAR_10->async_entry[VAR_17].data;
  FUNC_1(VAR_9->is_header != VAR_6);
  FUNC_1(VAR_9->index != VAR_17);

  if (VAR_8 == VAR_10->num_entries) {

   VAR_12[VAR_17].hi = VAR_9->pa.u.a32.address_lo;
   VAR_12[VAR_17].lo = VAR_9->pa.u.a32.address_hi;
  }
  if (++VAR_17 == VAR_10->num_entries)
   VAR_17 = 0;
 }

 if (VAR_6)
  VAR_10->async_header.pi = VAR_17;
 else
  VAR_10->async_data.pi = VAR_17;

 VAR_14 |= VAR_13 & VAR_4;
 VAR_14 |= 1 << VAR_3;
 VAR_14 |= 0 << VAR_2;
 VAR_14 |= (VAR_16 & VAR_0) << VAR_1;
 FUNC_2(VAR_14, VAR_5->db_va + VAR_15);
}
