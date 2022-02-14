
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct qe_udc {int lock; int driver; int gadget; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct qe_udc*,scalar_t__) ;
 int FUNC_3 (int *,int ) ;

__attribute__((used)) static int FUNC_4(struct qe_udc *VAR_1)
{
 u8 VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++)
  FUNC_2(VAR_1, VAR_2);


 FUNC_1(&VAR_1->lock);
 FUNC_3(&VAR_1->gadget, VAR_1->driver);
 FUNC_0(&VAR_1->lock);

 return 0;
}
