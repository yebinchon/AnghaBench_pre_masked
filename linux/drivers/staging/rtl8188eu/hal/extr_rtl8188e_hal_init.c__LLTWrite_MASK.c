
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct adapter {int dummy; } ;
typedef scalar_t__ s32 ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,char*) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 scalar_t__ VAR_3 ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int) ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_5 (int) ;
 int FUNC_6 (struct adapter*,int ) ;
 int FUNC_7 (struct adapter*,int ,int) ;

__attribute__((used)) static s32 FUNC_8(struct adapter *VAR_8, u32 VAR_9, u32 VAR_10)
{
 s32 VAR_11 = VAR_5;
 s32 VAR_12 = 0;
 u32 VAR_13 = FUNC_1(VAR_9) | FUNC_2(VAR_10) | FUNC_3(VAR_4);
 u16 VAR_14 = VAR_1;

 FUNC_7(VAR_8, VAR_14, VAR_13);


 do {
  VAR_13 = FUNC_6(VAR_8, VAR_14);
  if (VAR_3 == FUNC_4(VAR_13))
   break;

  if (VAR_12 > VAR_0) {
   FUNC_0(VAR_7, VAR_6, ("Failed to polling write LLT done at address %d!\n", VAR_9));
   VAR_11 = VAR_2;
   break;
  }
  FUNC_5(5);
 } while (VAR_12++);

 return VAR_11;
}
