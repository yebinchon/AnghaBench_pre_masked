
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct rio_dev {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct rio_dev*,int) ;
 int FUNC_1 (struct rio_dev*,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (struct rio_dev*,int ,int*) ;
 int FUNC_3 (struct rio_dev*,int ,int ) ;
 int FUNC_4 (int) ;

__attribute__((used)) static int
FUNC_5(struct rio_dev *VAR_3, int VAR_4, u32 *VAR_5)
{
 u32 VAR_6;
 int VAR_7;

 if (VAR_5) {


  FUNC_2(VAR_3,
   FUNC_1(VAR_3, VAR_4),
   &VAR_6);
  FUNC_4(50);
 }


 FUNC_3(VAR_3,
  FUNC_0(VAR_3, VAR_4),
  VAR_1);


 if (!VAR_5)
  return 0;

 VAR_7 = 3;
 while (VAR_7--) {
  FUNC_4(50);
  FUNC_2(VAR_3,
   FUNC_1(VAR_3, VAR_4),
   &VAR_6);
  if (VAR_6 & VAR_2) {
   *VAR_5 = VAR_6;
   return 0;
  }
 }

 return -VAR_0;
}
