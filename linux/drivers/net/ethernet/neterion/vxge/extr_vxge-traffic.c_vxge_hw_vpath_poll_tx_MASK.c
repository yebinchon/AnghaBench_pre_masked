
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct __vxge_hw_channel {int userdata; } ;
struct __vxge_hw_fifo {int (* callback ) (struct __vxge_hw_fifo*,void*,int,int ,struct sk_buff***,int,int*) ;struct __vxge_hw_channel channel; } ;
typedef enum vxge_hw_status { ____Placeholder_vxge_hw_status } vxge_hw_status ;
typedef enum vxge_hw_fifo_tcode { ____Placeholder_vxge_hw_fifo_tcode } vxge_hw_fifo_tcode ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct __vxge_hw_fifo*,void*,int,int ,struct sk_buff***,int,int*) ;
 int FUNC_1 (struct __vxge_hw_fifo*,void**,int*) ;

enum vxge_hw_status FUNC_2(struct __vxge_hw_fifo *VAR_2,
     struct sk_buff ***VAR_3, int VAR_4,
     int *VAR_5)
{
 enum vxge_hw_fifo_tcode VAR_6;
 void *VAR_7;
 enum vxge_hw_status VAR_8 = VAR_1;
 struct __vxge_hw_channel *VAR_9;

 VAR_9 = &VAR_2->channel;

 VAR_8 = FUNC_1(VAR_2,
    &VAR_7, &VAR_6);
 if (VAR_8 == VAR_1)
  if (VAR_2->callback(VAR_2, VAR_7, VAR_6,
   VAR_9->userdata, VAR_3, VAR_4, VAR_5) != VAR_1)
   VAR_8 = VAR_0;

 return VAR_8;
}
