
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct bnx2x {int dummy; } ;


 int FUNC_0 (struct bnx2x*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int ,char*,scalar_t__) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_2 (struct bnx2x*,scalar_t__) ;
 int FUNC_3 (struct bnx2x*,scalar_t__,int) ;
 int FUNC_4 (struct bnx2x*) ;
 int FUNC_5 (int) ;

__attribute__((used)) static void FUNC_6(struct bnx2x *VAR_7)
{
 int VAR_8 = FUNC_0(VAR_7);
 u32 VAR_9;


 FUNC_4(VAR_7);

 FUNC_3(VAR_7, VAR_6 + VAR_8*4, 0);


 FUNC_3(VAR_7, VAR_3 + VAR_8*4, 0x0);

 FUNC_3(VAR_7, (VAR_8 ? VAR_5 :
      VAR_4), 0x0);


 FUNC_3(VAR_7, VAR_1 + VAR_8*4, 0);

 FUNC_5(100);

 VAR_9 = FUNC_2(VAR_7, VAR_0 + VAR_8*4);
 if (VAR_9)
  FUNC_1(VAR_2,
     "BRB1 is not empty  %d blocks are occupied\n", VAR_9);


}
