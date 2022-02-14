
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct ubi_vid_io_buf {void* buffer; } ;
struct ubi_vid_hdr {void* hdr_crc; int version; void* magic; } ;
struct ubi_device {int peb_count; int vid_hdr_alsize; int vid_hdr_aloffset; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 void* FUNC_0 (int ) ;
 int FUNC_1 (int ,struct ubi_vid_hdr*,int ) ;
 int FUNC_2 (char*,int) ;
 int FUNC_3 (struct ubi_device*,int) ;
 int FUNC_4 (struct ubi_device*,int,struct ubi_vid_hdr*) ;
 int FUNC_5 (int) ;
 scalar_t__ FUNC_6 (struct ubi_device*,int ) ;
 struct ubi_vid_hdr* FUNC_7 (struct ubi_vid_io_buf*) ;
 int FUNC_8 (struct ubi_device*,void*,int,int ,int ) ;

int FUNC_9(struct ubi_device *VAR_6, int VAR_7,
    struct ubi_vid_io_buf *VAR_8)
{
 struct ubi_vid_hdr *VAR_9 = FUNC_7(VAR_8);
 int VAR_10;
 uint32_t VAR_11;
 void *VAR_12 = VAR_8->buffer;

 FUNC_2("write VID header to PEB %d", VAR_7);
 FUNC_5(VAR_7 >= 0 && VAR_7 < VAR_6->peb_count);

 VAR_10 = FUNC_3(VAR_6, VAR_7);
 if (VAR_10)
  return VAR_10;

 VAR_9->magic = FUNC_0(VAR_4);
 VAR_9->version = VAR_3;
 VAR_11 = FUNC_1(VAR_2, VAR_9, VAR_5);
 VAR_9->hdr_crc = FUNC_0(VAR_11);

 VAR_10 = FUNC_4(VAR_6, VAR_7, VAR_9);
 if (VAR_10)
  return VAR_10;

 if (FUNC_6(VAR_6, VAR_1))
  return -VAR_0;

 VAR_10 = FUNC_8(VAR_6, VAR_12, VAR_7, VAR_6->vid_hdr_aloffset,
      VAR_6->vid_hdr_alsize);
 return VAR_10;
}
