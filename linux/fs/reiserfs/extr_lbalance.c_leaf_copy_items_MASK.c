
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct buffer_info {struct buffer_head* bi_bh; } ;
struct buffer_head {int dummy; } ;


 int FUNC_0 (struct buffer_head*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int,char*,...) ;
 int FUNC_2 (struct buffer_info*,struct buffer_head*,int,int) ;
 int FUNC_3 (struct buffer_info*,struct buffer_head*,int,int,int) ;
 int FUNC_4 (struct buffer_info*,struct buffer_head*,int,int,int) ;

__attribute__((used)) static int FUNC_5(struct buffer_info *VAR_2, struct buffer_head *VAR_3,
      int VAR_4, int VAR_5, int VAR_6)
{
 struct buffer_head *VAR_7;
 int VAR_8, VAR_9, VAR_10, VAR_11;

 VAR_7 = VAR_2->bi_bh;
 FUNC_1(!VAR_7 || !VAR_3, "vs-10210: !dest || !src");
 FUNC_1(VAR_4 != VAR_0 && VAR_4 != VAR_1,
        "vs-10220:last_first != FIRST_TO_LAST && last_first != LAST_TO_FIRST");
 FUNC_1(FUNC_0(VAR_3) < VAR_5,
        "vs-10230: No enough items: %d, req. %d", FUNC_0(VAR_3),
        VAR_5);
 FUNC_1(VAR_5 < 0, "vs-10240: cpy_num < 0 (%d)", VAR_5);

 if (VAR_5 == 0)
  return 0;

 if (VAR_4 == VAR_0) {

  VAR_8 = 0;
  if (VAR_5 == 1)
   VAR_11 = VAR_6;
  else
   VAR_11 = -1;





  VAR_9 = FUNC_2(VAR_2, VAR_3, VAR_0, VAR_11);
  VAR_5 -= VAR_9;
  if (VAR_5 == 0)
   return VAR_9;
  VAR_8 += VAR_9;
  if (VAR_6 == -1)




   FUNC_3(VAR_2, VAR_3, VAR_0,
       VAR_8, VAR_5);
  else {




   FUNC_3(VAR_2, VAR_3, VAR_0,
       VAR_8, VAR_5 - 1);





   FUNC_4(VAR_2, VAR_3, VAR_0,
      VAR_5 + VAR_8 - 1, VAR_6);
  }
 } else {

  VAR_10 = FUNC_0(VAR_3);
  if (VAR_5 == 1)
   VAR_11 = VAR_6;
  else
   VAR_11 = -1;






  VAR_9 = FUNC_2(VAR_2, VAR_3, VAR_1, VAR_11);

  VAR_5 -= VAR_9;
  if (VAR_5 == 0)
   return VAR_9;

  VAR_8 = VAR_10 - VAR_5 - VAR_9;
  if (VAR_6 == -1) {




   FUNC_3(VAR_2, VAR_3, VAR_1,
       VAR_8, VAR_5);
  } else {




   FUNC_3(VAR_2, VAR_3, VAR_1,
       VAR_8 + 1, VAR_5 - 1);





   FUNC_4(VAR_2, VAR_3, VAR_1, VAR_8,
      VAR_6);
  }
 }
 return VAR_9;
}
