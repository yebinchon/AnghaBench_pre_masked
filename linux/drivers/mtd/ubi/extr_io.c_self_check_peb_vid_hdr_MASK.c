
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct ubi_vid_io_buf {void* buffer; } ;
struct ubi_vid_hdr {int hdr_crc; } ;
struct ubi_device {int vid_hdr_alsize; int vid_hdr_aloffset; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ,struct ubi_vid_hdr*,int ) ;
 int FUNC_2 () ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct ubi_device const*,int,struct ubi_vid_hdr*) ;
 struct ubi_vid_io_buf* FUNC_5 (struct ubi_device const*,int ) ;
 int FUNC_6 (struct ubi_device const*) ;
 int FUNC_7 (struct ubi_vid_hdr*) ;
 int FUNC_8 (struct ubi_device const*,char*,int,...) ;
 int FUNC_9 (struct ubi_vid_io_buf*) ;
 struct ubi_vid_hdr* FUNC_10 (struct ubi_vid_io_buf*) ;
 int FUNC_11 (struct ubi_device const*,void*,int,int ,int ) ;

__attribute__((used)) static int FUNC_12(const struct ubi_device *VAR_6, int VAR_7)
{
 int VAR_8;
 uint32_t VAR_9, VAR_10;
 struct ubi_vid_io_buf *VAR_11;
 struct ubi_vid_hdr *VAR_12;
 void *VAR_13;

 if (!FUNC_6(VAR_6))
  return 0;

 VAR_11 = FUNC_5(VAR_6, VAR_2);
 if (!VAR_11)
  return -VAR_1;

 VAR_12 = FUNC_10(VAR_11);
 VAR_13 = VAR_11->buffer;
 VAR_8 = FUNC_11(VAR_6, VAR_13, VAR_7, VAR_6->vid_hdr_aloffset,
     VAR_6->vid_hdr_alsize);
 if (VAR_8 && VAR_8 != VAR_4 && !FUNC_3(VAR_8))
  goto exit;

 VAR_9 = FUNC_1(VAR_3, VAR_12, VAR_5);
 VAR_10 = FUNC_0(VAR_12->hdr_crc);
 if (VAR_10 != VAR_9) {
  FUNC_8(VAR_6, "bad VID header CRC at PEB %d, calculated %#08x, read %#08x",
   VAR_7, VAR_9, VAR_10);
  FUNC_8(VAR_6, "self-check failed for PEB %d", VAR_7);
  FUNC_7(VAR_12);
  FUNC_2();
  VAR_8 = -VAR_0;
  goto exit;
 }

 VAR_8 = FUNC_4(VAR_6, VAR_7, VAR_12);

exit:
 FUNC_9(VAR_11);
 return VAR_8;
}
