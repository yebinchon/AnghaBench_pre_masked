
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef void* u16 ;
struct dwc2_hsotg {int dev; } ;
struct TYPE_2__ {void* maxp_mult; void* maxp; scalar_t__ pipe_dir; scalar_t__ pipe_type; scalar_t__ ep_num; scalar_t__ dev_addr; } ;
struct dwc2_hcd_urb {TYPE_1__ pipe_info; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 () ;
 int FUNC_1 (int ,char*,scalar_t__,scalar_t__,scalar_t__,scalar_t__,void*,void*) ;

__attribute__((used)) static void FUNC_2(struct dwc2_hsotg *VAR_2,
          struct dwc2_hcd_urb *VAR_3, u8 VAR_4,
          u8 VAR_5, u8 VAR_6, u8 VAR_7,
          u16 VAR_8, u16 VAR_9)
{
 if (FUNC_0() ||
     VAR_6 == VAR_0 ||
     VAR_6 == VAR_1)
  FUNC_1(VAR_2->dev,
    "addr=%d, ep_num=%d, ep_dir=%1x, ep_type=%1x, maxp=%d (%d mult)\n",
    VAR_4, VAR_5, VAR_7, VAR_6, VAR_8, VAR_9);
 VAR_3->pipe_info.dev_addr = VAR_4;
 VAR_3->pipe_info.ep_num = VAR_5;
 VAR_3->pipe_info.pipe_type = VAR_6;
 VAR_3->pipe_info.pipe_dir = VAR_7;
 VAR_3->pipe_info.maxp = VAR_8;
 VAR_3->pipe_info.maxp_mult = VAR_9;
}
