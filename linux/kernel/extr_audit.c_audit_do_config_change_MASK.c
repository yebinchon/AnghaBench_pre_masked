
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (char*,int ,int ,int) ;

__attribute__((used)) static int FUNC_1(char *VAR_4, u32 *VAR_5, u32 VAR_6)
{
 int VAR_7, VAR_8 = 0;
 u32 VAR_9 = *VAR_5;


 if (VAR_3 == VAR_0)
  VAR_7 = 0;
 else
  VAR_7 = 1;

 if (VAR_3 != VAR_1) {
  VAR_8 = FUNC_0(VAR_4, VAR_6, VAR_9, VAR_7);
  if (VAR_8)
   VAR_7 = 0;
 }


 if (VAR_7 == 1)
  *VAR_5 = VAR_6;

 else if (VAR_8 == 0)
  VAR_8 = -VAR_2;
 return VAR_8;
}
