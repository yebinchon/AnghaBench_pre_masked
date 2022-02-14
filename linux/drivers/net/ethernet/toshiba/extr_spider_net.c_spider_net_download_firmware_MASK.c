
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct spider_net_card {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int const VAR_6 ;
 int const VAR_7 ;
 scalar_t__ FUNC_0 (struct spider_net_card*,scalar_t__) ;
 int FUNC_1 (struct spider_net_card*,scalar_t__,int const) ;

__attribute__((used)) static int
FUNC_2(struct spider_net_card *VAR_8,
        const void *VAR_9)
{
 int VAR_10, VAR_11;
 const u32 *VAR_12 = VAR_9;


 FUNC_1(VAR_8, VAR_3,
        VAR_7);

 for (VAR_10 = 0; VAR_10 < VAR_1;
      VAR_10++) {
  FUNC_1(VAR_8,
         VAR_4 + VAR_10 * 8, 0);
  for (VAR_11 = 0; VAR_11 < VAR_2; VAR_11++) {
   FUNC_1(VAR_8, VAR_5 +
          VAR_10 * 8, *VAR_12);
   VAR_12++;
  }
 }

 if (FUNC_0(VAR_8, VAR_3))
  return -VAR_0;

 FUNC_1(VAR_8, VAR_3,
        VAR_6);

 return 0;
}
