
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u32 ;
struct dsaf_device {TYPE_1__** mac_cb; } ;
struct TYPE_2__ {int port_rst_off; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int FUNC_0 (struct dsaf_device*,size_t,size_t) ;

__attribute__((used)) static void FUNC_1(struct dsaf_device *VAR_4, u32 VAR_5,
          bool VAR_6)
{
 u32 VAR_7 = 0;
 u32 VAR_8;

 if (VAR_5 >= VAR_2)
  return;

 VAR_7 |= VAR_3;
 VAR_7 |= 0x2082082 << VAR_4->mac_cb[VAR_5]->port_rst_off;

 if (!VAR_6)
  VAR_8 = VAR_1;
 else
  VAR_8 = VAR_0;

 FUNC_0(VAR_4, VAR_8, VAR_7);
}
