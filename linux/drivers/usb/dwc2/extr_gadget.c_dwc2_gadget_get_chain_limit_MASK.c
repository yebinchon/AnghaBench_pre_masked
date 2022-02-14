
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dwc2_hsotg_ep {int isochronous; scalar_t__ dir_in; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;

__attribute__((used)) static unsigned int FUNC_0(struct dwc2_hsotg_ep *VAR_5)
{
 int VAR_6 = VAR_5->isochronous;
 unsigned int VAR_7;

 if (VAR_6)
  VAR_7 = (VAR_5->dir_in ? VAR_1 :
        VAR_0) *
        VAR_4;
 else
  VAR_7 = VAR_2 * VAR_3;

 return VAR_7;
}
