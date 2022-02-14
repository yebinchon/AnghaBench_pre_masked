
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ccw_device {int dummy; } ;
struct ccw_dev_id {int ssid; int devno; } ;


 int FUNC_0 (struct ccw_device*,struct ccw_dev_id*) ;

__attribute__((used)) static inline u32 FUNC_1(struct ccw_device *VAR_0)
{
 struct ccw_dev_id VAR_1;
 u32 VAR_2;

 FUNC_0(VAR_0, &VAR_1);
 VAR_2 = VAR_1.devno;
 VAR_2 |= (u32) (VAR_1.ssid << 16);

 return VAR_2;
}
