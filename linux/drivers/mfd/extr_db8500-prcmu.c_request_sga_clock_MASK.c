
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int,int ) ;

__attribute__((used)) static int FUNC_3(u8 VAR_2, bool VAR_3)
{
 u32 VAR_4;
 int VAR_5;

 if (VAR_3) {
  VAR_4 = FUNC_0(VAR_0);
  FUNC_2(VAR_4 | VAR_1, VAR_0);
 }

 VAR_5 = FUNC_1(VAR_2, VAR_3);

 if (!VAR_5 && !VAR_3) {
  VAR_4 = FUNC_0(VAR_0);
  FUNC_2(VAR_4 & ~VAR_1, VAR_0);
 }

 return VAR_5;
}
