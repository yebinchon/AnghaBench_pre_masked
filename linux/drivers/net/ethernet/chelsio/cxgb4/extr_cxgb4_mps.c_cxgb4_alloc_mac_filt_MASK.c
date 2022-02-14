
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u64 ;
typedef int u16 ;
struct adapter {int mbox; } ;


 int VAR_0 ;
 int FUNC_0 (struct adapter*,unsigned int,unsigned int,int const**,int) ;
 scalar_t__ FUNC_1 (struct adapter*,int const*,int,int *) ;
 int FUNC_2 (struct adapter*,int ,unsigned int,int,unsigned int,int const**,int*,int *,int) ;

int FUNC_3(struct adapter *VAR_1, unsigned int VAR_2,
    bool VAR_3, unsigned int VAR_4, const u8 **VAR_5,
    u16 *VAR_6, u64 *VAR_7, bool VAR_8)
{
 int VAR_9, VAR_10;

 VAR_9 = FUNC_2(VAR_1, VAR_1->mbox, VAR_2, VAR_3,
    VAR_4, VAR_5, VAR_6, VAR_7, VAR_8);
 if (VAR_9 < 0)
  return VAR_9;

 for (VAR_10 = 0; VAR_10 < VAR_4; VAR_10++) {
  if (VAR_6[VAR_10] != 0xffff) {
   if (FUNC_1(VAR_1, VAR_5[VAR_10], VAR_6[VAR_10], ((void*)0))) {
    VAR_9 = -VAR_0;
    goto error;
   }
  }
 }

 goto out;
error:
 FUNC_0(VAR_1, VAR_2, VAR_4, VAR_5, VAR_8);

out:

 return VAR_9;
}
