
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct ubi_vid_io_buf {void* buffer; } ;
struct ubi_vid_hdr {int hdr_crc; int magic; } ;
struct ubi_device {int peb_count; scalar_t__ vid_hdr_shift; int vid_hdr_aloffset; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ,struct ubi_vid_hdr*,int ) ;
 int FUNC_2 (char*,int,...) ;
 int FUNC_3 (char*,int) ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (int) ;
 scalar_t__ FUNC_6 (struct ubi_vid_hdr*,int,scalar_t__) ;
 int FUNC_7 (struct ubi_vid_hdr*) ;
 int FUNC_8 (struct ubi_device*,char*,int) ;
 struct ubi_vid_hdr* FUNC_9 (struct ubi_vid_io_buf*) ;
 int FUNC_10 (struct ubi_device*,void*,int,int ,scalar_t__) ;
 int FUNC_11 (struct ubi_device*,char*,int,...) ;
 int FUNC_12 (struct ubi_device*,struct ubi_vid_hdr*) ;

int FUNC_13(struct ubi_device *VAR_10, int VAR_11,
   struct ubi_vid_io_buf *VAR_12, int VAR_13)
{
 int VAR_14, VAR_15;
 uint32_t VAR_16, VAR_17, VAR_18;
 struct ubi_vid_hdr *VAR_19 = FUNC_9(VAR_12);
 void *VAR_20 = VAR_12->buffer;

 FUNC_3("read VID header from PEB %d", VAR_11);
 FUNC_5(VAR_11 >= 0 && VAR_11 < VAR_10->peb_count);

 VAR_15 = FUNC_10(VAR_10, VAR_20, VAR_11, VAR_10->vid_hdr_aloffset,
     VAR_10->vid_hdr_shift + VAR_8);
 if (VAR_15 && VAR_15 != VAR_4 && !FUNC_4(VAR_15))
  return VAR_15;

 VAR_17 = FUNC_0(VAR_19->magic);
 if (VAR_17 != VAR_7) {
  if (FUNC_4(VAR_15))
   return VAR_3;

  if (FUNC_6(VAR_19, 0xFF, VAR_8)) {
   if (VAR_13)
    FUNC_11(VAR_10, "no VID header found at PEB %d, only 0xFF bytes",
      VAR_11);
   FUNC_2("no VID header found at PEB %d, only 0xFF bytes",
    VAR_11);
   if (!VAR_15)
    return VAR_5;
   else
    return VAR_6;
  }

  if (VAR_13) {
   FUNC_11(VAR_10, "bad magic number at PEB %d: %08x instead of %08x",
     VAR_11, VAR_17, VAR_7);
   FUNC_7(VAR_19);
  }
  FUNC_2("bad magic number at PEB %d: %08x instead of %08x",
   VAR_11, VAR_17, VAR_7);
  return VAR_2;
 }

 VAR_16 = FUNC_1(VAR_1, VAR_19, VAR_9);
 VAR_18 = FUNC_0(VAR_19->hdr_crc);

 if (VAR_18 != VAR_16) {
  if (VAR_13) {
   FUNC_11(VAR_10, "bad CRC at PEB %d, calculated %#08x, read %#08x",
     VAR_11, VAR_16, VAR_18);
   FUNC_7(VAR_19);
  }
  FUNC_2("bad CRC at PEB %d, calculated %#08x, read %#08x",
   VAR_11, VAR_16, VAR_18);
  if (!VAR_15)
   return VAR_2;
  else
   return VAR_3;
 }

 VAR_14 = FUNC_12(VAR_10, VAR_19);
 if (VAR_14) {
  FUNC_8(VAR_10, "validation failed for PEB %d", VAR_11);
  return -VAR_0;
 }

 return VAR_15 ? VAR_4 : 0;
}
