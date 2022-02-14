
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v9fs_session_info {int flags; scalar_t__ cache; scalar_t__ maxdata; } ;
struct super_block {int s_blocksize_bits; int s_blocksize; int s_flags; TYPE_1__* s_bdi; scalar_t__ s_time_min; int s_time_max; int * s_op; int s_xattr; int s_magic; int s_maxbytes; } ;
struct TYPE_2__ {int ra_pages; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct super_block*) ;
 scalar_t__ FUNC_2 (struct v9fs_session_info*) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;

__attribute__((used)) static int
FUNC_3(struct super_block *VAR_13, struct v9fs_session_info *VAR_14,
  int VAR_15)
{
 int VAR_16;

 VAR_13->s_maxbytes = VAR_0;
 VAR_13->s_blocksize_bits = FUNC_0(VAR_14->maxdata - 1);
 VAR_13->s_blocksize = 1 << VAR_13->s_blocksize_bits;
 VAR_13->s_magic = VAR_7;
 if (FUNC_2(VAR_14)) {
  VAR_13->s_op = &VAR_11;
  VAR_13->s_xattr = VAR_12;
 } else {
  VAR_13->s_op = &VAR_10;
  VAR_13->s_time_max = VAR_5;
 }

 VAR_13->s_time_min = 0;

 VAR_16 = FUNC_1(VAR_13);
 if (VAR_16)
  return VAR_16;

 if (VAR_14->cache)
  VAR_13->s_bdi->ra_pages = VAR_9;

 VAR_13->s_flags |= VAR_1 | VAR_2;
 if (!VAR_14->cache)
  VAR_13->s_flags |= VAR_4;






 return 0;
}
