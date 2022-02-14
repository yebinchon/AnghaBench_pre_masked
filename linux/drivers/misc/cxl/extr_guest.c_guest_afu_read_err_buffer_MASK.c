
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct cxl_afu {TYPE_1__* guest; } ;
typedef int ssize_t ;
typedef int loff_t ;
struct TYPE_2__ {int handle; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int,int ,size_t) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (char*,void*,size_t) ;
 int FUNC_4 (void*) ;

__attribute__((used)) static ssize_t FUNC_5(struct cxl_afu *VAR_3, char *VAR_4,
     loff_t VAR_5, size_t VAR_6)
{
 void *VAR_7 = ((void*)0);
 int VAR_8 = 0;

 VAR_7 = (void *) FUNC_2(VAR_2);
 if (!VAR_7)
  return -VAR_0;

 VAR_8 = FUNC_0(VAR_3->guest->handle,
          VAR_5 & 0x7,
          FUNC_4(VAR_7),
          VAR_6);
 if (VAR_8)
  goto err;

 if (VAR_6 > VAR_1)
  VAR_6 = VAR_1 - (VAR_5 & 0x7);
 FUNC_3(VAR_4, VAR_7, VAR_6);
err:
 FUNC_1((u64)VAR_7);

 return VAR_8;
}
