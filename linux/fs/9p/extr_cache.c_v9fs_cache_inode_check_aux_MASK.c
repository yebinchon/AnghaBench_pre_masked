
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_2__ {int version; } ;
struct v9fs_inode {TYPE_1__ qid; } ;
typedef int loff_t ;
typedef enum fscache_checkaux { ____Placeholder_fscache_checkaux } fscache_checkaux ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (void const*,int *,int) ;

__attribute__((used)) static enum
fscache_checkaux FUNC_1(void *VAR_2,
         const void *VAR_3,
         uint16_t VAR_4,
         loff_t VAR_5)
{
 const struct v9fs_inode *VAR_6 = VAR_2;

 if (VAR_4 != sizeof(VAR_6->qid.version))
  return VAR_0;

 if (FUNC_0(VAR_3, &VAR_6->qid.version,
     sizeof(VAR_6->qid.version)))
  return VAR_0;

 return VAR_1;
}
