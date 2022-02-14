
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tg3 {int* rss_ind_tbl; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int) ;

__attribute__((used)) static void FUNC_1(struct tg3 *VAR_2)
{
 int VAR_3 = 0;
 u32 VAR_4 = VAR_0;

 while (VAR_3 < VAR_1) {
  u32 VAR_5 = VAR_2->rss_ind_tbl[VAR_3];
  VAR_3++;
  for (; VAR_3 % 8; VAR_3++) {
   VAR_5 <<= 4;
   VAR_5 |= VAR_2->rss_ind_tbl[VAR_3];
  }
  FUNC_0(VAR_4, VAR_5);
  VAR_4 += 4;
 }
}
