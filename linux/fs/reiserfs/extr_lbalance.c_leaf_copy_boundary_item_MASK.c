
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct item_head {int ih_key; } ;
struct buffer_info {struct buffer_head* bi_bh; } ;
struct buffer_head {int b_size; } ;


 int FUNC_0 (struct buffer_head*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int,char*,...) ;
 int VAR_2 ;
 int FUNC_2 (struct item_head*) ;
 int FUNC_3 (struct item_head*) ;
 scalar_t__ FUNC_4 (struct buffer_head*,struct item_head*) ;
 int FUNC_5 (struct item_head*) ;
 scalar_t__ FUNC_6 (struct item_head*) ;
 scalar_t__ FUNC_7 (struct item_head*) ;
 scalar_t__ FUNC_8 (struct item_head*) ;
 struct item_head* FUNC_9 (struct buffer_head*,int) ;
 int FUNC_10 (struct item_head*) ;
 int FUNC_11 (struct item_head*) ;
 int FUNC_12 (struct buffer_info*,struct buffer_head*,int,int,int,int) ;
 int FUNC_13 (struct buffer_info*,int,int,int,scalar_t__,int ) ;
 int FUNC_14 (struct item_head*,int) ;
 int FUNC_15 (int *,int) ;
 int FUNC_16 (int ,char*,char*,struct item_head*) ;
 int FUNC_17 (struct buffer_info*) ;
 int FUNC_18 (struct item_head*,int) ;
 int FUNC_19 (struct item_head*,int) ;
 int FUNC_20 (struct item_head*,int ) ;

__attribute__((used)) static int FUNC_21(struct buffer_info *VAR_3,
       struct buffer_head *VAR_4, int VAR_5,
       int VAR_6)
{
 struct buffer_head *VAR_7 = VAR_3->bi_bh;

 int VAR_8, VAR_9;
 struct item_head *VAR_10;
 struct item_head *VAR_11;

 VAR_8 = FUNC_0(VAR_7);







 if (VAR_5 == VAR_0) {
  VAR_10 = FUNC_9(VAR_4, 0);
  VAR_11 = FUNC_9(VAR_7, VAR_8 - 1);


  if (!VAR_8
      || (!FUNC_15(&VAR_10->ih_key, VAR_4->b_size)))
   return 0;

  FUNC_1(!FUNC_5(VAR_10),
         "vs-10010: item can not have empty length");

  if (FUNC_7(VAR_10)) {
   if (VAR_6 == -1)

    VAR_6 = FUNC_3(VAR_10);
   FUNC_12(VAR_3, VAR_4, VAR_0, 0, 0,
           VAR_6);
   return 1;
  }







  if (VAR_6 == -1)
   VAR_6 = FUNC_5(VAR_10);
  FUNC_13(VAR_3,
         VAR_8 - 1, FUNC_5(VAR_11),
         VAR_6, FUNC_4(VAR_4, VAR_10), 0);

  if (FUNC_8(VAR_11)) {
   FUNC_1(FUNC_2(VAR_11),
          "vs-10030: merge to left: last unformatted node of non-last indirect item %h must have zerto free space",
          VAR_10);
   if (VAR_6 == FUNC_5(VAR_10))
    FUNC_18(VAR_11, FUNC_2(VAR_10));
  }

  return 1;
 }







 VAR_9 = FUNC_0(VAR_4);
 VAR_10 = FUNC_9(VAR_4, VAR_9 - 1);
 VAR_11 = FUNC_9(VAR_7, 0);

 if (!VAR_8 || !FUNC_15(&VAR_11->ih_key, VAR_4->b_size))
  return 0;

 if (FUNC_7(VAR_10)) {




  if (VAR_6 == -1)
   VAR_6 = FUNC_3(VAR_10);

  FUNC_12(VAR_3, VAR_4, VAR_1,
          VAR_9 - 1,
          FUNC_3(VAR_10) - VAR_6,
          VAR_6);
  return 1;
 }
 FUNC_1(FUNC_8(VAR_10) && FUNC_2(VAR_10),
        "vs-10040: merge to right: last unformatted node of non-last indirect item must be filled entirely (%h)",
        VAR_10);

 if (VAR_6 == -1) {

  VAR_6 = FUNC_5(VAR_10);

  FUNC_1(FUNC_10(VAR_11) !=
         FUNC_10(VAR_10) + FUNC_14(VAR_10, VAR_4->b_size),
         "vs-10050: items %h and %h do not match", VAR_10, VAR_11);


  FUNC_19(VAR_11, FUNC_10(VAR_10));



  FUNC_20(VAR_11, FUNC_11(VAR_10));
 } else {

  FUNC_1(FUNC_5(VAR_10) <= VAR_6,
         "vs-10060: no so much bytes %lu (needed %lu)",
         (unsigned long)FUNC_5(VAR_10),
         (unsigned long)VAR_6);


  if (FUNC_6(VAR_11)) {
   FUNC_1(FUNC_10(VAR_11) <=
          (unsigned long)VAR_6,
          "vs-10070: dih %h, bytes_or_entries(%d)", VAR_11,
          VAR_6);
   FUNC_19(VAR_11,
        FUNC_10(VAR_11) -
        VAR_6);
  } else {
   FUNC_1(FUNC_10(VAR_11) <=
          (VAR_6 / VAR_2) * VAR_7->b_size,
          "vs-10080: dih %h, bytes_or_entries(%d)",
          VAR_11,
          (VAR_6 / VAR_2) * VAR_7->b_size);
   FUNC_19(VAR_11,
        FUNC_10(VAR_11) -
        ((VAR_6 / VAR_2) *
         VAR_7->b_size));
  }
 }

 FUNC_13(VAR_3, 0, 0, VAR_6,
        FUNC_4(VAR_4,
           VAR_10) + FUNC_5(VAR_10) - VAR_6,
        0);
 return 1;
}
