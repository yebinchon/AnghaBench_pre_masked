
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct da9150_fg {int da9150; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int,int,int*) ;

__attribute__((used)) static u32 FUNC_1(struct da9150_fg *VAR_4, u8 VAR_5, u8 VAR_6)

{
 u8 VAR_7[VAR_2];
 u8 VAR_8;
 u32 VAR_9 = 0;
 int VAR_10;


 VAR_8 = (VAR_5 & VAR_1) | VAR_3;

 FUNC_0(VAR_4->da9150, VAR_8, VAR_6, VAR_7);
 for (VAR_10 = 0; VAR_10 < VAR_6; ++VAR_10)
  VAR_9 |= (VAR_7[VAR_10] << (VAR_10 * VAR_0));

 return VAR_9;
}
