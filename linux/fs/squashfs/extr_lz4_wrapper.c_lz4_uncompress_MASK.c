
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct squashfs_sb_info {scalar_t__ devblksize; } ;
struct squashfs_page_actor {int length; } ;
struct squashfs_lz4 {void* output; void* input; } ;
struct buffer_head {void* b_data; } ;


 int VAR_0 ;
 int FUNC_0 (void*,void*,int,int ) ;
 int VAR_1 ;
 int FUNC_1 (void*,void*,int) ;
 int FUNC_2 (int,scalar_t__) ;
 int FUNC_3 (struct buffer_head*) ;
 int FUNC_4 (struct squashfs_page_actor*) ;
 void* FUNC_5 (struct squashfs_page_actor*) ;
 void* FUNC_6 (struct squashfs_page_actor*) ;

__attribute__((used)) static int FUNC_7(struct squashfs_sb_info *VAR_2, void *VAR_3,
 struct buffer_head **VAR_4, int VAR_5, int VAR_6, int VAR_7,
 struct squashfs_page_actor *VAR_8)
{
 struct squashfs_lz4 *VAR_9 = VAR_3;
 void *VAR_10 = VAR_9->input, *VAR_11;
 int VAR_12, VAR_13, VAR_14 = VAR_7, VAR_15;

 for (VAR_13 = 0; VAR_13 < VAR_5; VAR_13++) {
  VAR_12 = FUNC_2(VAR_14, VAR_2->devblksize - VAR_6);
  FUNC_1(VAR_10, VAR_4[VAR_13]->b_data + VAR_6, VAR_12);
  VAR_10 += VAR_12;
  VAR_14 -= VAR_12;
  VAR_6 = 0;
  FUNC_3(VAR_4[VAR_13]);
 }

 VAR_15 = FUNC_0(VAR_9->input, VAR_9->output,
  VAR_7, VAR_8->length);

 if (VAR_15 < 0)
  return -VAR_0;

 VAR_14 = VAR_15;
 VAR_11 = FUNC_5(VAR_8);
 VAR_10 = VAR_9->output;
 while (VAR_11) {
  if (VAR_14 <= VAR_1) {
   FUNC_1(VAR_11, VAR_10, VAR_14);
   break;
  }
  FUNC_1(VAR_11, VAR_10, VAR_1);
  VAR_10 += VAR_1;
  VAR_14 -= VAR_1;
  VAR_11 = FUNC_6(VAR_8);
 }
 FUNC_4(VAR_8);

 return VAR_15;
}
