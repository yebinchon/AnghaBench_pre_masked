
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct ocotp_priv {int nvmem_ipc; TYPE_1__* data; } ;
struct TYPE_2__ {int nregs; scalar_t__ devtype; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,int,int*) ;
 int FUNC_1 (void*) ;
 void* FUNC_2 (int,int ) ;
 int FUNC_3 (void*,int *,size_t) ;
 int FUNC_4 (unsigned int,int) ;

__attribute__((used)) static int FUNC_5(void *VAR_3, unsigned int VAR_4,
         void *VAR_5, size_t VAR_6)
{
 struct ocotp_priv *VAR_7 = VAR_3;
 u32 VAR_8, VAR_9, VAR_10;
 u32 *VAR_11;
 void *VAR_12;
 int VAR_13, VAR_14;

 VAR_9 = VAR_4 >> 2;
 VAR_10 = FUNC_4((VAR_4 % 4) + VAR_6, 4);
 VAR_8 = VAR_10 >> 2;

 if (VAR_8 > (VAR_7->data->nregs - VAR_9))
  VAR_8 = VAR_7->data->nregs - VAR_9;

 VAR_12 = FUNC_2(VAR_10, VAR_1);
 if (!VAR_12)
  return -VAR_0;

 VAR_11 = VAR_12;

 for (VAR_13 = VAR_9; VAR_13 < (VAR_9 + VAR_8); VAR_13++) {
  if (VAR_7->data->devtype == VAR_2) {
   if ((VAR_13 > 271) && (VAR_13 < 544)) {
    *VAR_11++ = 0;
    continue;
   }
  }

  VAR_14 = FUNC_0(VAR_7->nvmem_ipc, VAR_13, VAR_11);
  if (VAR_14) {
   FUNC_1(VAR_12);
   return VAR_14;
  }
  VAR_11++;
 }

 FUNC_3(VAR_5, (u8 *)VAR_12 + VAR_4 % 4, VAR_6);

 FUNC_1(VAR_12);

 return 0;
}
