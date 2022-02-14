
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct t3cdev {int dummy; } ;
struct cxgbi_device {int flags; } ;


 int VAR_0 ;
 struct cxgbi_device* FUNC_0 (struct t3cdev*) ;
 int FUNC_1 (struct cxgbi_device*) ;
 int FUNC_2 (char*,struct cxgbi_device*,int) ;

__attribute__((used)) static void FUNC_3(struct t3cdev *VAR_1)
{
 struct cxgbi_device *VAR_2 = FUNC_0(VAR_1);

 if (!VAR_2 || VAR_2->flags & VAR_0) {
  FUNC_2("0x%p close, f 0x%x.\n", VAR_2, VAR_2 ? VAR_2->flags : 0);
  return;
 }

 FUNC_1(VAR_2);
}
