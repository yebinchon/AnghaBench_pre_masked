
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u32 ;
struct media_intf_devnode {int intf; void* minor; void* major; } ;
struct media_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct media_intf_devnode* FUNC_0 (int,int ) ;
 int FUNC_1 (struct media_device*,int *,int ,void*,void*) ;

struct media_intf_devnode *FUNC_2(struct media_device *VAR_2,
      u32 VAR_3, u32 VAR_4,
      u32 VAR_5, u32 VAR_6)
{
 struct media_intf_devnode *VAR_7;

 VAR_7 = FUNC_0(sizeof(*VAR_7), VAR_0);
 if (!VAR_7)
  return ((void*)0);

 VAR_7->major = VAR_5;
 VAR_7->minor = VAR_6;

 FUNC_1(VAR_2, &VAR_7->intf, VAR_1,
        VAR_3, VAR_4);

 return VAR_7;
}
