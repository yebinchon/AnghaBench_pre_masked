
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vxge_fifo {int tx_vector_no; scalar_t__ handle; } ;
struct __vxge_hw_channel {int dummy; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int FUNC_0 (struct vxge_fifo*) ;
 int FUNC_1 (struct vxge_fifo*) ;
 int FUNC_2 (struct __vxge_hw_channel*,int ) ;
 int FUNC_3 (struct __vxge_hw_channel*,int ) ;
 int FUNC_4 (struct __vxge_hw_channel*,int ) ;

__attribute__((used)) static irqreturn_t FUNC_5(int VAR_1, void *VAR_2)
{
 struct vxge_fifo *VAR_3 = (struct vxge_fifo *)VAR_2;

 FUNC_1(VAR_3);

 FUNC_3((struct __vxge_hw_channel *)VAR_3->handle,
      VAR_3->tx_vector_no);

 FUNC_2((struct __vxge_hw_channel *)VAR_3->handle,
       VAR_3->tx_vector_no);

 FUNC_0(VAR_3);

 FUNC_4((struct __vxge_hw_channel *)VAR_3->handle,
        VAR_3->tx_vector_no);

 return VAR_0;
}
