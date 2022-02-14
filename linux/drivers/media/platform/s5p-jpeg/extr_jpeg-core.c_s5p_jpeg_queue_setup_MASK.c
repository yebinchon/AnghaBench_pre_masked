
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vb2_queue {int type; } ;
struct s5p_jpeg_q_data {unsigned int size; } ;
struct s5p_jpeg_ctx {scalar_t__ mode; } ;
struct device {int dummy; } ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 struct s5p_jpeg_q_data* FUNC_1 (struct s5p_jpeg_ctx*,int ) ;
 struct s5p_jpeg_ctx* FUNC_2 (struct vb2_queue*) ;

__attribute__((used)) static int FUNC_3(struct vb2_queue *VAR_1,
      unsigned int *VAR_2, unsigned int *VAR_3,
      unsigned int VAR_4[], struct device *VAR_5[])
{
 struct s5p_jpeg_ctx *VAR_6 = FUNC_2(VAR_1);
 struct s5p_jpeg_q_data *VAR_7 = ((void*)0);
 unsigned int VAR_8, VAR_9 = *VAR_2;

 VAR_7 = FUNC_1(VAR_6, VAR_1->type);
 FUNC_0(VAR_7 == ((void*)0));

 VAR_8 = VAR_7->size;





 if (VAR_6->mode == VAR_0)
  VAR_9 = 1;

 *VAR_2 = VAR_9;
 *VAR_3 = 1;
 VAR_4[0] = VAR_8;

 return 0;
}
