
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct cb710_slot {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct cb710_slot*,int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (struct cb710_slot*,int ) ;
 int FUNC_3 (struct cb710_slot*) ;
 int FUNC_4 (struct cb710_slot*) ;
 int FUNC_5 (int ,char*,unsigned int,int ,int ,int ) ;
 int FUNC_6 (int) ;

__attribute__((used)) static int FUNC_7(struct cb710_slot *VAR_3, u8 VAR_4)
{
 int VAR_5 = 0;
 unsigned VAR_6 = 2000000;






 while (!(VAR_5 = FUNC_0(VAR_3, VAR_4))) {
  if (!--VAR_6) {
   FUNC_1(FUNC_4(VAR_3),
    VAR_0);
   VAR_5 = -VAR_2;
   break;
  }
  FUNC_6(1);
 }
 return VAR_5 < 0 ? VAR_5 : 0;
}
