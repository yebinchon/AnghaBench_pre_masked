
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ubifs_sb_node {scalar_t__ key_fmt; int time_gran; int leb_size; int min_io_size; } ;
struct TYPE_2__ {int size; } ;
struct ubifs_info {int min_io_size; int leb_size; scalar_t__ log_lebs; scalar_t__ lpt_lebs; scalar_t__ orph_lebs; long long main_lebs; scalar_t__ jhead_cnt; int leb_cnt; int max_leb_cnt; long long max_bud_bytes; scalar_t__ fanout; scalar_t__ lsave_cnt; scalar_t__ default_compr; long long rp_size; int fmt_version; scalar_t__ encrypted; int double_hash; TYPE_1__ vi; int key_hash; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 long long VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 long long VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct ubifs_info*,struct ubifs_sb_node*) ;
 int FUNC_2 (struct ubifs_info*,char*,int,...) ;
 scalar_t__ FUNC_3 (struct ubifs_info*,scalar_t__) ;

__attribute__((used)) static int FUNC_4(struct ubifs_info *VAR_14, struct ubifs_sb_node *VAR_15)
{
 long long VAR_16;
 int VAR_17 = 1, VAR_18;

 if (!VAR_14->key_hash) {
  VAR_17 = 2;
  goto failed;
 }

 if (VAR_15->key_fmt != VAR_13) {
  VAR_17 = 3;
  goto failed;
 }

 if (FUNC_0(VAR_15->min_io_size) != VAR_14->min_io_size) {
  FUNC_2(VAR_14, "min. I/O unit mismatch: %d in superblock, %d real",
     FUNC_0(VAR_15->min_io_size), VAR_14->min_io_size);
  goto failed;
 }

 if (FUNC_0(VAR_15->leb_size) != VAR_14->leb_size) {
  FUNC_2(VAR_14, "LEB size mismatch: %d in superblock, %d real",
     FUNC_0(VAR_15->leb_size), VAR_14->leb_size);
  goto failed;
 }

 if (VAR_14->log_lebs < VAR_7 ||
     VAR_14->lpt_lebs < VAR_8 ||
     VAR_14->orph_lebs < VAR_10 ||
     VAR_14->main_lebs < VAR_9) {
  VAR_17 = 4;
  goto failed;
 }






 VAR_18 = VAR_12 + VAR_11 + VAR_14->log_lebs;
 VAR_18 += VAR_14->lpt_lebs + VAR_14->orph_lebs + VAR_14->jhead_cnt + 6;

 if (VAR_14->leb_cnt < VAR_18 || VAR_14->leb_cnt > VAR_14->vi.size) {
  FUNC_2(VAR_14, "bad LEB count: %d in superblock, %d on UBI volume, %d minimum required",
     VAR_14->leb_cnt, VAR_14->vi.size, VAR_18);
  goto failed;
 }

 if (VAR_14->max_leb_cnt < VAR_14->leb_cnt) {
  FUNC_2(VAR_14, "max. LEB count %d less than LEB count %d",
     VAR_14->max_leb_cnt, VAR_14->leb_cnt);
  goto failed;
 }

 if (VAR_14->main_lebs < VAR_9) {
  FUNC_2(VAR_14, "too few main LEBs count %d, must be at least %d",
     VAR_14->main_lebs, VAR_9);
  goto failed;
 }

 VAR_16 = (long long)VAR_14->leb_size * VAR_5;
 if (VAR_14->max_bud_bytes < VAR_16) {
  FUNC_2(VAR_14, "too small journal (%lld bytes), must be at least %lld bytes",
     VAR_14->max_bud_bytes, VAR_16);
  goto failed;
 }

 VAR_16 = (long long)VAR_14->leb_size * VAR_14->main_lebs;
 if (VAR_14->max_bud_bytes > VAR_16) {
  FUNC_2(VAR_14, "too large journal size (%lld bytes), only %lld bytes available in the main area",
     VAR_14->max_bud_bytes, VAR_16);
  goto failed;
 }

 if (VAR_14->jhead_cnt < VAR_2 + 1 ||
     VAR_14->jhead_cnt > VAR_2 + VAR_4) {
  VAR_17 = 9;
  goto failed;
 }

 if (VAR_14->fanout < VAR_6 ||
     FUNC_3(VAR_14, VAR_14->fanout) > VAR_14->leb_size) {
  VAR_17 = 10;
  goto failed;
 }

 if (VAR_14->lsave_cnt < 0 || (VAR_14->lsave_cnt > VAR_0 &&
     VAR_14->lsave_cnt > VAR_14->max_leb_cnt - VAR_12 - VAR_11 -
     VAR_14->log_lebs - VAR_14->lpt_lebs - VAR_14->orph_lebs)) {
  VAR_17 = 11;
  goto failed;
 }

 if (VAR_12 + VAR_11 + VAR_14->log_lebs + VAR_14->lpt_lebs +
     VAR_14->orph_lebs + VAR_14->main_lebs != VAR_14->leb_cnt) {
  VAR_17 = 12;
  goto failed;
 }

 if (VAR_14->default_compr >= VAR_3) {
  VAR_17 = 13;
  goto failed;
 }

 if (VAR_14->rp_size < 0 || VAR_16 < VAR_14->rp_size) {
  VAR_17 = 14;
  goto failed;
 }

 if (FUNC_0(VAR_15->time_gran) > 1000000000 ||
     FUNC_0(VAR_15->time_gran) < 1) {
  VAR_17 = 15;
  goto failed;
 }

 if (!VAR_14->double_hash && VAR_14->fmt_version >= 5) {
  VAR_17 = 16;
  goto failed;
 }

 if (VAR_14->encrypted && VAR_14->fmt_version < 5) {
  VAR_17 = 17;
  goto failed;
 }

 return 0;

failed:
 FUNC_2(VAR_14, "bad superblock, error %d", VAR_17);
 FUNC_1(VAR_14, VAR_15);
 return -VAR_1;
}
