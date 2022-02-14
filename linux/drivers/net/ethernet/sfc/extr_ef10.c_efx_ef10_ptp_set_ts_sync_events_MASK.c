
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct efx_nic {int dummy; } ;
typedef struct efx_channel efx_channel ;


 int FUNC_0 (struct efx_channel*,int) ;
 int FUNC_1 (struct efx_channel*,int) ;
 struct efx_channel* FUNC_2 (struct efx_nic*) ;

__attribute__((used)) static int FUNC_3(struct efx_nic *VAR_0, bool VAR_1,
        bool VAR_2)
{
 int (*VAR_3)(struct efx_channel *VAR_4, bool VAR_5);
 struct efx_channel *VAR_6;

 VAR_3 = VAR_1 ?
       FUNC_1 :
       FUNC_0;

 VAR_6 = FUNC_2(VAR_0);
 if (VAR_6) {
  int VAR_7 = VAR_3(VAR_6, VAR_2);
  if (VAR_1 && VAR_7 != 0) {
   FUNC_3(VAR_0, 0, VAR_2);
   return VAR_7;
  }
 }

 return 0;
}
