
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_2__ {int * data; int boot_size; int init_data_size; int init_size; int data_size; int inst_size; } ;
struct il_ucode_header {TYPE_1__ v1; int ver; } ;
struct il_priv {void* ucode_ver; } ;
struct il4965_firmware_pieces {int inst_size; int data_size; int init_size; int init_data_size; int boot_size; int const* boot; int const* init_data; int const* init; int const* data; int const* inst; } ;
struct firmware {int size; scalar_t__ data; } ;


 int VAR_0 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (void*) ;
 void* FUNC_2 (int ) ;

__attribute__((used)) static int
FUNC_3(struct il_priv *VAR_1, const struct firmware *VAR_2,
       struct il4965_firmware_pieces *VAR_3)
{
 struct il_ucode_header *VAR_4 = (void *)VAR_2->data;
 u32 VAR_5, VAR_6;
 const u8 *VAR_7;

 VAR_1->ucode_ver = FUNC_2(VAR_4->ver);
 VAR_5 = FUNC_1(VAR_1->ucode_ver);

 switch (VAR_5) {
 default:
 case 0:
 case 1:
 case 2:
  VAR_6 = 24;
  if (VAR_2->size < VAR_6) {
   FUNC_0("File size too small!\n");
   return -VAR_0;
  }
  VAR_3->inst_size = FUNC_2(VAR_4->v1.inst_size);
  VAR_3->data_size = FUNC_2(VAR_4->v1.data_size);
  VAR_3->init_size = FUNC_2(VAR_4->v1.init_size);
  VAR_3->init_data_size = FUNC_2(VAR_4->v1.init_data_size);
  VAR_3->boot_size = FUNC_2(VAR_4->v1.boot_size);
  VAR_7 = VAR_4->v1.data;
  break;
 }


 if (VAR_2->size !=
     VAR_6 + VAR_3->inst_size + VAR_3->data_size +
     VAR_3->init_size + VAR_3->init_data_size + VAR_3->boot_size) {

  FUNC_0("uCode file size %d does not match expected size\n",
         (int)VAR_2->size);
  return -VAR_0;
 }

 VAR_3->inst = VAR_7;
 VAR_7 += VAR_3->inst_size;
 VAR_3->data = VAR_7;
 VAR_7 += VAR_3->data_size;
 VAR_3->init = VAR_7;
 VAR_7 += VAR_3->init_size;
 VAR_3->init_data = VAR_7;
 VAR_7 += VAR_3->init_data_size;
 VAR_3->boot = VAR_7;
 VAR_7 += VAR_3->boot_size;

 return 0;
}
