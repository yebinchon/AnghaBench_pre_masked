
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct sdio_func {int dummy; } ;


 int FUNC_0 (struct sdio_func*,int ,int ,int*) ;

__attribute__((used)) static int
FUNC_1(struct sdio_func *VAR_0, u32 VAR_1, u8 VAR_2)
{
 int VAR_3 = -1;

 FUNC_0(VAR_0, VAR_2, VAR_1, &VAR_3);
 return VAR_3;
}
