
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vb2_queue {int type; } ;
struct device {int dummy; } ;
struct coda_q_data {unsigned int sizeimage; } ;
struct coda_ctx {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int,struct coda_ctx*,char*,unsigned int,unsigned int) ;
 struct coda_q_data* FUNC_1 (struct coda_ctx*,int ) ;
 struct coda_ctx* FUNC_2 (struct vb2_queue*) ;

__attribute__((used)) static int FUNC_3(struct vb2_queue *VAR_1,
    unsigned int *VAR_2, unsigned int *VAR_3,
    unsigned int VAR_4[], struct device *VAR_5[])
{
 struct coda_ctx *VAR_6 = FUNC_2(VAR_1);
 struct coda_q_data *VAR_7;
 unsigned int VAR_8;

 VAR_7 = FUNC_1(VAR_6, VAR_1->type);
 VAR_8 = VAR_7->sizeimage;

 if (*VAR_3)
  return VAR_4[0] < VAR_8 ? -VAR_0 : 0;

 *VAR_3 = 1;
 VAR_4[0] = VAR_8;

 FUNC_0(1, VAR_6, "get %d buffer(s) of size %d each.\n", *VAR_2,
   VAR_8);

 return 0;
}
