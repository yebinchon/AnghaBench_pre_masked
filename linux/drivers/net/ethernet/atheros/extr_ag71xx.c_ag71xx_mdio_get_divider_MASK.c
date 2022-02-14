
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long u32 ;
struct ag71xx {int clk_mdio; } ;


 unsigned long VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (unsigned long*) ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_1 (struct ag71xx*,int ) ;
 unsigned long* VAR_6 ;
 unsigned long* VAR_7 ;
 unsigned long* VAR_8 ;
 unsigned long FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct ag71xx *VAR_9, u32 *VAR_10)
{
 unsigned long VAR_11;
 const u32 *VAR_12;
 int VAR_13, VAR_14;

 VAR_11 = FUNC_2(VAR_9->clk_mdio);
 if (!VAR_11)
  return -VAR_4;

 if (FUNC_1(VAR_9, VAR_2) || FUNC_1(VAR_9, VAR_3)) {
  VAR_12 = VAR_8;
  VAR_13 = FUNC_0(VAR_8);
 } else if (FUNC_1(VAR_9, VAR_1)) {
  VAR_12 = VAR_7;
  VAR_13 = FUNC_0(VAR_7);
 } else {
  VAR_12 = VAR_6;
  VAR_13 = FUNC_0(VAR_6);
 }

 for (VAR_14 = 0; VAR_14 < VAR_13; VAR_14++) {
  unsigned long VAR_15;

  VAR_15 = VAR_11 / VAR_12[VAR_14];
  if (VAR_15 <= VAR_0) {
   *VAR_10 = VAR_14;
   return 0;
  }
 }

 return -VAR_5;
}
