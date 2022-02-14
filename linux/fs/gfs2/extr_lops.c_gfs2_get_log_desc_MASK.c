
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct page {int dummy; } ;
struct gfs2_sbd {int dummy; } ;
struct TYPE_2__ {void* mh_format; void* mh_type; void* mh_magic; } ;
struct gfs2_log_descriptor {scalar_t__ ld_data2; void* ld_data1; void* ld_length; void* ld_type; TYPE_1__ ld_header; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct gfs2_log_descriptor*) ;
 void* FUNC_1 (int ) ;
 int VAR_4 ;
 struct page* FUNC_2 (int ,int ) ;
 struct gfs2_log_descriptor* FUNC_3 (struct page*) ;

__attribute__((used)) static struct page *FUNC_4(struct gfs2_sbd *VAR_5, u32 VAR_6,
          u32 VAR_7, u32 VAR_8)
{
 struct page *VAR_9 = FUNC_2(VAR_4, VAR_0);
 struct gfs2_log_descriptor *VAR_10 = FUNC_3(VAR_9);
 FUNC_0(VAR_10);
 VAR_10->ld_header.mh_magic = FUNC_1(VAR_2);
 VAR_10->ld_header.mh_type = FUNC_1(VAR_3);
 VAR_10->ld_header.mh_format = FUNC_1(VAR_1);
 VAR_10->ld_type = FUNC_1(VAR_6);
 VAR_10->ld_length = FUNC_1(VAR_7);
 VAR_10->ld_data1 = FUNC_1(VAR_8);
 VAR_10->ld_data2 = 0;
 return VAR_9;
}
