
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct bnx2x {int dummy; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (struct bnx2x*) ;
 scalar_t__ FUNC_2 (struct bnx2x*) ;
 int FUNC_3 (int ,char*,int,int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_4 (struct bnx2x*,int) ;
 int FUNC_5 (struct bnx2x*,int,int) ;

__attribute__((used)) static void FUNC_6(struct bnx2x *VAR_8)
{
 int VAR_9 = FUNC_1(VAR_8);
 u32 VAR_10 = VAR_9 ? VAR_5 : VAR_4;
 u32 VAR_11 = FUNC_4(VAR_8, VAR_10);





 if (FUNC_2(VAR_8)) {




  FUNC_5(VAR_8, VAR_6 + VAR_9*4, 0);

  VAR_11 &= ~(VAR_3 |
    VAR_1 |
    VAR_0);
 } else
  VAR_11 &= ~(VAR_3 |
    VAR_2 |
    VAR_1 |
    VAR_0);

 FUNC_3(VAR_7,
    "write %x to HC %d (addr 0x%x)\n",
    VAR_11, VAR_9, VAR_10);

 FUNC_5(VAR_8, VAR_10, VAR_11);
 if (FUNC_4(VAR_8, VAR_10) != VAR_11)
  FUNC_0("BUG! Proper val not read from IGU!\n");
}
