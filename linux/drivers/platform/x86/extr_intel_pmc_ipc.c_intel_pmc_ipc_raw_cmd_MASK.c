
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_2__ {scalar_t__ ipc_base; int * dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 () ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (int) ;
 TYPE_1__ VAR_7 ;
 int VAR_8 ;
 int FUNC_4 (int*,int *,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int,scalar_t__) ;

int FUNC_8(u32 VAR_9, u32 VAR_10, u8 *VAR_11, u32 VAR_12, u32 *VAR_13,
     u32 VAR_14, u32 VAR_15, u32 VAR_16)
{
 u32 VAR_17[4] = { 0 };
 int VAR_18;
 int VAR_19;

 if (VAR_12 > VAR_4 || VAR_14 > VAR_4 / 4)
  return -VAR_0;

 FUNC_5(&VAR_8);
 if (VAR_7.dev == ((void*)0)) {
  FUNC_6(&VAR_8);
  return -VAR_1;
 }
 FUNC_4(VAR_17, VAR_11, VAR_12);
 FUNC_7(VAR_15, VAR_7.ipc_base + VAR_5);
 FUNC_7(VAR_16, VAR_7.ipc_base + VAR_6);

 for (VAR_19 = 0; VAR_19 < ((VAR_12 + 3) / 4); VAR_19++)
  FUNC_2(VAR_17[VAR_19], 4 * VAR_19);
 FUNC_3((VAR_12 << VAR_2) |
   (VAR_10 << VAR_3) | VAR_9);
 VAR_18 = FUNC_0();
 if (!VAR_18) {

  for (VAR_19 = 0; VAR_19 < VAR_14; VAR_19++)
   *VAR_13++ = FUNC_1(4 * VAR_19);
 }
 FUNC_6(&VAR_8);

 return VAR_18;
}
