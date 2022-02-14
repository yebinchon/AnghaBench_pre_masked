
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct fwnode_handle {int dummy; } ;


 int FUNC_0 (scalar_t__*) ;
 int FUNC_1 (scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (struct fwnode_handle*,char*) ;
 int FUNC_3 (struct fwnode_handle*,char*,scalar_t__*,int) ;

__attribute__((used)) static int FUNC_4(struct fwnode_handle *VAR_4,
         int VAR_5)
{
 u32 VAR_6[VAR_1];
 int VAR_7, VAR_8, VAR_9;

 VAR_8 = FUNC_2(VAR_4, "led-sources");
 if (VAR_8 < 0)
  return VAR_5;
 else if (VAR_8 > FUNC_0(VAR_6))
  return -VAR_0;

 VAR_7 = FUNC_3(VAR_4, "led-sources", VAR_6,
          VAR_8);
 if (VAR_7)
  return VAR_7;

 for (VAR_9 = 0; VAR_9 < VAR_8; VAR_9++) {
  if (VAR_6[VAR_9] < VAR_2 || VAR_6[VAR_9] > VAR_3)
   return -VAR_0;

  VAR_7 |= FUNC_1(VAR_6[VAR_9]);
 }

 return VAR_7;
}
