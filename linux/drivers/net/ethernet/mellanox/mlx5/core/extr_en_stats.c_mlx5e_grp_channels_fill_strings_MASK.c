
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_8__ ;
typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_9__ {int ever_used; } ;
struct mlx5e_priv {int max_nch; int max_opened_tc; int** channel_tc2txq; TYPE_1__ xsk; } ;
struct TYPE_16__ {char* format; } ;
struct TYPE_15__ {char* format; } ;
struct TYPE_14__ {char* format; } ;
struct TYPE_13__ {char* format; } ;
struct TYPE_12__ {char* format; } ;
struct TYPE_11__ {char* format; } ;
struct TYPE_10__ {char* format; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 TYPE_8__* VAR_8 ;
 TYPE_7__* VAR_9 ;
 TYPE_6__* VAR_10 ;
 int FUNC_0 (int *,char*,int) ;
 TYPE_5__* VAR_11 ;
 TYPE_4__* VAR_12 ;
 TYPE_3__* VAR_13 ;
 TYPE_2__* VAR_14 ;

__attribute__((used)) static int FUNC_1(struct mlx5e_priv *VAR_15, u8 *VAR_16,
        int VAR_17)
{
 bool VAR_18 = VAR_15->xsk.ever_used;
 int VAR_19 = VAR_15->max_nch;
 int VAR_20, VAR_21, VAR_22;

 for (VAR_20 = 0; VAR_20 < VAR_19; VAR_20++)
  for (VAR_21 = 0; VAR_21 < VAR_1; VAR_21++)
   FUNC_0(VAR_16 + (VAR_17++) * VAR_0,
    VAR_8[VAR_21].format, VAR_20);

 for (VAR_20 = 0; VAR_20 < VAR_19; VAR_20++) {
  for (VAR_21 = 0; VAR_21 < VAR_2; VAR_21++)
   FUNC_0(VAR_16 + (VAR_17++) * VAR_0,
    VAR_9[VAR_21].format, VAR_20);
  for (VAR_21 = 0; VAR_21 < VAR_6 * VAR_18; VAR_21++)
   FUNC_0(VAR_16 + (VAR_17++) * VAR_0,
    VAR_13[VAR_21].format, VAR_20);
  for (VAR_21 = 0; VAR_21 < VAR_3; VAR_21++)
   FUNC_0(VAR_16 + (VAR_17++) * VAR_0,
    VAR_10[VAR_21].format, VAR_20);
 }

 for (VAR_22 = 0; VAR_22 < VAR_15->max_opened_tc; VAR_22++)
  for (VAR_20 = 0; VAR_20 < VAR_19; VAR_20++)
   for (VAR_21 = 0; VAR_21 < VAR_4; VAR_21++)
    FUNC_0(VAR_16 + (VAR_17++) * VAR_0,
     VAR_11[VAR_21].format,
     VAR_15->channel_tc2txq[VAR_20][VAR_22]);

 for (VAR_20 = 0; VAR_20 < VAR_19; VAR_20++) {
  for (VAR_21 = 0; VAR_21 < VAR_7 * VAR_18; VAR_21++)
   FUNC_0(VAR_16 + (VAR_17++) * VAR_0,
    VAR_14[VAR_21].format, VAR_20);
  for (VAR_21 = 0; VAR_21 < VAR_5; VAR_21++)
   FUNC_0(VAR_16 + (VAR_17++) * VAR_0,
    VAR_12[VAR_21].format, VAR_20);
 }

 return VAR_17;
}
