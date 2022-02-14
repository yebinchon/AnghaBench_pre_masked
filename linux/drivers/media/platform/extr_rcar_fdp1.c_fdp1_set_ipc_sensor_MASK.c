
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned int width; unsigned int height; } ;
struct fdp1_q_data {TYPE_1__ format; } ;
struct fdp1_dev {int dummy; } ;
struct fdp1_ctx {struct fdp1_q_data out_q; struct fdp1_dev* fdp1; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 int VAR_10 ;
 unsigned int VAR_11 ;
 int VAR_12 ;
 unsigned int VAR_13 ;
 int FUNC_0 (struct fdp1_dev*,unsigned int,int ) ;

__attribute__((used)) static void FUNC_1(struct fdp1_ctx *VAR_14)
{
 struct fdp1_dev *VAR_15 = VAR_14->fdp1;
 struct fdp1_q_data *VAR_16 = &VAR_14->out_q;
 unsigned int VAR_17, VAR_18;
 unsigned int VAR_19 = VAR_16->format.width;
 unsigned int VAR_20 = VAR_16->format.height;

 VAR_17 = VAR_19 / 3;
 VAR_18 = 2 * VAR_19 / 3;

 FUNC_0(VAR_15, VAR_11, VAR_10);
 FUNC_0(VAR_15, VAR_13, VAR_12);
 FUNC_0(VAR_15, VAR_1, VAR_0);
 FUNC_0(VAR_15, VAR_3, VAR_2);

 FUNC_0(VAR_15, ((VAR_19 - 1) << VAR_5) |
    ((VAR_20 - 1) << VAR_6),
    VAR_4);

 FUNC_0(VAR_15, (VAR_17 << VAR_8) |
    (VAR_18 << VAR_9),
    VAR_7);
}
