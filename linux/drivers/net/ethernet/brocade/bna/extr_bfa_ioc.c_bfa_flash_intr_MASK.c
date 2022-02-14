
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u32 ;
struct TYPE_3__ {int msg_id; } ;
struct bfi_mbmsg {TYPE_1__ mh; } ;
struct bfi_flash_write_rsp {size_t status; } ;
struct bfi_flash_read_rsp {size_t status; size_t length; } ;
struct bfi_flash_query_rsp {size_t status; } ;
struct bfa_flash_attr {size_t status; size_t npart; TYPE_2__* part; } ;
struct bfa_flash {size_t ubuf; size_t status; size_t residue; size_t offset; scalar_t__ dbuf_kva; int op_busy; } ;
struct TYPE_4__ {size_t part_type; size_t part_instance; size_t part_off; size_t part_size; size_t part_len; size_t part_status; } ;


 size_t VAR_0 ;





 int FUNC_0 (int) ;
 void* FUNC_1 (size_t) ;
 int FUNC_2 (struct bfa_flash*) ;
 int FUNC_3 (struct bfa_flash*) ;
 int FUNC_4 (struct bfa_flash*) ;
 int FUNC_5 (size_t,scalar_t__,size_t) ;

__attribute__((used)) static void
FUNC_6(void *VAR_1, struct bfi_mbmsg *VAR_2)
{
 struct bfa_flash *VAR_3 = VAR_1;
 u32 VAR_4;

 union {
  struct bfi_flash_query_rsp *query;
  struct bfi_flash_write_rsp *write;
  struct bfi_flash_read_rsp *read;
  struct bfi_mbmsg *msg;
 } VAR_5;

 VAR_5.msg = VAR_2;


 if (!VAR_3->op_busy && VAR_2->mh.msg_id != 131)
  return;

 switch (VAR_2->mh.msg_id) {
 case 130:
  VAR_4 = FUNC_1(VAR_5.query->status);
  if (VAR_4 == VAR_0) {
   u32 VAR_6;
   struct bfa_flash_attr *VAR_7, *VAR_8;

   VAR_7 = (struct bfa_flash_attr *) VAR_3->ubuf;
   VAR_8 = (struct bfa_flash_attr *) VAR_3->dbuf_kva;
   VAR_7->status = FUNC_1(VAR_8->status);
   VAR_7->npart = FUNC_1(VAR_8->npart);
   for (VAR_6 = 0; VAR_6 < VAR_7->npart; VAR_6++) {
    VAR_7->part[VAR_6].part_type =
     FUNC_1(VAR_8->part[VAR_6].part_type);
    VAR_7->part[VAR_6].part_instance =
     FUNC_1(VAR_8->part[VAR_6].part_instance);
    VAR_7->part[VAR_6].part_off =
     FUNC_1(VAR_8->part[VAR_6].part_off);
    VAR_7->part[VAR_6].part_size =
     FUNC_1(VAR_8->part[VAR_6].part_size);
    VAR_7->part[VAR_6].part_len =
     FUNC_1(VAR_8->part[VAR_6].part_len);
    VAR_7->part[VAR_6].part_status =
     FUNC_1(VAR_8->part[VAR_6].part_status);
   }
  }
  VAR_3->status = VAR_4;
  FUNC_2(VAR_3);
  break;
 case 128:
  VAR_4 = FUNC_1(VAR_5.write->status);
  if (VAR_4 != VAR_0 || VAR_3->residue == 0) {
   VAR_3->status = VAR_4;
   FUNC_2(VAR_3);
  } else
   FUNC_4(VAR_3);
  break;
 case 129:
  VAR_4 = FUNC_1(VAR_5.read->status);
  if (VAR_4 != VAR_0) {
   VAR_3->status = VAR_4;
   FUNC_2(VAR_3);
  } else {
   u32 VAR_9 = FUNC_1(VAR_5.read->length);
   FUNC_5(VAR_3->ubuf + VAR_3->offset,
          VAR_3->dbuf_kva, VAR_9);
   VAR_3->residue -= VAR_9;
   VAR_3->offset += VAR_9;
   if (VAR_3->residue == 0) {
    VAR_3->status = VAR_4;
    FUNC_2(VAR_3);
   } else
    FUNC_3(VAR_3);
  }
  break;
 case 132:
 case 131:
  break;
 default:
  FUNC_0(1);
 }
}
