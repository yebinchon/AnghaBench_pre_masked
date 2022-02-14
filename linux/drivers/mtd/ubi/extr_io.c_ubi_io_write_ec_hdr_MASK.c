
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct ubi_ec_hdr {void* hdr_crc; void* image_seq; void* data_offset; void* vid_hdr_offset; int version; void* magic; } ;
struct ubi_device {int peb_count; int ec_hdr_alsize; int image_seq; int leb_start; int vid_hdr_offset; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 void* FUNC_0 (int ) ;
 int FUNC_1 (int ,struct ubi_ec_hdr*,int ) ;
 int FUNC_2 (char*,int) ;
 int FUNC_3 (struct ubi_device*,int,struct ubi_ec_hdr*) ;
 int FUNC_4 (int) ;
 scalar_t__ FUNC_5 (struct ubi_device*,int ) ;
 int FUNC_6 (struct ubi_device*,struct ubi_ec_hdr*,int,int ,int ) ;

int FUNC_7(struct ubi_device *VAR_6, int VAR_7,
   struct ubi_ec_hdr *VAR_8)
{
 int VAR_9;
 uint32_t VAR_10;

 FUNC_2("write EC header to PEB %d", VAR_7);
 FUNC_4(VAR_7 >= 0 && VAR_7 < VAR_6->peb_count);

 VAR_8->magic = FUNC_0(VAR_3);
 VAR_8->version = VAR_5;
 VAR_8->vid_hdr_offset = FUNC_0(VAR_6->vid_hdr_offset);
 VAR_8->data_offset = FUNC_0(VAR_6->leb_start);
 VAR_8->image_seq = FUNC_0(VAR_6->image_seq);
 VAR_10 = FUNC_1(VAR_2, VAR_8, VAR_4);
 VAR_8->hdr_crc = FUNC_0(VAR_10);

 VAR_9 = FUNC_3(VAR_6, VAR_7, VAR_8);
 if (VAR_9)
  return VAR_9;

 if (FUNC_5(VAR_6, VAR_1))
  return -VAR_0;

 VAR_9 = FUNC_6(VAR_6, VAR_8, VAR_7, 0, VAR_6->ec_hdr_alsize);
 return VAR_9;
}
