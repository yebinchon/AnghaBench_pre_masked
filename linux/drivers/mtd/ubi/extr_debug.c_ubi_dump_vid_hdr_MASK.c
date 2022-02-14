
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ubi_vid_hdr {int hdr_crc; int sqnum; int data_pad; int used_ebs; int data_size; int lnum; int vol_id; scalar_t__ compat; scalar_t__ copy_flag; scalar_t__ vol_type; scalar_t__ version; int magic; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (int ,char*,int ,int,int,struct ubi_vid_hdr const*,int ,int) ;

void FUNC_4(const struct ubi_vid_hdr *VAR_3)
{
 FUNC_2("Volume identifier header dump:\n");
 FUNC_2("\tmagic     %08x\n", FUNC_0(VAR_3->magic));
 FUNC_2("\tversion   %d\n", (int)VAR_3->version);
 FUNC_2("\tvol_type  %d\n", (int)VAR_3->vol_type);
 FUNC_2("\tcopy_flag %d\n", (int)VAR_3->copy_flag);
 FUNC_2("\tcompat    %d\n", (int)VAR_3->compat);
 FUNC_2("\tvol_id    %d\n", FUNC_0(VAR_3->vol_id));
 FUNC_2("\tlnum      %d\n", FUNC_0(VAR_3->lnum));
 FUNC_2("\tdata_size %d\n", FUNC_0(VAR_3->data_size));
 FUNC_2("\tused_ebs  %d\n", FUNC_0(VAR_3->used_ebs));
 FUNC_2("\tdata_pad  %d\n", FUNC_0(VAR_3->data_pad));
 FUNC_2("\tsqnum     %llu\n",
  (unsigned long long)FUNC_1(VAR_3->sqnum));
 FUNC_2("\thdr_crc   %08x\n", FUNC_0(VAR_3->hdr_crc));
 FUNC_2("Volume identifier header hexdump:\n");
 FUNC_3(VAR_1, "", VAR_0, 32, 1,
         VAR_3, VAR_2, 1);
}
