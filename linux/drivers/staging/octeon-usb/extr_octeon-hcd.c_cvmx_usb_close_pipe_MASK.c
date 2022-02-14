
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct octeon_hcd {int dummy; } ;
struct cvmx_usb_pipe {int node; int transactions; } ;


 int VAR_0 ;
 int FUNC_0 (struct cvmx_usb_pipe*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct octeon_hcd *VAR_1,
          struct cvmx_usb_pipe *VAR_2)
{

 if (!FUNC_2(&VAR_2->transactions))
  return -VAR_0;

 FUNC_1(&VAR_2->node);
 FUNC_0(VAR_2);

 return 0;
}
