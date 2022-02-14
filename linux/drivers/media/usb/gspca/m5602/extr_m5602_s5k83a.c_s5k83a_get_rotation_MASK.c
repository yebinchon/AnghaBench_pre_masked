
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sd {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct sd*,int ,int*) ;

__attribute__((used)) static int FUNC_1(struct sd *VAR_2, u8 *VAR_3)
{
 int VAR_4 = FUNC_0(VAR_2, VAR_0, VAR_3);
 *VAR_3 = (*VAR_3 & VAR_1) ? 0 : 1;
 return VAR_4;
}
