
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct b44 {int flags; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct b44*,int ,int*) ;
 int FUNC_1 (struct b44*,int ,int) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int) ;

__attribute__((used)) static int FUNC_4(struct b44 *VAR_4)
{
 u32 VAR_5;
 int VAR_6;

 if (VAR_4->flags & VAR_0)
  return 0;
 VAR_6 = FUNC_1(VAR_4, VAR_3, VAR_1);
 if (VAR_6)
  return VAR_6;
 FUNC_3(100);
 VAR_6 = FUNC_0(VAR_4, VAR_3, &VAR_5);
 if (!VAR_6) {
  if (VAR_5 & VAR_1) {
   FUNC_2(VAR_4->dev, "PHY Reset would not complete\n");
   VAR_6 = -VAR_2;
  }
 }

 return VAR_6;
}
