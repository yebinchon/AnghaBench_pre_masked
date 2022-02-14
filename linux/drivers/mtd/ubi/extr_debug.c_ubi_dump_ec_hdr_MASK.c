
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ubi_ec_hdr {int hdr_crc; int image_seq; int data_offset; int vid_hdr_offset; int ec; scalar_t__ version; int magic; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (int ,char*,int ,int,int,struct ubi_ec_hdr const*,int ,int) ;

void FUNC_4(const struct ubi_ec_hdr *VAR_3)
{
 FUNC_2("Erase counter header dump:\n");
 FUNC_2("\tmagic          %#08x\n", FUNC_0(VAR_3->magic));
 FUNC_2("\tversion        %d\n", (int)VAR_3->version);
 FUNC_2("\tec             %llu\n", (long long)FUNC_1(VAR_3->ec));
 FUNC_2("\tvid_hdr_offset %d\n", FUNC_0(VAR_3->vid_hdr_offset));
 FUNC_2("\tdata_offset    %d\n", FUNC_0(VAR_3->data_offset));
 FUNC_2("\timage_seq      %d\n", FUNC_0(VAR_3->image_seq));
 FUNC_2("\thdr_crc        %#08x\n", FUNC_0(VAR_3->hdr_crc));
 FUNC_2("erase counter header hexdump:\n");
 FUNC_3(VAR_1, "", VAR_0, 32, 1,
         VAR_3, VAR_2, 1);
}
