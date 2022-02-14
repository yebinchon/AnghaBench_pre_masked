
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct esas2r_adapter {int * vda_buffer; int ppvda_buffer; TYPE_1__* pcid; } ;
typedef int dma_addr_t ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 long VAR_2 ;
 scalar_t__ FUNC_0 (int *,size_t,int *,int ) ;
 int FUNC_1 (int *,char const*,int) ;

int FUNC_2(struct esas2r_adapter *VAR_3, const char *VAR_4, long VAR_5,
       int VAR_6)
{





 if (!VAR_3->vda_buffer) {
  dma_addr_t VAR_7;
  VAR_3->vda_buffer = (u8 *)FUNC_0(&VAR_3->pcid->dev,
        (size_t)
        VAR_2,
        &VAR_7,
        VAR_1);

  VAR_3->ppvda_buffer = VAR_7;
 }

 if (!VAR_3->vda_buffer)
  return -VAR_0;

 if (VAR_5 > VAR_2)
  return 0;

 if (VAR_6 + VAR_5 > VAR_2)
  VAR_6 = VAR_2 - VAR_5;

 if (VAR_6 < 1)
  return 0;

 FUNC_1(VAR_3->vda_buffer + VAR_5, VAR_4, VAR_6);

 return VAR_6;
}
