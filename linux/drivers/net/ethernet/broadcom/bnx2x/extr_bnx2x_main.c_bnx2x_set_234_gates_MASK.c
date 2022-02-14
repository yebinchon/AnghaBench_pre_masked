
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct bnx2x {int dummy; } ;


 int FUNC_0 (struct bnx2x*) ;
 scalar_t__ FUNC_1 (struct bnx2x*) ;
 int FUNC_2 (int,char*,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_3 (struct bnx2x*,int ) ;
 int FUNC_4 (struct bnx2x*,int ,int) ;

__attribute__((used)) static void FUNC_5(struct bnx2x *VAR_10, bool VAR_11)
{
 u32 VAR_12;


 if (!FUNC_0(VAR_10)) {

  FUNC_4(VAR_10, VAR_8, !!VAR_11);

  FUNC_4(VAR_10, VAR_9, !!VAR_11);
 }


 if (FUNC_1(VAR_10)) {

  VAR_12 = FUNC_3(VAR_10, VAR_3);
  FUNC_4(VAR_10, VAR_3,
         (!VAR_11) ? (VAR_12 | VAR_1) :
         (VAR_12 & ~(u32)VAR_1));

  VAR_12 = FUNC_3(VAR_10, VAR_2);
  FUNC_4(VAR_10, VAR_2,
         (!VAR_11) ? (VAR_12 | VAR_0) :
         (VAR_12 & ~(u32)VAR_0));
 } else {

  VAR_12 = FUNC_3(VAR_10, VAR_5);

  FUNC_4(VAR_10, VAR_5,
         (!VAR_11) ?
         (VAR_12 | VAR_4) :
         (VAR_12 & ~(u32)VAR_4));
 }

 FUNC_2(VAR_6 | VAR_7, "%s gates #2, #3 and #4\n",
  VAR_11 ? "closing" : "opening");
}
