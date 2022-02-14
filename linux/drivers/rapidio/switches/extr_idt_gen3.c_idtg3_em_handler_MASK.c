
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct rio_dev {int dummy; } ;


 int FUNC_0 (struct rio_dev*,int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct rio_dev*,int ,int*) ;
 int FUNC_4 (struct rio_dev*,int ,int) ;
 int FUNC_5 (int) ;

__attribute__((used)) static int
FUNC_6(struct rio_dev *VAR_4, u8 VAR_5)
{
 u32 VAR_6;
 u32 VAR_7;

 FUNC_3(VAR_4,
   FUNC_0(VAR_4, VAR_5),
   &VAR_6);


 if (VAR_6 & VAR_3)
  return 0;





 if (VAR_6 & (VAR_2 |
    VAR_1)) {
  FUNC_3(VAR_4, FUNC_1(VAR_5), &VAR_7);
  FUNC_4(VAR_4, FUNC_1(VAR_5),
        VAR_7 | VAR_0);
  FUNC_5(10);
  FUNC_4(VAR_4, FUNC_1(VAR_5), VAR_7);
  FUNC_2(500);
 }

 return 0;
}
