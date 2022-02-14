
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
 int VAR_4 ;
 int FUNC_0 (int ,int,int,int*) ;

__attribute__((used)) static void FUNC_1(struct da9150_fg *VAR_5, u8 VAR_6, u8 VAR_7,
     u32 VAR_8)

{
 u8 VAR_9[VAR_3];
 u8 VAR_10;
 int VAR_11;


 VAR_10 = (VAR_6 & VAR_2) | VAR_4;

 for (VAR_11 = 0; VAR_11 < VAR_7; ++VAR_11) {
  VAR_9[VAR_11] = (VAR_8 >> (VAR_11 * VAR_1)) &
    VAR_0;
 }
 FUNC_0(VAR_5->da9150, VAR_10, VAR_7, VAR_9);
}
