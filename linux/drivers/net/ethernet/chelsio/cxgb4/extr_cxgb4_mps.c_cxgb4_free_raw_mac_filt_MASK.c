
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct adapter {int dummy; } ;


 int FUNC_0 (struct adapter*,unsigned int) ;
 int FUNC_1 (struct adapter*,unsigned int,int const*,int const*,unsigned int,int ,int ,int) ;

int FUNC_2(struct adapter *VAR_0,
       unsigned int VAR_1,
       const u8 *VAR_2,
       const u8 *VAR_3,
       unsigned int VAR_4,
       u8 VAR_5,
       u8 VAR_6,
       bool VAR_7)
{
 int VAR_8 = 0;

 if (!FUNC_0(VAR_0, VAR_4))
  VAR_8 = FUNC_1(VAR_0, VAR_1, VAR_2,
        VAR_3, VAR_4, VAR_5,
        VAR_6, VAR_7);

 return VAR_8;
}
