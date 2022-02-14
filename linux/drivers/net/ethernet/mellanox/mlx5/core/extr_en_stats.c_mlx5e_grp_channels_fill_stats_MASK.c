
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_3__ {int ever_used; } ;
struct mlx5e_priv {int max_nch; int max_opened_tc; TYPE_2__* channel_stats; TYPE_1__ xsk; } ;
struct TYPE_4__ {int xdpsq; int xsksq; int * sq; int rq_xdpsq; int xskrq; int rq; int ch; } ;


 int FUNC_0 (int *,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;

__attribute__((used)) static int FUNC_1(struct mlx5e_priv *VAR_14, u64 *VAR_15,
      int VAR_16)
{
 bool VAR_17 = VAR_14->xsk.ever_used;
 int VAR_18 = VAR_14->max_nch;
 int VAR_19, VAR_20, VAR_21;

 for (VAR_19 = 0; VAR_19 < VAR_18; VAR_19++)
  for (VAR_20 = 0; VAR_20 < VAR_0; VAR_20++)
   VAR_15[VAR_16++] =
    FUNC_0(&VAR_14->channel_stats[VAR_19].ch,
           VAR_7, VAR_20);

 for (VAR_19 = 0; VAR_19 < VAR_18; VAR_19++) {
  for (VAR_20 = 0; VAR_20 < VAR_1; VAR_20++)
   VAR_15[VAR_16++] =
    FUNC_0(&VAR_14->channel_stats[VAR_19].rq,
           VAR_8, VAR_20);
  for (VAR_20 = 0; VAR_20 < VAR_5 * VAR_17; VAR_20++)
   VAR_15[VAR_16++] =
    FUNC_0(&VAR_14->channel_stats[VAR_19].xskrq,
           VAR_12, VAR_20);
  for (VAR_20 = 0; VAR_20 < VAR_2; VAR_20++)
   VAR_15[VAR_16++] =
    FUNC_0(&VAR_14->channel_stats[VAR_19].rq_xdpsq,
           VAR_9, VAR_20);
 }

 for (VAR_21 = 0; VAR_21 < VAR_14->max_opened_tc; VAR_21++)
  for (VAR_19 = 0; VAR_19 < VAR_18; VAR_19++)
   for (VAR_20 = 0; VAR_20 < VAR_3; VAR_20++)
    VAR_15[VAR_16++] =
     FUNC_0(&VAR_14->channel_stats[VAR_19].sq[VAR_21],
            VAR_10, VAR_20);

 for (VAR_19 = 0; VAR_19 < VAR_18; VAR_19++) {
  for (VAR_20 = 0; VAR_20 < VAR_6 * VAR_17; VAR_20++)
   VAR_15[VAR_16++] =
    FUNC_0(&VAR_14->channel_stats[VAR_19].xsksq,
           VAR_13, VAR_20);
  for (VAR_20 = 0; VAR_20 < VAR_4; VAR_20++)
   VAR_15[VAR_16++] =
    FUNC_0(&VAR_14->channel_stats[VAR_19].xdpsq,
           VAR_11, VAR_20);
 }

 return VAR_16;
}
