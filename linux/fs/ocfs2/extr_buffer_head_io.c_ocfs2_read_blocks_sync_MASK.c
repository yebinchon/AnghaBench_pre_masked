
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct ocfs2_super {int sb; } ;
struct buffer_head {int b_end_io; scalar_t__ b_blocknr; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (struct buffer_head*) ;
 scalar_t__ FUNC_2 (struct buffer_head*) ;
 scalar_t__ FUNC_3 (struct buffer_head*) ;
 int FUNC_4 (struct buffer_head*) ;
 int VAR_4 ;
 int FUNC_5 (struct buffer_head*) ;
 int FUNC_6 (struct buffer_head*) ;
 int FUNC_7 (int ,char*,unsigned long long) ;
 int FUNC_8 (int) ;
 int FUNC_9 (struct buffer_head*) ;
 struct buffer_head* FUNC_10 (int ,int ) ;
 int FUNC_11 (int ,int ,struct buffer_head*) ;
 int FUNC_12 (unsigned long long,unsigned int) ;
 int FUNC_13 (unsigned long long) ;
 scalar_t__ FUNC_14 (int) ;
 int FUNC_15 (struct buffer_head*) ;
 int FUNC_16 (struct buffer_head*) ;

int FUNC_17(struct ocfs2_super *VAR_5, u64 VAR_6,
      unsigned int VAR_7, struct buffer_head *VAR_8[])
{
 int VAR_9 = 0;
 unsigned int VAR_10;
 struct buffer_head *VAR_11;
 int VAR_12 = 0;

 FUNC_12((unsigned long long)VAR_6, VAR_7);

 if (!VAR_7)
  goto bail;




 VAR_12 = (VAR_8[0] == ((void*)0));

 for (VAR_10 = 0 ; VAR_10 < VAR_7 ; VAR_10++) {
  if (VAR_8[VAR_10] == ((void*)0)) {
   VAR_8[VAR_10] = FUNC_10(VAR_5->sb, VAR_6++);
   if (VAR_8[VAR_10] == ((void*)0)) {
    VAR_9 = -VAR_1;
    FUNC_8(VAR_9);
    break;
   }
  }
  VAR_11 = VAR_8[VAR_10];

  if (FUNC_2(VAR_11)) {
   FUNC_13(
     (unsigned long long)VAR_11->b_blocknr);
   continue;
  }

  if (FUNC_1(VAR_11)) {


   FUNC_7(VAR_2,
        "trying to sync read a dirty "
        "buffer! (blocknr = %llu), skipping\n",
        (unsigned long long)VAR_11->b_blocknr);
   continue;
  }

  FUNC_6(VAR_11);
  if (FUNC_2(VAR_11)) {







   FUNC_15(VAR_11);
   continue;

  }

  FUNC_5(VAR_11);
  VAR_11->b_end_io = VAR_4;
  FUNC_11(VAR_3, 0, VAR_11);
 }

read_failure:
 for (VAR_10 = VAR_7; VAR_10 > 0; VAR_10--) {
  VAR_11 = VAR_8[VAR_10 - 1];

  if (FUNC_14(VAR_9)) {
   if (VAR_12 && VAR_11) {




    if (!FUNC_2(VAR_11))
     FUNC_16(VAR_11);
    FUNC_9(VAR_11);
    VAR_8[VAR_10 - 1] = ((void*)0);
   } else if (VAR_11 && FUNC_3(VAR_11)) {
    FUNC_4(VAR_11);
   }
   continue;
  }


  if (!FUNC_2(VAR_11))
   FUNC_16(VAR_11);

  if (!FUNC_3(VAR_11)) {



   VAR_9 = -VAR_0;
   goto read_failure;
  }
 }

bail:
 return VAR_9;
}
