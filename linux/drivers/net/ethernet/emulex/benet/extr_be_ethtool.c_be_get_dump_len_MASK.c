
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct be_adapter {int fat_dump_len; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct be_adapter*) ;
 int FUNC_1 (struct be_adapter*,int ) ;

__attribute__((used)) static int FUNC_2(struct be_adapter *VAR_1)
{
 u32 VAR_2 = 0;

 if (FUNC_0(VAR_1))
  VAR_2 = FUNC_1(VAR_1,
          VAR_0);
 else
  VAR_2 = VAR_1->fat_dump_len;

 return VAR_2;
}
