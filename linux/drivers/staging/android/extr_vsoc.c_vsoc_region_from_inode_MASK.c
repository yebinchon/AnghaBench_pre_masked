
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vsoc_device_region {int dummy; } ;
struct inode {int dummy; } ;
struct TYPE_2__ {struct vsoc_device_region* regions; } ;


 size_t FUNC_0 (struct inode*) ;
 TYPE_1__ VAR_0 ;

__attribute__((used)) static
inline struct vsoc_device_region *FUNC_1(struct inode *VAR_1)
{
 return &VAR_0.regions[FUNC_0(VAR_1)];
}
