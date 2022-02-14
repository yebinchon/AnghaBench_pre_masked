
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef char u64 ;
typedef int u16 ;
struct cxl_afu {int crs_len; TYPE_1__* guest; } ;
struct TYPE_2__ {int handle; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,int,char,int ,int) ;
 int FUNC_2 (unsigned long) ;
 unsigned long FUNC_3 (int ) ;
 char FUNC_4 (int *) ;
 char FUNC_5 (unsigned int*) ;
 char FUNC_6 (char*) ;
 scalar_t__ FUNC_7 (int) ;
 int FUNC_8 (void*) ;

__attribute__((used)) static int FUNC_9(int VAR_4, struct cxl_afu *VAR_5, int VAR_6,
   u64 VAR_7, u64 *VAR_8)
{
 unsigned long VAR_9;
 char VAR_10;
 int VAR_11 = 0;

 if (VAR_5->crs_len < VAR_4)
  return -VAR_0;

 if (FUNC_7(VAR_7 >= VAR_5->crs_len))
  return -VAR_2;

 VAR_9 = FUNC_3(VAR_3);
 if (!VAR_9)
  return -VAR_1;

 VAR_11 = FUNC_1(VAR_5->guest->handle, VAR_6, VAR_7,
   FUNC_8((void *)VAR_9), VAR_4);
 if (VAR_11)
  goto err;

 switch (VAR_4) {
 case 1:
  VAR_10 = *((char *) VAR_9);
  *VAR_8 = VAR_10;
  break;
 case 2:
  *VAR_8 = FUNC_4((u16 *)VAR_9);
  break;
 case 4:
  *VAR_8 = FUNC_5((unsigned *)VAR_9);
  break;
 case 8:
  *VAR_8 = FUNC_6((u64 *)VAR_9);
  break;
 default:
  FUNC_0(1);
 }
err:
 FUNC_2(VAR_9);
 return VAR_11;
}
