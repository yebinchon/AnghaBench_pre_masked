
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct v4l2_subdev {int dummy; } ;
struct cx25840_ir_state {int tx_kfifo; int txclk_divider; } ;
typedef size_t ssize_t ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 unsigned int VAR_6 ;
 int FUNC_0 (struct v4l2_subdev*,int ) ;
 int VAR_7 ;
 unsigned int FUNC_1 (int ) ;
 int FUNC_2 (int ,int *,int) ;
 unsigned int FUNC_3 (unsigned int,unsigned int) ;
 int FUNC_4 (int,int ) ;
 struct cx25840_ir_state* FUNC_5 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_6(struct v4l2_subdev *VAR_8, u8 *VAR_9, size_t VAR_10,
          ssize_t *VAR_11)
{
 struct cx25840_ir_state *VAR_12 = FUNC_5(VAR_8);

 if (VAR_12 == ((void*)0))
  return -VAR_1;
 FUNC_0(VAR_8, VAR_4);
 *VAR_11 = VAR_10;

 return 0;
}
