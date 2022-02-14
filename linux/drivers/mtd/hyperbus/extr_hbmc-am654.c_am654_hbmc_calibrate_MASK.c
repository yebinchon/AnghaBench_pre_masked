
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct map_info {int dummy; } ;
struct hyperbus_device {struct map_info map; } ;
struct cfi_private {int interleave; int device_type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,struct map_info*,struct cfi_private*) ;
 int FUNC_1 (struct map_info*,int ,struct cfi_private*) ;
 int FUNC_2 (int,int,int ,struct map_info*,struct cfi_private*,int ,int *) ;

__attribute__((used)) static int FUNC_3(struct hyperbus_device *VAR_2)
{
 struct map_info *VAR_3 = &VAR_2->map;
 struct cfi_private VAR_4;
 int VAR_5 = VAR_0;
 int VAR_6 = 0;
 int VAR_7;

 VAR_4.interleave = 1;
 VAR_4.device_type = VAR_1;
 FUNC_2(0xF0, 0, 0, VAR_3, &VAR_4, VAR_4.device_type, ((void*)0));
 FUNC_2(0x98, 0x55, 0, VAR_3, &VAR_4, VAR_4.device_type, ((void*)0));

 while (VAR_5--) {
  VAR_7 = FUNC_1(VAR_3, 0, &VAR_4);
  if (VAR_7)
   VAR_6++;
  else
   VAR_6 = 0;
  if (VAR_6 == 5)
   break;
 }

 FUNC_0(0, VAR_3, &VAR_4);

 return VAR_7;
}
