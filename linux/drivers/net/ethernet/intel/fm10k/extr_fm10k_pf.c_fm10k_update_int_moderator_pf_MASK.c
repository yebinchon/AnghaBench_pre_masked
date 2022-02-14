
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_2__ {int num_vfs; } ;
struct fm10k_hw {TYPE_1__ iov; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct fm10k_hw*,int ) ;
 int FUNC_3 (struct fm10k_hw*,int ,scalar_t__) ;

__attribute__((used)) static void FUNC_4(struct fm10k_hw *VAR_3)
{
 u32 VAR_4;


 FUNC_3(VAR_3, VAR_0, 0);


 for (VAR_4 = VAR_2 - 1; VAR_4; VAR_4--) {
  if (!FUNC_2(VAR_3, FUNC_1(VAR_4)))
   break;
 }


 FUNC_3(VAR_3, FUNC_0(VAR_2), VAR_4);


 if (!VAR_3->iov.num_vfs)
  FUNC_3(VAR_3, FUNC_0(0), VAR_4);


 FUNC_3(VAR_3, VAR_0, VAR_1);
}
