
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct ubi_wl_entry {int dummy; } ;
struct ubi_device {int vid_hdr_offset; int peb_size; int peb_count; int bad_allowed; int nor_flash; int min_io_size; int hdrs_min_io_size; int max_write_size; int ec_hdr_alsize; int vid_hdr_alsize; int vid_hdr_aloffset; int vid_hdr_shift; int leb_start; int max_erroneous; int ro_mode; int leb_size; TYPE_1__* mtd; int bad_peb_limit; int flash_size; } ;
struct ubi_ainf_peb {int dummy; } ;
struct TYPE_3__ {scalar_t__ numeraseregions; int erasesize; scalar_t__ type; int writesize; int subpage_sft; int writebufsize; int flags; int index; int size; } ;


 void* FUNC_0 (int,int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (struct ubi_device*,int) ;
 int FUNC_3 (int) ;
 scalar_t__ FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (int ,TYPE_1__*) ;
 int FUNC_6 (int) ;
 int FUNC_7 (struct ubi_device*,char*,...) ;
 int FUNC_8 (struct ubi_device*,char*,int ) ;
 int FUNC_9 (struct ubi_device*,char*) ;

__attribute__((used)) static int FUNC_10(struct ubi_device *VAR_5, int VAR_6)
{
 FUNC_1("sizeof(struct ubi_ainf_peb) %zu", sizeof(struct ubi_ainf_peb));
 FUNC_1("sizeof(struct ubi_wl_entry) %zu", sizeof(struct ubi_wl_entry));

 if (VAR_5->mtd->numeraseregions != 0) {
  FUNC_7(VAR_5, "multiple regions, not implemented");
  return -VAR_0;
 }

 if (VAR_5->vid_hdr_offset < 0)
  return -VAR_0;






 VAR_5->peb_size = VAR_5->mtd->erasesize;
 VAR_5->peb_count = FUNC_5(VAR_5->mtd->size, VAR_5->mtd);
 VAR_5->flash_size = VAR_5->mtd->size;

 if (FUNC_4(VAR_5->mtd)) {
  VAR_5->bad_allowed = 1;
  VAR_5->bad_peb_limit = FUNC_2(VAR_5, VAR_6);
 }

 if (VAR_5->mtd->type == VAR_1) {
  FUNC_6(VAR_5->mtd->writesize == 1);
  VAR_5->nor_flash = 1;
 }

 VAR_5->min_io_size = VAR_5->mtd->writesize;
 VAR_5->hdrs_min_io_size = VAR_5->mtd->writesize >> VAR_5->mtd->subpage_sft;






 if (!FUNC_3(VAR_5->min_io_size)) {
  FUNC_7(VAR_5, "min. I/O unit (%d) is not power of 2",
   VAR_5->min_io_size);
  return -VAR_0;
 }

 FUNC_6(VAR_5->hdrs_min_io_size > 0);
 FUNC_6(VAR_5->hdrs_min_io_size <= VAR_5->min_io_size);
 FUNC_6(VAR_5->min_io_size % VAR_5->hdrs_min_io_size == 0);

 VAR_5->max_write_size = VAR_5->mtd->writebufsize;




 if (VAR_5->max_write_size < VAR_5->min_io_size ||
     VAR_5->max_write_size % VAR_5->min_io_size ||
     !FUNC_3(VAR_5->max_write_size)) {
  FUNC_7(VAR_5, "bad write buffer size %d for %d min. I/O unit",
   VAR_5->max_write_size, VAR_5->min_io_size);
  return -VAR_0;
 }


 VAR_5->ec_hdr_alsize = FUNC_0(VAR_3, VAR_5->hdrs_min_io_size);
 VAR_5->vid_hdr_alsize = FUNC_0(VAR_4, VAR_5->hdrs_min_io_size);

 FUNC_1("min_io_size      %d", VAR_5->min_io_size);
 FUNC_1("max_write_size   %d", VAR_5->max_write_size);
 FUNC_1("hdrs_min_io_size %d", VAR_5->hdrs_min_io_size);
 FUNC_1("ec_hdr_alsize    %d", VAR_5->ec_hdr_alsize);
 FUNC_1("vid_hdr_alsize   %d", VAR_5->vid_hdr_alsize);

 if (VAR_5->vid_hdr_offset == 0)

  VAR_5->vid_hdr_offset = VAR_5->vid_hdr_aloffset =
          VAR_5->ec_hdr_alsize;
 else {
  VAR_5->vid_hdr_aloffset = VAR_5->vid_hdr_offset &
      ~(VAR_5->hdrs_min_io_size - 1);
  VAR_5->vid_hdr_shift = VAR_5->vid_hdr_offset -
      VAR_5->vid_hdr_aloffset;
 }


 VAR_5->leb_start = VAR_5->vid_hdr_offset + VAR_4;
 VAR_5->leb_start = FUNC_0(VAR_5->leb_start, VAR_5->min_io_size);

 FUNC_1("vid_hdr_offset   %d", VAR_5->vid_hdr_offset);
 FUNC_1("vid_hdr_aloffset %d", VAR_5->vid_hdr_aloffset);
 FUNC_1("vid_hdr_shift    %d", VAR_5->vid_hdr_shift);
 FUNC_1("leb_start        %d", VAR_5->leb_start);


 if (VAR_5->vid_hdr_shift % 4) {
  FUNC_7(VAR_5, "unaligned VID header shift %d",
   VAR_5->vid_hdr_shift);
  return -VAR_0;
 }


 if (VAR_5->vid_hdr_offset < VAR_3 ||
     VAR_5->leb_start < VAR_5->vid_hdr_offset + VAR_4 ||
     VAR_5->leb_start > VAR_5->peb_size - VAR_4 ||
     VAR_5->leb_start & (VAR_5->min_io_size - 1)) {
  FUNC_7(VAR_5, "bad VID header (%d) or data offsets (%d)",
   VAR_5->vid_hdr_offset, VAR_5->leb_start);
  return -VAR_0;
 }





 VAR_5->max_erroneous = VAR_5->peb_count / 10;
 if (VAR_5->max_erroneous < 16)
  VAR_5->max_erroneous = 16;
 FUNC_1("max_erroneous    %d", VAR_5->max_erroneous);






 if (VAR_5->vid_hdr_offset + VAR_4 <= VAR_5->hdrs_min_io_size) {
  FUNC_9(VAR_5, "EC and VID headers are in the same minimal I/O unit, switch to read-only mode");
  VAR_5->ro_mode = 1;
 }

 VAR_5->leb_size = VAR_5->peb_size - VAR_5->leb_start;

 if (!(VAR_5->mtd->flags & VAR_2)) {
  FUNC_8(VAR_5, "MTD device %d is write-protected, attach in read-only mode",
   VAR_5->mtd->index);
  VAR_5->ro_mode = 1;
 }
 return 0;
}
