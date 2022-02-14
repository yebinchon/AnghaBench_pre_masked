
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qedi_uio_dev {int ll2_buf_size; int * ll2_ring; void* ll2_buf; int ll2_ring_size; void* uctrl; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_1 (int,int) ;
 int FUNC_2 (unsigned long) ;
 scalar_t__ FUNC_3 (int) ;
 int VAR_6 ;

__attribute__((used)) static int FUNC_4(struct qedi_uio_dev *VAR_7)
{
 int VAR_8 = 0;

 if (VAR_7->ll2_ring || VAR_7->ll2_buf)
  return VAR_8;


 VAR_7->uctrl = (void *)FUNC_3(VAR_1);
 if (!VAR_7->uctrl)
  return -VAR_0;


 VAR_7->ll2_ring_size = VAR_2;
 VAR_7->ll2_ring = (void *)FUNC_3(VAR_1 | VAR_4);
 if (!VAR_7->ll2_ring) {
  VAR_8 = -VAR_0;
  goto exit_alloc_ring;
 }


 VAR_7->ll2_buf_size = VAR_3 * VAR_6;
 VAR_7->ll2_buf_size = FUNC_0(VAR_7->ll2_buf_size);
 VAR_7->ll2_buf = (void *)FUNC_1(VAR_1 | VAR_4 |
       VAR_5, 2);
 if (!VAR_7->ll2_buf) {
  VAR_8 = -VAR_0;
  goto exit_alloc_buf;
 }
 return VAR_8;

exit_alloc_buf:
 FUNC_2((unsigned long)VAR_7->ll2_ring);
 VAR_7->ll2_ring = ((void*)0);
exit_alloc_ring:
 return VAR_8;
}
