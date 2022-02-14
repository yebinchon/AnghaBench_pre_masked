
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct ocfs2_super {int dummy; } ;
struct ocfs2_suballoc_result {int sr_bit_offset; int sr_bits; } ;
struct ocfs2_group_desc {void* bg_bitmap; } ;
struct buffer_head {scalar_t__ b_data; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (struct ocfs2_group_desc*) ;
 int FUNC_2 (void*,unsigned int,int) ;
 int FUNC_3 (struct buffer_head*,int) ;

__attribute__((used)) static int FUNC_4(struct ocfs2_super *VAR_1,
          struct buffer_head *VAR_2,
          unsigned int VAR_3,
          unsigned int VAR_4,
          struct ocfs2_suballoc_result *VAR_5)
{
 void *VAR_6;
 u16 VAR_7, VAR_8;
 int VAR_9, VAR_10, VAR_11, VAR_12 = 0;
 struct ocfs2_group_desc *VAR_13 = (struct ocfs2_group_desc *) VAR_2->b_data;



 FUNC_0(!FUNC_1(VAR_13));

 VAR_11 = VAR_10 = VAR_7 = VAR_8 = 0;
 VAR_6 = VAR_13->bg_bitmap;

 while((VAR_9 = FUNC_2(VAR_6, VAR_4, VAR_10)) != -1) {
  if (VAR_9 == VAR_4)
   break;

  if (!FUNC_3(VAR_2, VAR_9)) {


   VAR_11 = 0;
   VAR_10 = VAR_9 + 1;
  } else if (VAR_9 == VAR_10) {

   VAR_11++;

   VAR_10++;
  } else {

   VAR_11 = 1;
   VAR_10 = VAR_9 + 1;
  }
  if (VAR_11 > VAR_8) {
   VAR_8 = VAR_11;
   VAR_7 = VAR_10 - VAR_11;
  }

  if (VAR_11 == VAR_3) {

   break;
  }
 }

 if (VAR_8) {
  VAR_5->sr_bit_offset = VAR_7;
  VAR_5->sr_bits = VAR_8;
 } else {
  VAR_12 = -VAR_0;


 }

 return VAR_12;
}
