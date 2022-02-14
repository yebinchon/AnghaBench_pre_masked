
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct octeon_hcd {int dummy; } ;
struct cvmx_usb_pipe {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct cvmx_usb_pipe* FUNC_0 (struct octeon_hcd*,int ) ;

__attribute__((used)) static struct cvmx_usb_pipe *FUNC_1(struct octeon_hcd *VAR_4,
      int VAR_5)
{
 struct cvmx_usb_pipe *VAR_6;


 if (VAR_5) {





  VAR_6 = FUNC_0(VAR_4,
      VAR_3);
  if (VAR_6)
   return VAR_6;
  VAR_6 = FUNC_0(VAR_4,
      VAR_2);
  if (VAR_6)
   return VAR_6;
 }
 VAR_6 = FUNC_0(VAR_4, VAR_1);
 if (VAR_6)
  return VAR_6;
 return FUNC_0(VAR_4, VAR_0);
}
