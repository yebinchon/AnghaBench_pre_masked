
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct buffer_info {int bi_bh; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (struct buffer_info*,int ,int,int) ;
 int FUNC_2 (struct buffer_info*,int,int,int) ;

__attribute__((used)) static void FUNC_3(struct buffer_info *VAR_1,
      struct buffer_info *VAR_2,
      int VAR_3, int VAR_4,
      int VAR_5)
{
 int VAR_6;
 int VAR_7;

 FUNC_1(VAR_1, VAR_2->bi_bh, VAR_3,
         VAR_4);

 if (VAR_3 == VAR_0) {
  VAR_6 = 0;
  VAR_7 = 0;




  FUNC_2(VAR_2, VAR_6,
            VAR_7, VAR_4 - VAR_5);
 } else {
  int VAR_8, VAR_9;

  VAR_8 = (VAR_4 - VAR_5 ==
       (VAR_9 =
        FUNC_0(VAR_2->bi_bh)) + 1) ? 0 : VAR_9 - VAR_4 +
      VAR_5;

  FUNC_2(VAR_2,
            VAR_9 + 1 - VAR_4 + VAR_5, VAR_8,
            VAR_4 - VAR_5);
 }
}
