
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef enum omap_plane { ____Placeholder_omap_plane } omap_plane ;
struct TYPE_4__ {TYPE_1__* feat; } ;
struct TYPE_3__ {scalar_t__ set_max_preload; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*,int,int,int,int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int,int ,int ) ;
 int VAR_3 ;
 int FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (int) ;
 TYPE_2__ VAR_4 ;
 int FUNC_6 (int ,int) ;
 int FUNC_7 () ;
 int FUNC_8 (int ,int *,int *) ;
 scalar_t__ FUNC_9 (int ) ;
 int FUNC_10 (int,int) ;

void FUNC_11(enum omap_plane VAR_5, u32 VAR_6, u32 VAR_7)
{
 u8 VAR_8, VAR_9, VAR_10, VAR_11;
 u32 VAR_12;

 VAR_12 = FUNC_7();

 FUNC_5(VAR_6 % VAR_12 != 0);
 FUNC_5(VAR_7 % VAR_12 != 0);

 VAR_6 /= VAR_12;
 VAR_7 /= VAR_12;

 FUNC_8(VAR_1, &VAR_8, &VAR_9);
 FUNC_8(VAR_2, &VAR_10, &VAR_11);

 FUNC_2("fifo(%d) threshold (bytes), old %u/%u, new %u/%u\n",
   VAR_5,
   FUNC_4(FUNC_0(VAR_5),
    VAR_10, VAR_11) * VAR_12,
   FUNC_4(FUNC_0(VAR_5),
    VAR_8, VAR_9) * VAR_12,
   VAR_6 * VAR_12, VAR_7 * VAR_12);

 FUNC_6(FUNC_0(VAR_5),
   FUNC_3(VAR_7, VAR_8, VAR_9) |
   FUNC_3(VAR_6, VAR_10, VAR_11));






 if (FUNC_9(VAR_0) && VAR_4.feat->set_max_preload &&
   VAR_5 != VAR_3)
  FUNC_6(FUNC_1(VAR_5), FUNC_10(VAR_7, 0xfffu));
}
