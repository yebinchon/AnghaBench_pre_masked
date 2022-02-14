
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u64 ;
typedef int u32 ;
struct ehea_port {int logical_port_id; TYPE_1__* adapter; } ;
struct TYPE_2__ {int handle; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ,int ,int,scalar_t__,int ,int ) ;

__attribute__((used)) static u64 FUNC_1(struct ehea_port *VAR_4, u64 VAR_5,
         u32 VAR_6)
{
 u64 VAR_7;
 u8 VAR_8;

 VAR_8 = VAR_0 | VAR_2;
 if (VAR_5 == 0)
  VAR_8 |= VAR_1;

 VAR_7 = FUNC_0(VAR_4->adapter->handle,
         VAR_4->logical_port_id,
         VAR_8, VAR_5, 0, VAR_6);
 if (VAR_7)
  goto out;

 VAR_8 = VAR_0 | VAR_3;
 if (VAR_5 == 0)
  VAR_8 |= VAR_1;

 VAR_7 = FUNC_0(VAR_4->adapter->handle,
         VAR_4->logical_port_id,
         VAR_8, VAR_5, 0, VAR_6);
out:
 return VAR_7;
}
