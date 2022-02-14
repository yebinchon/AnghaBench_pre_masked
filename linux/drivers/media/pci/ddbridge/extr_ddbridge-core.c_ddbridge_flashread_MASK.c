
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct ddb {int dummy; } ;


 int FUNC_0 (struct ddb*,int,int*,int,int*,int) ;

int FUNC_1(struct ddb *VAR_0, u32 VAR_1, u8 *VAR_2, u32 VAR_3, u32 VAR_4)
{
 u8 VAR_5[4] = {0x03, (VAR_3 >> 16) & 0xff,
       (VAR_3 >> 8) & 0xff, VAR_3 & 0xff};

 return FUNC_0(VAR_0, VAR_1, VAR_5, 4, VAR_2, VAR_4);
}
