
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tree_balance {int* blknum; struct buffer_head** S_new; struct buffer_head** snum; } ;
struct item_head {int dummy; } ;
struct buffer_head {int dummy; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct buffer_head*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int,char*,int,struct buffer_head*) ;
 int FUNC_3 (struct tree_balance*,struct item_head* const,char const* const,struct item_head*,struct buffer_head**,int) ;
 int FUNC_4 (struct tree_balance*,struct item_head* const,char const* const,struct item_head*,struct buffer_head**,int) ;
 scalar_t__ FUNC_5 (struct buffer_head*) ;
 scalar_t__ FUNC_6 (struct buffer_head*) ;
 int FUNC_7 (struct buffer_head*) ;
 struct buffer_head* FUNC_8 (struct tree_balance*) ;
 int FUNC_9 (struct buffer_head*,int ) ;
 int FUNC_10 (struct item_head*,int ,int ) ;
 int FUNC_11 (int ,int ) ;

__attribute__((used)) static void FUNC_12(struct tree_balance *VAR_4,
       struct item_head * const VAR_5,
       const char * const VAR_6,
       struct item_head *VAR_7,
       struct buffer_head **VAR_8,
       int VAR_9)
{
 int VAR_10;
 for (VAR_10 = VAR_4->blknum[0] - 2; VAR_10 >= 0; VAR_10--) {
  FUNC_0(VAR_9 != VAR_2 && VAR_9 != VAR_3);

  FUNC_2(!VAR_4->snum[VAR_10],
         "PAP-12200: snum[%d] == %d. Must be > 0", VAR_10,
         VAR_4->snum[VAR_10]);



  VAR_4->S_new[VAR_10] = FUNC_8(VAR_4);


  FUNC_11(FUNC_1(VAR_4->S_new[VAR_10]), VAR_0);

  if (VAR_9 == VAR_2)
   FUNC_3(VAR_4, VAR_5, VAR_6, VAR_7,
            VAR_8, VAR_10);
  else
   FUNC_4(VAR_4, VAR_5, VAR_6, VAR_7,
           VAR_8, VAR_10);

  FUNC_10(VAR_7 + VAR_10, FUNC_9(VAR_4->S_new[VAR_10], 0), VAR_1);
  VAR_8[VAR_10] = VAR_4->S_new[VAR_10];

  FUNC_2(!FUNC_7(VAR_4->S_new[VAR_10])
         || FUNC_6(VAR_4->S_new[VAR_10])
         || FUNC_5(VAR_4->S_new[VAR_10]),
         "PAP-12247: S_new[%d] : (%b)",
         VAR_10, VAR_4->S_new[VAR_10]);
 }
}
