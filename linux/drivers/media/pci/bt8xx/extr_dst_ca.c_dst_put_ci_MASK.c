
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct dst_state {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,int ,int,char*) ;
 scalar_t__ FUNC_1 (struct dst_state*,scalar_t__*,scalar_t__*,int,int) ;
 int FUNC_2 (struct dst_state*) ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_3(struct dst_state *VAR_4, u8 *VAR_5, int VAR_6, u8 *VAR_7, int VAR_8)
{
 u8 VAR_9 = 0;

 while (VAR_9 < VAR_2) {
  FUNC_0(VAR_3, VAR_0, 1, " Put Command");
  if (FUNC_1(VAR_4, VAR_5, VAR_7, VAR_6, VAR_8)) {
   FUNC_2(VAR_4);
   VAR_9++;
  } else {
   break;
  }
 }

 if(VAR_9 == VAR_2)
  return -VAR_1;

 return 0;
}
