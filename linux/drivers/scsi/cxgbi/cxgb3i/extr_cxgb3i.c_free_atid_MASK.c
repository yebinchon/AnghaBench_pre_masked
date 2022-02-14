
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cxgbi_sock {int atid; TYPE_1__* cdev; } ;
struct TYPE_2__ {int lldev; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct cxgbi_sock*,int ) ;
 scalar_t__ FUNC_2 (struct cxgbi_sock*,int ) ;
 int FUNC_3 (struct cxgbi_sock*) ;

__attribute__((used)) static inline void FUNC_4(struct cxgbi_sock *VAR_1)
{
 if (FUNC_2(VAR_1, VAR_0)) {
  FUNC_0(VAR_1->cdev->lldev, VAR_1->atid);
  FUNC_1(VAR_1, VAR_0);
  FUNC_3(VAR_1);
 }
}
