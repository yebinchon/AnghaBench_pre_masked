
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int val ;
typedef int u32 ;
typedef int u16 ;
struct sky2_hw {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (void*,int *,int ) ;
 int FUNC_1 (int,size_t) ;
 int FUNC_2 (struct sky2_hw*,scalar_t__) ;
 int FUNC_3 (struct sky2_hw*,scalar_t__,int) ;
 int FUNC_4 (struct sky2_hw*,int,int ) ;

__attribute__((used)) static int FUNC_5(struct sky2_hw *VAR_2, int VAR_3, void *VAR_4,
    u16 VAR_5, size_t VAR_6)
{
 int VAR_7 = 0;

 while (VAR_6 > 0) {
  u32 VAR_8;

  FUNC_3(VAR_2, VAR_3 + VAR_0, VAR_5);
  VAR_7 = FUNC_4(VAR_2, VAR_3, 0);
  if (VAR_7)
   break;

  VAR_8 = FUNC_2(VAR_2, VAR_3 + VAR_1);

  FUNC_0(VAR_4, &VAR_8, FUNC_1(sizeof(VAR_8), VAR_6));
  VAR_5 += sizeof(u32);
  VAR_4 += sizeof(u32);
  VAR_6 -= sizeof(u32);
 }

 return VAR_7;
}
