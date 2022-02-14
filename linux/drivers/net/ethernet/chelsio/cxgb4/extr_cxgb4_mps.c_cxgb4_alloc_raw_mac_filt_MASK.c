
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct adapter {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct adapter*,int const*,int,int const*) ;
 int FUNC_1 (struct adapter*,unsigned int,int const*,int const*,unsigned int,int ,int ,int) ;
 int FUNC_2 (struct adapter*,unsigned int,int const*,int const*,unsigned int,int ,int ,int) ;

int FUNC_3(struct adapter *VAR_1,
        unsigned int VAR_2,
        const u8 *VAR_3,
        const u8 *VAR_4,
        unsigned int VAR_5,
        u8 VAR_6,
        u8 VAR_7,
        bool VAR_8)
{
 int VAR_9;

 VAR_9 = FUNC_1(VAR_1, VAR_2, VAR_3,
        VAR_4, VAR_5, VAR_6,
        VAR_7, VAR_8);
 if (VAR_9 < 0)
  return VAR_9;

 if (FUNC_0(VAR_1, VAR_3, VAR_9, VAR_4)) {
  VAR_9 = -VAR_0;
  FUNC_2(VAR_1, VAR_2, VAR_3,
         VAR_4, VAR_5, VAR_6,
         VAR_7, VAR_8);
 }

 return VAR_9;
}
