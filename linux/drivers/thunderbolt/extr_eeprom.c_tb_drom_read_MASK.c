
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u32 ;
typedef int u16 ;
struct tb_switch {int * drom; int device; int vendor; scalar_t__ uid; TYPE_1__* ports; } ;
struct tb_drom_header {int data_len; scalar_t__ uid_crc8; scalar_t__ data_crc32; int device_rom_revision; int model_id; int vendor_id; scalar_t__ uid; } ;
struct TYPE_2__ {int link_nr; struct TYPE_2__* dual_link_port; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (int,int ) ;
 scalar_t__ FUNC_2 (int *,int) ;
 scalar_t__ FUNC_3 (int *,int) ;
 scalar_t__ FUNC_4 (struct tb_switch*,int*) ;
 scalar_t__ FUNC_5 (struct tb_switch*,int*) ;
 int FUNC_6 (struct tb_switch*) ;
 int FUNC_7 (struct tb_switch*,scalar_t__*) ;
 int FUNC_8 (struct tb_switch*,int*) ;
 int FUNC_9 (struct tb_switch*,int,int *,int) ;
 scalar_t__ FUNC_10 (struct tb_switch*) ;
 int FUNC_11 (struct tb_switch*,char*,int) ;
 int FUNC_12 (struct tb_switch*,char*,...) ;

int FUNC_13(struct tb_switch *VAR_4)
{
 u16 VAR_5;
 u16 VAR_6;
 u32 VAR_7;
 struct tb_drom_header *VAR_8;
 int VAR_9;
 if (VAR_4->drom)
  return 0;

 if (FUNC_10(VAR_4) == 0) {




  if (FUNC_4(VAR_4, &VAR_6) == 0)
   goto parse;


  if (FUNC_5(VAR_4, &VAR_6) == 0)
   goto parse;





  FUNC_7(VAR_4, &VAR_4->uid);

  VAR_4->ports[1].link_nr = 0;
  VAR_4->ports[2].link_nr = 1;
  VAR_4->ports[1].dual_link_port = &VAR_4->ports[2];
  VAR_4->ports[2].dual_link_port = &VAR_4->ports[1];

  VAR_4->ports[3].link_nr = 0;
  VAR_4->ports[4].link_nr = 1;
  VAR_4->ports[3].dual_link_port = &VAR_4->ports[4];
  VAR_4->ports[4].dual_link_port = &VAR_4->ports[3];

  return 0;
 }

 VAR_9 = FUNC_8(VAR_4, &VAR_5);
 if (VAR_9)
  return VAR_9;

 VAR_9 = FUNC_9(VAR_4, VAR_5 + 14, (u8 *) &VAR_6, 2);
 if (VAR_9)
  return VAR_9;
 VAR_6 &= 0x3ff;
 VAR_6 += VAR_3;
 FUNC_11(VAR_4, "reading drom (length: %#x)\n", VAR_6);
 if (VAR_6 < sizeof(*VAR_8)) {
  FUNC_12(VAR_4, "drom too small, aborting\n");
  return -VAR_0;
 }

 VAR_4->drom = FUNC_1(VAR_6, VAR_2);
 if (!VAR_4->drom)
  return -VAR_1;
 VAR_9 = FUNC_9(VAR_4, VAR_5, VAR_4->drom, VAR_6);
 if (VAR_9)
  goto err;

parse:
 VAR_8 = (void *) VAR_4->drom;

 if (VAR_8->data_len + VAR_3 != VAR_6) {
  FUNC_12(VAR_4, "drom size mismatch, aborting\n");
  goto err;
 }

 VAR_7 = FUNC_3((u8 *) &VAR_8->uid, 8);
 if (VAR_7 != VAR_8->uid_crc8) {
  FUNC_12(VAR_4,
   "drom uid crc8 mismatch (expected: %#x, got: %#x), aborting\n",
   VAR_8->uid_crc8, VAR_7);
  goto err;
 }
 if (!VAR_4->uid)
  VAR_4->uid = VAR_8->uid;
 VAR_4->vendor = VAR_8->vendor_id;
 VAR_4->device = VAR_8->model_id;

 VAR_7 = FUNC_2(VAR_4->drom + VAR_3, VAR_8->data_len);
 if (VAR_7 != VAR_8->data_crc32) {
  FUNC_12(VAR_4,
   "drom data crc32 mismatch (expected: %#x, got: %#x), continuing\n",
   VAR_8->data_crc32, VAR_7);
 }

 if (VAR_8->device_rom_revision > 2)
  FUNC_12(VAR_4, "drom device_rom_revision %#x unknown\n",
   VAR_8->device_rom_revision);

 return FUNC_6(VAR_4);
err:
 FUNC_0(VAR_4->drom);
 VAR_4->drom = ((void*)0);
 return -VAR_0;

}
