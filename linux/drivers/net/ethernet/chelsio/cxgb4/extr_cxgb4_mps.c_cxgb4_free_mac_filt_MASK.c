
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct adapter {int mbox; } ;


 int FUNC_0 (struct adapter*,int const*,int *) ;
 int FUNC_1 (struct adapter*,int ,unsigned int,int,int const**,int) ;

int FUNC_2(struct adapter *VAR_0, unsigned int VAR_1,
   unsigned int VAR_2, const u8 **VAR_3, bool VAR_4)
{
 int VAR_5, VAR_6;

 for (VAR_6 = 0; VAR_6 < VAR_2; VAR_6++) {
  if (!FUNC_0(VAR_0, VAR_3[VAR_6], ((void*)0))) {
   VAR_5 = FUNC_1(VAR_0, VAR_0->mbox, VAR_1,
            1, &VAR_3[VAR_6], VAR_4);
   if (VAR_5 < 0)
    return VAR_5;
  }
 }


 return VAR_2;
}
