
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wil_rx_status_compressed {int d0; } ;


 int FUNC_0 (int,int,int) ;
 int VAR_0 ;

__attribute__((used)) static inline int FUNC_1(void *VAR_1)
{
 if (!(((struct wil_rx_status_compressed *)VAR_1)->d0 &
     VAR_0))
  return 0;

 return FUNC_0(((struct wil_rx_status_compressed *)VAR_1)->d0,
       20, 21);
}
