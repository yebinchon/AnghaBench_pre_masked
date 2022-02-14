
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
typedef scalar_t__ u16 ;
struct gfs2_sbd {int dummy; } ;
struct gfs2_meta_header {int mh_type; int mh_magic; } ;
struct buffer_head {scalar_t__ b_data; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct gfs2_sbd*,struct buffer_head*,char*,char const*,char*,unsigned int) ;
 int FUNC_2 (struct gfs2_sbd*,struct buffer_head*,scalar_t__,scalar_t__,char const*,char*,unsigned int) ;
 scalar_t__ FUNC_3 (int) ;

__attribute__((used)) static inline int FUNC_4(struct gfs2_sbd *VAR_1,
     struct buffer_head *VAR_2,
     u16 VAR_3,
     const char *VAR_4,
     char *VAR_5, unsigned int VAR_6)
{
 struct gfs2_meta_header *VAR_7 = (struct gfs2_meta_header *)VAR_2->b_data;
 u32 VAR_8 = FUNC_0(VAR_7->mh_magic);
 u16 VAR_9 = FUNC_0(VAR_7->mh_type);
 if (FUNC_3(VAR_8 != VAR_0))
  return FUNC_1(VAR_1, VAR_2, "magic number", VAR_4,
       VAR_5, VAR_6);
        if (FUNC_3(VAR_9 != VAR_3))
  return FUNC_2(VAR_1, VAR_2, VAR_3, VAR_9, VAR_4,
           VAR_5, VAR_6);
 return 0;
}
