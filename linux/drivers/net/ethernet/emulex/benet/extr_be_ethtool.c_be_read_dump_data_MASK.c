
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct be_adapter {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct be_adapter*,int ,void*) ;
 scalar_t__ FUNC_1 (struct be_adapter*) ;
 int FUNC_2 (struct be_adapter*,int ,int ,void*) ;

__attribute__((used)) static int FUNC_3(struct be_adapter *VAR_1, u32 VAR_2,
        void *VAR_3)
{
 int VAR_4 = 0;

 if (FUNC_1(VAR_1))
  VAR_4 = FUNC_2(VAR_1, VAR_0,
           VAR_2, VAR_3);
 else
  VAR_4 = FUNC_0(VAR_1, VAR_2, VAR_3);

 return VAR_4;
}
