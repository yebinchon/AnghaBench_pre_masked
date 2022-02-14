
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct squashfs_sb_info {scalar_t__ devblksize; } ;
struct squashfs_page_actor {size_t length; } ;
struct squashfs_lzo {void* output; void* input; } ;
struct buffer_head {void* b_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (void*,size_t,void*,size_t*) ;
 int FUNC_1 (void*,void*,int) ;
 int FUNC_2 (int,scalar_t__) ;
 int FUNC_3 (struct buffer_head*) ;
 int FUNC_4 (struct squashfs_page_actor*) ;
 void* FUNC_5 (struct squashfs_page_actor*) ;
 void* FUNC_6 (struct squashfs_page_actor*) ;

__attribute__((used)) static int FUNC_7(struct squashfs_sb_info *VAR_3, void *VAR_4,
 struct buffer_head **VAR_5, int VAR_6, int VAR_7, int VAR_8,
 struct squashfs_page_actor *VAR_9)
{
 struct squashfs_lzo *VAR_10 = VAR_4;
 void *VAR_11 = VAR_10->input, *VAR_12;
 int VAR_13, VAR_14, VAR_15 = VAR_8, VAR_16;
 size_t VAR_17 = VAR_9->length;

 for (VAR_14 = 0; VAR_14 < VAR_6; VAR_14++) {
  VAR_13 = FUNC_2(VAR_15, VAR_3->devblksize - VAR_7);
  FUNC_1(VAR_11, VAR_5[VAR_14]->b_data + VAR_7, VAR_13);
  VAR_11 += VAR_13;
  VAR_15 -= VAR_13;
  VAR_7 = 0;
  FUNC_3(VAR_5[VAR_14]);
 }

 VAR_16 = FUNC_0(VAR_10->input, (size_t)VAR_8,
     VAR_10->output, &VAR_17);
 if (VAR_16 != VAR_1)
  goto failed;

 VAR_16 = VAR_15 = (int)VAR_17;
 VAR_12 = FUNC_5(VAR_9);
 VAR_11 = VAR_10->output;
 while (VAR_12) {
  if (VAR_15 <= VAR_2) {
   FUNC_1(VAR_12, VAR_11, VAR_15);
   break;
  } else {
   FUNC_1(VAR_12, VAR_11, VAR_2);
   VAR_11 += VAR_2;
   VAR_15 -= VAR_2;
   VAR_12 = FUNC_6(VAR_9);
  }
 }
 FUNC_4(VAR_9);

 return VAR_16;

failed:
 return -VAR_0;
}
