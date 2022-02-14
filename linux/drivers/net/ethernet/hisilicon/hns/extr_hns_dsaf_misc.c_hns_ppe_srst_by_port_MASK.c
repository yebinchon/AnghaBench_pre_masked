
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u32 ;
struct dsaf_device {TYPE_1__** mac_cb; } ;
struct TYPE_2__ {size_t port_rst_off; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 (struct dsaf_device*,size_t,size_t) ;

__attribute__((used)) static void FUNC_1(struct dsaf_device *VAR_3, u32 VAR_4,
     bool VAR_5)
{
 u32 VAR_6 = 0;
 u32 VAR_7;

 VAR_6 |= VAR_2 << VAR_3->mac_cb[VAR_4]->port_rst_off;

 if (!VAR_5)
  VAR_7 = VAR_1;
 else
  VAR_7 = VAR_0;

 FUNC_0(VAR_3, VAR_7, VAR_6);
}
