
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef void* u32 ;
struct mxcmci_host {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_0 (int ) ;
 int FUNC_1 (int *,void**,int) ;
 unsigned int FUNC_2 (struct mxcmci_host*,int) ;
 int FUNC_3 (struct mxcmci_host*,int ) ;

__attribute__((used)) static int FUNC_4(struct mxcmci_host *VAR_3, void *VAR_4, int VAR_5)
{
 unsigned int VAR_6;
 u32 *VAR_7 = VAR_4;

 while (VAR_5 > 3) {
  VAR_6 = FUNC_2(VAR_3,
    VAR_1 | VAR_2);
  if (VAR_6)
   return VAR_6;
  *VAR_7++ = FUNC_0(FUNC_3(VAR_3, VAR_0));
  VAR_5 -= 4;
 }

 if (VAR_5) {
  u8 *VAR_8 = (u8 *)VAR_7;
  u32 VAR_9;

  VAR_6 = FUNC_2(VAR_3,
    VAR_1 | VAR_2);
  if (VAR_6)
   return VAR_6;
  VAR_9 = FUNC_0(FUNC_3(VAR_3, VAR_0));
  FUNC_1(VAR_8, &VAR_9, VAR_5);
 }

 return 0;
}
