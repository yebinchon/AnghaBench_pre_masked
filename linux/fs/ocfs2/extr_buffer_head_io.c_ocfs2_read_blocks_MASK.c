
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
typedef struct super_block super_block ;
struct ocfs2_caching_info {int dummy; } ;
struct buffer_head {int b_end_io; scalar_t__ b_blocknr; } ;


 int FUNC_0 () ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_2 (struct buffer_head*) ;
 int FUNC_3 (struct buffer_head*) ;
 scalar_t__ FUNC_4 (struct buffer_head*) ;
 scalar_t__ FUNC_5 (struct buffer_head*) ;
 int FUNC_6 (struct buffer_head*) ;
 int FUNC_7 (struct buffer_head*) ;
 int VAR_7 ;
 int FUNC_8 (struct buffer_head*) ;
 int FUNC_9 (struct buffer_head*) ;
 int FUNC_10 (int ,char*,unsigned long long) ;
 int FUNC_11 (int) ;
 scalar_t__ FUNC_12 (struct ocfs2_caching_info*,struct buffer_head*) ;
 scalar_t__ FUNC_13 (struct ocfs2_caching_info*,struct buffer_head*) ;
 struct super_block* FUNC_14 (struct ocfs2_caching_info*) ;
 int FUNC_15 (struct ocfs2_caching_info*) ;
 int FUNC_16 (struct ocfs2_caching_info*) ;
 scalar_t__ FUNC_17 (struct ocfs2_caching_info*) ;
 int FUNC_18 (struct ocfs2_caching_info*,struct buffer_head*) ;
 int FUNC_19 (struct buffer_head*) ;
 struct buffer_head* FUNC_20 (struct super_block*,int ) ;
 int FUNC_21 (struct buffer_head*) ;
 int FUNC_22 (int ,int ,struct buffer_head*) ;
 int FUNC_23 (struct ocfs2_caching_info*,unsigned long long,int,int) ;
 int FUNC_24 (unsigned long long,int,int,scalar_t__) ;
 int FUNC_25 (unsigned long long,int,int,int) ;
 int FUNC_26 (unsigned long long,unsigned long long) ;
 scalar_t__ FUNC_27 (int) ;
 int FUNC_28 (struct buffer_head*) ;
 int FUNC_29 (struct buffer_head*) ;

int FUNC_30(struct ocfs2_caching_info *VAR_8, u64 VAR_9, int VAR_10,
        struct buffer_head *VAR_11[], int VAR_12,
        int (*VAR_13)(struct super_block *VAR_14,
          struct buffer_head *VAR_15))
{
 int VAR_16 = 0;
 int VAR_17, VAR_18 = 0;
 struct buffer_head *VAR_19;
 struct super_block *VAR_20 = FUNC_14(VAR_8);
 int VAR_21 = 0;

 FUNC_23(VAR_8, (unsigned long long)VAR_9, VAR_10, VAR_12);

 FUNC_1(!VAR_8);
 FUNC_1((VAR_12 & VAR_5) &&
        (VAR_12 & VAR_4));

 if (VAR_11 == ((void*)0)) {
  VAR_16 = -VAR_0;
  FUNC_11(VAR_16);
  goto bail;
 }

 if (VAR_10 < 0) {
  FUNC_10(VAR_3, "asked to read %d blocks!\n", VAR_10);
  VAR_16 = -VAR_0;
  FUNC_11(VAR_16);
  goto bail;
 }

 if (VAR_10 == 0) {
  VAR_16 = 0;
  goto bail;
 }




 VAR_21 = (VAR_11[0] == ((void*)0));

 FUNC_15(VAR_8);
 for (VAR_17 = 0 ; VAR_17 < VAR_10 ; VAR_17++) {
  if (VAR_11[VAR_17] == ((void*)0)) {
   VAR_11[VAR_17] = FUNC_20(VAR_20, VAR_9++);
   if (VAR_11[VAR_17] == ((void*)0)) {
    FUNC_16(VAR_8);
    VAR_16 = -VAR_2;
    FUNC_11(VAR_16);

    break;
   }
  }
  VAR_19 = VAR_11[VAR_17];
  VAR_18 = (VAR_12 & VAR_4);
  if (!VAR_18 && !FUNC_13(VAR_8, VAR_19)) {
   FUNC_26(
        (unsigned long long)VAR_19->b_blocknr,
        (unsigned long long)FUNC_17(VAR_8));


   VAR_18 = 1;
  }

  FUNC_24((unsigned long long)VAR_19->b_blocknr,
   VAR_18, FUNC_3(VAR_19), FUNC_2(VAR_19));

  if (FUNC_3(VAR_19)) {
   continue;
  }

  if (VAR_18) {
   if (FUNC_2(VAR_19)) {


    continue;
   }





   if ((VAR_12 & VAR_5)
       && FUNC_12(VAR_8, VAR_19))
    continue;

   FUNC_9(VAR_19);
   if (FUNC_3(VAR_19)) {






    FUNC_28(VAR_19);
    continue;

   }





   if (!(VAR_12 & VAR_4)
       && !(VAR_12 & VAR_5)
       && FUNC_13(VAR_8, VAR_19)) {
    FUNC_28(VAR_19);
    continue;
   }

   FUNC_8(VAR_19);
   if (VAR_13)
    FUNC_21(VAR_19);
   VAR_19->b_end_io = VAR_7;
   FUNC_22(VAR_6, 0, VAR_19);
   continue;
  }
 }

read_failure:
 for (VAR_17 = (VAR_10 - 1); VAR_17 >= 0; VAR_17--) {
  VAR_19 = VAR_11[VAR_17];

  if (!(VAR_12 & VAR_5)) {
   if (FUNC_27(VAR_16)) {



    if (VAR_21 && VAR_19) {




     if (!FUNC_3(VAR_19))
      FUNC_29(VAR_19);
     FUNC_19(VAR_19);
     VAR_11[VAR_17] = ((void*)0);
    } else if (VAR_19 && FUNC_5(VAR_19)) {
     FUNC_7(VAR_19);
    }
    continue;
   }



   if (!FUNC_3(VAR_19))
    FUNC_29(VAR_19);

   if (!FUNC_5(VAR_19)) {






    VAR_16 = -VAR_1;
    FUNC_6(VAR_19);
    goto read_failure;
   }

   if (FUNC_4(VAR_19)) {



    FUNC_1(FUNC_3(VAR_19));
    FUNC_6(VAR_19);
    VAR_16 = VAR_13(VAR_20, VAR_19);
    if (VAR_16)
     goto read_failure;
   }
  }




  FUNC_18(VAR_8, VAR_19);
 }
 FUNC_16(VAR_8);

 FUNC_25((unsigned long long)VAR_9, VAR_10,
        VAR_12, VAR_18);

bail:

 return VAR_16;
}
