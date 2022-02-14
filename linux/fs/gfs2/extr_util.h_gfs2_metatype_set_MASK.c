
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct gfs2_meta_header {void* mh_format; void* mh_type; } ;
struct buffer_head {scalar_t__ b_data; } ;


 void* FUNC_0 (int ) ;

__attribute__((used)) static inline void FUNC_1(struct buffer_head *VAR_0, u16 VAR_1,
         u16 VAR_2)
{
 struct gfs2_meta_header *VAR_3;
 VAR_3 = (struct gfs2_meta_header *)VAR_0->b_data;
 VAR_3->mh_type = FUNC_0(VAR_1);
 VAR_3->mh_format = FUNC_0(VAR_2);
}
