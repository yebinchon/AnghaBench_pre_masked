
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct f2fs_sb_info {int dummy; } ;
struct discard_policy {int type; int sync; int ordered; unsigned int granularity; int io_aware; int max_requests; void* max_interval; void* mid_interval; void* min_interval; scalar_t__ timeout; int io_aware_gran; } ;


 scalar_t__ VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_0 (struct f2fs_sb_info*) ;

__attribute__((used)) static void FUNC_1(struct f2fs_sb_info *VAR_11,
    struct discard_policy *VAR_12,
    int VAR_13, unsigned int VAR_14)
{

 VAR_12->type = VAR_13;
 VAR_12->sync = 1;
 VAR_12->ordered = 0;
 VAR_12->granularity = VAR_14;

 VAR_12->max_requests = VAR_2;
 VAR_12->io_aware_gran = VAR_9;
 VAR_12->timeout = 0;

 if (VAR_13 == VAR_5) {
  VAR_12->min_interval = VAR_4;
  VAR_12->mid_interval = VAR_3;
  VAR_12->max_interval = VAR_1;
  VAR_12->io_aware = 1;
  VAR_12->sync = 0;
  VAR_12->ordered = 1;
  if (FUNC_0(VAR_11) > VAR_0) {
   VAR_12->granularity = 1;
   VAR_12->max_interval = VAR_4;
  }
 } else if (VAR_13 == VAR_6) {
  VAR_12->min_interval = VAR_4;
  VAR_12->mid_interval = VAR_3;
  VAR_12->max_interval = VAR_1;
  VAR_12->io_aware = 0;
 } else if (VAR_13 == VAR_7) {
  VAR_12->io_aware = 0;
 } else if (VAR_13 == VAR_8) {
  VAR_12->max_requests = VAR_10;
  VAR_12->io_aware = 0;

  VAR_12->granularity = 1;
 }
}
