
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct cphy {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct cphy*,int ,int ,int*) ;
 int FUNC_1 (struct cphy*,int ,int ,int) ;

__attribute__((used)) static int FUNC_2(struct cphy *VAR_3, u32 VAR_4)
{
 u32 VAR_5 = 0;


 FUNC_0(VAR_3, VAR_2, VAR_1, &VAR_5);

 if (VAR_4 & 0x1) {
  VAR_5 |= 0x1;
  FUNC_1(VAR_3, VAR_2, VAR_1, VAR_5);
 } else {
  VAR_5 &= ~0x1;
  FUNC_1(VAR_3, VAR_2, VAR_1, VAR_5);
 }
 return 0;
}
