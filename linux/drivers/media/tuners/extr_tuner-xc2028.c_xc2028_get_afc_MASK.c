
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct xc2028_data {int lock; } ;
struct dvb_frontend {struct xc2028_data* tuner_priv; } ;
typedef int s32 ;
typedef int s16 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct xc2028_data*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (char*,int) ;
 int FUNC_5 (struct xc2028_data*,int ,int*) ;

__attribute__((used)) static int FUNC_6(struct dvb_frontend *VAR_2, s32 *VAR_3)
{
 struct xc2028_data *VAR_4 = VAR_2->tuner_priv;
 int VAR_5, VAR_6;
 u16 VAR_7 = 0;
 s16 VAR_8 = 0;

 VAR_6 = FUNC_0(VAR_4);
 if (VAR_6 < 0)
  return VAR_6;


 if (!VAR_6) {
  *VAR_3 = 0;
  return 0;
 }

 FUNC_2(&VAR_4->lock);


 for (VAR_5 = 0; VAR_5 < 3; VAR_5++) {
  VAR_6 = FUNC_5(VAR_4, VAR_1, &VAR_7);
  if (VAR_6 < 0)
   goto ret;

  if (VAR_7)
   break;
  FUNC_1(6);
 }


 if (VAR_7 == 2)
  goto ret;


 VAR_6 = FUNC_5(VAR_4, VAR_0, &VAR_8);
 if (VAR_6 < 0)
  goto ret;

 *VAR_3 = VAR_8 * 15625;

 FUNC_4("AFC is %d Hz\n", *VAR_3);

ret:
 FUNC_3(&VAR_4->lock);

 return VAR_6;
}
