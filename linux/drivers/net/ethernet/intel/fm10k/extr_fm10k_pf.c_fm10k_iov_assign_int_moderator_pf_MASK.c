
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct TYPE_2__ {scalar_t__ num_vfs; } ;
struct fm10k_hw {TYPE_1__ iov; } ;
typedef int s32 ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct fm10k_hw*,int ) ;
 scalar_t__ FUNC_3 (struct fm10k_hw*) ;
 scalar_t__ FUNC_4 (struct fm10k_hw*,scalar_t__) ;
 int FUNC_5 (struct fm10k_hw*,int ,scalar_t__) ;

__attribute__((used)) static s32 FUNC_6(struct fm10k_hw *VAR_1, u16 VAR_2)
{
 u16 VAR_3, VAR_4, VAR_5;


 if (VAR_2 >= VAR_1->iov.num_vfs)
  return VAR_0;


 VAR_3 = FUNC_4(VAR_1, VAR_2);
 VAR_4 = VAR_3 + FUNC_3(VAR_1);


 for (VAR_5 = VAR_4 - 1; VAR_5 > VAR_3; VAR_5--) {
  if (!FUNC_2(VAR_1, FUNC_1(VAR_5)))
   break;
 }


 if (VAR_2 == (VAR_1->iov.num_vfs - 1))
  FUNC_5(VAR_1, FUNC_0(0), VAR_5);
 else
  FUNC_5(VAR_1, FUNC_0(VAR_4), VAR_5);

 return 0;
}
