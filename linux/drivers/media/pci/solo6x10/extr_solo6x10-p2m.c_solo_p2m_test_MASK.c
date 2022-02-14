
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct solo_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,int) ;
 int FUNC_1 (unsigned long,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int*,int,int) ;
 scalar_t__ FUNC_4 (struct solo_dev*,int,int*,int,int,int ,int ) ;

__attribute__((used)) static int FUNC_5(struct solo_dev *VAR_2, int VAR_3, int VAR_4)
{
 u32 *VAR_5;
 u32 *VAR_6;
 int VAR_7;
 int VAR_8 = -VAR_0;
 int VAR_9 = FUNC_2(VAR_4);

 VAR_5 = (u32 *)FUNC_0(VAR_1, VAR_9);
 if (VAR_5 == ((void*)0))
  return -1;

 VAR_6 = (u32 *)FUNC_0(VAR_1, VAR_9);
 if (VAR_6 == ((void*)0)) {
  FUNC_1((unsigned long)VAR_5, VAR_9);
  return -1;
 }

 for (VAR_7 = 0; VAR_7 < (VAR_4 >> 3); VAR_7++)
  *(VAR_5 + VAR_7) = (VAR_7 << 16) | (VAR_7 + 1);

 for (VAR_7 = (VAR_4 >> 3); VAR_7 < (VAR_4 >> 2); VAR_7++)
  *(VAR_5 + VAR_7) = ~((VAR_7 << 16) | (VAR_7 + 1));

 FUNC_3(VAR_6, 0x55, VAR_4);

 if (FUNC_4(VAR_2, 1, VAR_5, VAR_3, VAR_4, 0, 0))
  goto test_fail;

 if (FUNC_4(VAR_2, 0, VAR_6, VAR_3, VAR_4, 0, 0))
  goto test_fail;

 for (VAR_7 = 0; VAR_7 < (VAR_4 >> 2); VAR_7++) {
  if (*(VAR_5 + VAR_7) != *(VAR_6 + VAR_7))
   goto test_fail;
 }

 VAR_8 = 0;

test_fail:
 FUNC_1((unsigned long)VAR_5, VAR_9);
 FUNC_1((unsigned long)VAR_6, VAR_9);

 return VAR_8;
}
