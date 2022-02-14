
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_requestbuffers {scalar_t__ type; scalar_t__ count; } ;
struct coda_q_data {int dummy; } ;
struct coda_ctx {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct coda_ctx*,struct coda_q_data*) ;
 int FUNC_1 (struct coda_ctx*) ;
 struct coda_q_data* FUNC_2 (struct coda_ctx*,scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct coda_ctx *VAR_1,
    struct v4l2_requestbuffers *VAR_2)
{
 struct coda_q_data *VAR_3;
 int VAR_4;

 if (VAR_2->type != VAR_0)
  return 0;

 if (VAR_2->count) {
  VAR_3 = FUNC_2(VAR_1, VAR_0);
  VAR_4 = FUNC_0(VAR_1, VAR_3);
  if (VAR_4 < 0)
   return VAR_4;
 } else {
  FUNC_1(VAR_1);
 }

 return 0;
}
