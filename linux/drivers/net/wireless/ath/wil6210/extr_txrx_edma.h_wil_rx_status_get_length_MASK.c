
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wil_rx_status_compressed {int length; } ;
typedef int __le16 ;



__attribute__((used)) static inline __le16 FUNC_0(void *VAR_0)
{
 return ((struct wil_rx_status_compressed *)VAR_0)->length;
}
