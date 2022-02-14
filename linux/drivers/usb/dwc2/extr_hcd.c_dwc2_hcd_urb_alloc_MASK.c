
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dwc2_hsotg {int dummy; } ;
struct dwc2_hcd_urb {int packet_count; } ;
typedef int gfp_t ;


 int VAR_0 ;
 struct dwc2_hcd_urb* FUNC_0 (int ,int ) ;
 int FUNC_1 (struct dwc2_hcd_urb*,int ,int) ;

__attribute__((used)) static struct dwc2_hcd_urb *FUNC_2(struct dwc2_hsotg *VAR_1,
            int VAR_2,
            gfp_t VAR_3)
{
 struct dwc2_hcd_urb *VAR_4;

 VAR_4 = FUNC_0(FUNC_1(VAR_4, VAR_0, VAR_2), VAR_3);
 if (VAR_4)
  VAR_4->packet_count = VAR_2;
 return VAR_4;
}
