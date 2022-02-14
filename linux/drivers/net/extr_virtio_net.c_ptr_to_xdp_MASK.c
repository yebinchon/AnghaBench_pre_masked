
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xdp_frame {int dummy; } ;


 unsigned long VAR_0 ;

__attribute__((used)) static struct xdp_frame *FUNC_0(void *VAR_1)
{
 return (struct xdp_frame *)((unsigned long)VAR_1 & ~VAR_0);
}
