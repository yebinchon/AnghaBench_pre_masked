
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cnic_uio_dev {int pdev; int cnic_uinfo; } ;


 int FUNC_0 (struct cnic_uio_dev*) ;
 int FUNC_1 (struct cnic_uio_dev*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct cnic_uio_dev *VAR_0)
{
 FUNC_3(&VAR_0->cnic_uinfo);

 FUNC_0(VAR_0);

 FUNC_2(VAR_0->pdev);
 FUNC_1(VAR_0);
}
