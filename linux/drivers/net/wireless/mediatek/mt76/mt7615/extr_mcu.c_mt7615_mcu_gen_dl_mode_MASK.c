
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ,int ) ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static u32 FUNC_2(u8 VAR_7, bool VAR_8)
{
 u32 VAR_9 = 0;

 VAR_9 |= (VAR_7 & VAR_5) ?
        (VAR_0 | VAR_3) : 0;
 VAR_9 |= FUNC_1(VAR_1,
     FUNC_0(VAR_6, VAR_7));
 VAR_9 |= VAR_2;
 VAR_9 |= VAR_8 ? VAR_4 : 0;

 return VAR_9;
}
