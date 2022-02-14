
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
typedef int u32 ;
struct mic_mw {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct mic_mw*,scalar_t__) ;
 int FUNC_1 (struct mic_mw*,int,scalar_t__) ;
 int FUNC_2 () ;

__attribute__((used)) static void FUNC_3(struct mic_mw *VAR_2, int VAR_3)
{
 u64 VAR_4 = VAR_0 + VAR_3 * 8;
 u32 VAR_5 = FUNC_0(VAR_2, VAR_1 +
     VAR_4);


 VAR_5 = (VAR_5 | (1 << 13));






 FUNC_2();
 FUNC_1(VAR_2, VAR_5,
         VAR_1 + VAR_4);
}
