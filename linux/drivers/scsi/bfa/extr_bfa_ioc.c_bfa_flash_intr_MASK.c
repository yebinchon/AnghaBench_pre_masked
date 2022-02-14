
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u32 ;
struct TYPE_3__ {size_t msg_id; } ;
struct bfi_mbmsg_s {TYPE_1__ mh; } ;
struct bfi_flash_write_rsp_s {size_t status; } ;
struct bfi_flash_read_rsp_s {size_t status; size_t length; } ;
struct bfi_flash_query_rsp_s {size_t status; } ;
struct bfi_flash_event_s {size_t status; size_t param; } ;
struct bfi_flash_erase_rsp_s {size_t status; } ;
struct bfa_flash_s {size_t ubuf; size_t status; size_t residue; size_t offset; int ioc; scalar_t__ dbuf_kva; int op_busy; } ;
struct bfa_flash_attr_s {size_t status; size_t npart; TYPE_2__* part; } ;
struct TYPE_4__ {size_t part_type; size_t part_instance; size_t part_off; size_t part_size; size_t part_len; size_t part_status; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;






 int FUNC_0 (int) ;
 void* FUNC_1 (size_t) ;
 int FUNC_2 (struct bfa_flash_s*) ;
 int FUNC_3 (struct bfa_flash_s*) ;
 int FUNC_4 (struct bfa_flash_s*) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (struct bfa_flash_s*,size_t) ;
 int FUNC_7 (size_t,scalar_t__,size_t) ;

__attribute__((used)) static void
FUNC_8(void *VAR_5, struct bfi_mbmsg_s *VAR_6)
{
 struct bfa_flash_s *VAR_7 = VAR_5;
 u32 VAR_8;

 union {
  struct bfi_flash_query_rsp_s *query;
  struct bfi_flash_erase_rsp_s *erase;
  struct bfi_flash_write_rsp_s *write;
  struct bfi_flash_read_rsp_s *read;
  struct bfi_flash_event_s *event;
  struct bfi_mbmsg_s *msg;
 } VAR_9;

 VAR_9.msg = VAR_6;
 FUNC_6(VAR_7, VAR_6->mh.msg_id);

 if (!VAR_7->op_busy && VAR_6->mh.msg_id != 131) {

  FUNC_6(VAR_7, 0x9999);
  return;
 }

 switch (VAR_6->mh.msg_id) {
 case 130:
  VAR_8 = FUNC_1(VAR_9.query->status);
  FUNC_6(VAR_7, VAR_8);
  if (VAR_8 == VAR_4) {
   u32 VAR_10;
   struct bfa_flash_attr_s *VAR_11, *VAR_12;

   VAR_11 = (struct bfa_flash_attr_s *) VAR_7->ubuf;
   VAR_12 = (struct bfa_flash_attr_s *) VAR_7->dbuf_kva;
   VAR_11->status = FUNC_1(VAR_12->status);
   VAR_11->npart = FUNC_1(VAR_12->npart);
   FUNC_6(VAR_7, VAR_11->status);
   FUNC_6(VAR_7, VAR_11->npart);
   for (VAR_10 = 0; VAR_10 < VAR_11->npart; VAR_10++) {
    VAR_11->part[VAR_10].part_type =
     FUNC_1(VAR_12->part[VAR_10].part_type);
    VAR_11->part[VAR_10].part_instance =
     FUNC_1(VAR_12->part[VAR_10].part_instance);
    VAR_11->part[VAR_10].part_off =
     FUNC_1(VAR_12->part[VAR_10].part_off);
    VAR_11->part[VAR_10].part_size =
     FUNC_1(VAR_12->part[VAR_10].part_size);
    VAR_11->part[VAR_10].part_len =
     FUNC_1(VAR_12->part[VAR_10].part_len);
    VAR_11->part[VAR_10].part_status =
     FUNC_1(VAR_12->part[VAR_10].part_status);
   }
  }
  VAR_7->status = VAR_8;
  FUNC_2(VAR_7);
  break;
 case 132:
  VAR_8 = FUNC_1(VAR_9.erase->status);
  FUNC_6(VAR_7, VAR_8);
  VAR_7->status = VAR_8;
  FUNC_2(VAR_7);
  break;
 case 128:
  VAR_8 = FUNC_1(VAR_9.write->status);
  FUNC_6(VAR_7, VAR_8);
  if (VAR_8 != VAR_4 || VAR_7->residue == 0) {
   VAR_7->status = VAR_8;
   FUNC_2(VAR_7);
  } else {
   FUNC_6(VAR_7, VAR_7->offset);
   FUNC_4(VAR_7);
  }
  break;
 case 129:
  VAR_8 = FUNC_1(VAR_9.read->status);
  FUNC_6(VAR_7, VAR_8);
  if (VAR_8 != VAR_4) {
   VAR_7->status = VAR_8;
   FUNC_2(VAR_7);
  } else {
   u32 VAR_13 = FUNC_1(VAR_9.read->length);
   FUNC_6(VAR_7, VAR_7->offset);
   FUNC_6(VAR_7, VAR_13);
   FUNC_7(VAR_7->ubuf + VAR_7->offset,
    VAR_7->dbuf_kva, VAR_13);
   VAR_7->residue -= VAR_13;
   VAR_7->offset += VAR_13;
   if (VAR_7->residue == 0) {
    VAR_7->status = VAR_8;
    FUNC_2(VAR_7);
   } else
    FUNC_3(VAR_7);
  }
  break;
 case 133:
  break;
 case 131:
  VAR_8 = FUNC_1(VAR_9.event->status);
  FUNC_6(VAR_7, VAR_8);
  if (VAR_8 == VAR_2)
   FUNC_5(VAR_7->ioc, VAR_0);
  else if (VAR_8 == VAR_3) {
   u32 VAR_14;
   VAR_14 = FUNC_1(VAR_9.event->param);
   FUNC_6(VAR_7, VAR_14);
   FUNC_5(VAR_7->ioc,
    VAR_1);
  }
  break;

 default:
  FUNC_0(1);
 }
}
