
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct us_data {unsigned int recv_intr_pipe; TYPE_1__* current_urb; int ep_bInterval; int pusb_dev; } ;
struct TYPE_2__ {int actual_length; } ;


 int FUNC_0 (struct us_data*,unsigned int,unsigned int,int,int ) ;
 int FUNC_1 (TYPE_1__*,int ,unsigned int,void*,unsigned int,int ,int *,int ) ;
 unsigned int FUNC_2 (int ,unsigned int,int ) ;
 int FUNC_3 (unsigned int) ;
 int VAR_0 ;
 int FUNC_4 (struct us_data*,char*,unsigned int) ;
 int FUNC_5 (struct us_data*,int ) ;

__attribute__((used)) static int FUNC_6(struct us_data *VAR_1, void *VAR_2,
      unsigned int VAR_3)
{
 int VAR_4;
 unsigned int VAR_5 = VAR_1->recv_intr_pipe;
 unsigned int VAR_6;

 FUNC_4(VAR_1, "xfer %u bytes\n", VAR_3);


 VAR_6 = FUNC_2(VAR_1->pusb_dev, VAR_5, FUNC_3(VAR_5));
 if (VAR_6 > VAR_3)
  VAR_6 = VAR_3;


 FUNC_1(VAR_1->current_urb, VAR_1->pusb_dev, VAR_5, VAR_2,
   VAR_6, VAR_0, ((void*)0),
   VAR_1->ep_bInterval);
 VAR_4 = FUNC_5(VAR_1, 0);

 return FUNC_0(VAR_1, VAR_5, VAR_3, VAR_4,
   VAR_1->current_urb->actual_length);
}
