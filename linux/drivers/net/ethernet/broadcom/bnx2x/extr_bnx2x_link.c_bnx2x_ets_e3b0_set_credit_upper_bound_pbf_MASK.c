
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u32 ;
struct link_params {int port; struct bnx2x* bp; } ;
struct bnx2x {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct bnx2x*,scalar_t__,scalar_t__ const) ;
 scalar_t__ FUNC_1 (scalar_t__ const) ;

__attribute__((used)) static void FUNC_2(
 const struct link_params *VAR_4,
 const u32 VAR_5)
{
 struct bnx2x *VAR_6 = VAR_4->bp;
 const u32 VAR_7 =
     FUNC_1(VAR_5);
 const u8 VAR_8 = VAR_4->port;
 u32 VAR_9 = 0;
 u8 VAR_10 = 0;
 u8 VAR_11 = 0;



 if (!VAR_8) {
  VAR_9 = VAR_2;
  VAR_10 = VAR_0;
 } else {
  VAR_9 = VAR_3;
  VAR_10 = VAR_1;
 }

 for (VAR_11 = 0; VAR_11 < VAR_10; VAR_11++)
  FUNC_0(VAR_6, VAR_9 + (VAR_11 << 2), VAR_7);
}
