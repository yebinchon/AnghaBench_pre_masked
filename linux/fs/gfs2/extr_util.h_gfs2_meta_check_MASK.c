
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct gfs2_sbd {int dummy; } ;
struct gfs2_meta_header {int mh_magic; } ;
struct buffer_head {scalar_t__ b_blocknr; scalar_t__ b_data; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct gfs2_sbd*,char*,unsigned long long) ;
 scalar_t__ FUNC_2 (int) ;

__attribute__((used)) static inline int FUNC_3(struct gfs2_sbd *VAR_2,
        struct buffer_head *VAR_3)
{
 struct gfs2_meta_header *VAR_4 = (struct gfs2_meta_header *)VAR_3->b_data;
 u32 VAR_5 = FUNC_0(VAR_4->mh_magic);
 if (FUNC_2(VAR_5 != VAR_1)) {
  FUNC_1(VAR_2, "Magic number missing at %llu\n",
         (unsigned long long)VAR_3->b_blocknr);
  return -VAR_0;
 }
 return 0;
}
