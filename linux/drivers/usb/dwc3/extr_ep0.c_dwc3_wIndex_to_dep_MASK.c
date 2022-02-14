
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct dwc3_ep {int flags; } ;
struct dwc3 {struct dwc3_ep** eps; } ;
typedef int __le16 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static struct dwc3_ep *FUNC_1(struct dwc3 *VAR_4, __le16 VAR_5)
{
 struct dwc3_ep *VAR_6;
 u32 VAR_7 = FUNC_0(VAR_5);
 u32 VAR_8;

 VAR_8 = (VAR_7 & VAR_3) << 1;
 if ((VAR_7 & VAR_2) == VAR_1)
  VAR_8 |= 1;

 VAR_6 = VAR_4->eps[VAR_8];
 if (VAR_6->flags & VAR_0)
  return VAR_6;

 return ((void*)0);
}
