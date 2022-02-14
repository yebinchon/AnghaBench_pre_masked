
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vxge_ring {int napi; int rx_vector_no; scalar_t__ handle; } ;
struct __vxge_hw_channel {int dummy; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int FUNC_0 (struct vxge_ring*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct __vxge_hw_channel*,int ) ;
 int FUNC_3 (struct __vxge_hw_channel*,int ) ;

__attribute__((used)) static irqreturn_t FUNC_4(int VAR_1, void *VAR_2)
{
 struct vxge_ring *VAR_3 = (struct vxge_ring *)VAR_2;

 FUNC_0(VAR_3);

 FUNC_3((struct __vxge_hw_channel *)VAR_3->handle,
      VAR_3->rx_vector_no);

 FUNC_2((struct __vxge_hw_channel *)VAR_3->handle,
       VAR_3->rx_vector_no);

 FUNC_1(&VAR_3->napi);
 return VAR_0;
}
