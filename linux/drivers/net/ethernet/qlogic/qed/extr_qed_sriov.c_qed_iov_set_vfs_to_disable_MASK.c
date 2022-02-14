
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u16 ;
struct qed_dev {TYPE_1__* p_iov_info; } ;
struct TYPE_2__ {scalar_t__ total_vfs; } ;


 int FUNC_0 (struct qed_dev*) ;
 int FUNC_1 (struct qed_dev*,scalar_t__,int ) ;

__attribute__((used)) static void FUNC_2(struct qed_dev *VAR_0, u8 VAR_1)
{
 u16 VAR_2;

 if (!FUNC_0(VAR_0))
  return;

 for (VAR_2 = 0; VAR_2 < VAR_0->p_iov_info->total_vfs; VAR_2++)
  FUNC_1(VAR_0, VAR_2, VAR_1);
}
