
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct vf610_ocotp {int clk; } ;


 int FUNC_0 (int,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct vf610_ocotp *VAR_4)
{
 u32 VAR_5;
 u32 VAR_6, VAR_7, VAR_8;
 u32 VAR_9;

 VAR_5 = FUNC_1(VAR_4->clk);


 VAR_6 = VAR_5 / (1000000000 / VAR_0) - 1;
 VAR_8 = VAR_5 / (1000000000 / 10000) + 2 * (VAR_0 + 1) - 1;
 VAR_7 = VAR_5 / (1000000000 / 40) + 2 * (VAR_0 + 1) - 1;

 VAR_9 = FUNC_0(VAR_6, VAR_1);
 VAR_9 |= FUNC_0(VAR_7, VAR_3);
 VAR_9 |= FUNC_0(VAR_8, VAR_2);

 return VAR_9;
}
