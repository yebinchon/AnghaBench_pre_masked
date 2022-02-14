
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* ops; } ;
struct ath10k {TYPE_2__ wmi; } ;
typedef int __le32 ;
struct TYPE_3__ {int (* map_svc_ext ) (int const*,unsigned long*,size_t) ;} ;


 int VAR_0 ;
 int FUNC_0 (int const*,unsigned long*,size_t) ;

__attribute__((used)) static inline int
FUNC_1(struct ath10k *VAR_1, const __le32 *VAR_2, unsigned long *VAR_3,
         size_t VAR_4)
{
 if (!VAR_1->wmi.ops->map_svc_ext)
  return -VAR_0;

 VAR_1->wmi.ops->map_svc_ext(VAR_2, VAR_3, VAR_4);
 return 0;
}
