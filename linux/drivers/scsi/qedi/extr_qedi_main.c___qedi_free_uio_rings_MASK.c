
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qedi_uio_dev {int * ll2_buf; int * ll2_ring; int * uctrl; } ;


 int FUNC_0 (unsigned long) ;
 int FUNC_1 (unsigned long,int) ;

__attribute__((used)) static void FUNC_2(struct qedi_uio_dev *VAR_0)
{
 if (VAR_0->uctrl) {
  FUNC_0((unsigned long)VAR_0->uctrl);
  VAR_0->uctrl = ((void*)0);
 }

 if (VAR_0->ll2_ring) {
  FUNC_0((unsigned long)VAR_0->ll2_ring);
  VAR_0->ll2_ring = ((void*)0);
 }

 if (VAR_0->ll2_buf) {
  FUNC_1((unsigned long)VAR_0->ll2_buf, 2);
  VAR_0->ll2_buf = ((void*)0);
 }
}
