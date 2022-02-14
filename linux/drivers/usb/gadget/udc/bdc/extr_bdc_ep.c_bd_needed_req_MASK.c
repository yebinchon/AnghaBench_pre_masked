
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int length; } ;
struct bdc_req {TYPE_1__ usb_req; } ;


 int VAR_0 ;

__attribute__((used)) static inline int FUNC_0(struct bdc_req *VAR_1)
{
 int VAR_2 = 0;
 int VAR_3;


 if (VAR_1->usb_req.length == 0)
  return 1;


 VAR_3 = VAR_1->usb_req.length % VAR_0;
 if (VAR_3)
  VAR_2++;


 VAR_3 = VAR_1->usb_req.length / VAR_0;
 VAR_2 += VAR_3;

 return VAR_2;
}
