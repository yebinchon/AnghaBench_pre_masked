
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wbcir_data {scalar_t__ txstate; unsigned int* txbuf; unsigned int txlen; int spinlock; scalar_t__ txoff; } ;
struct rc_dev {struct wbcir_data* priv; } ;


 unsigned int FUNC_0 (unsigned int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (unsigned int*) ;
 unsigned int* FUNC_2 (unsigned int,int,int ) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (struct wbcir_data*) ;

__attribute__((used)) static int
FUNC_6(struct rc_dev *VAR_4, unsigned *VAR_5, unsigned VAR_6)
{
 struct wbcir_data *VAR_7 = VAR_4->priv;
 unsigned *VAR_8;
 unsigned VAR_9;
 unsigned long VAR_10;

 VAR_8 = FUNC_2(VAR_6, sizeof(*VAR_5), VAR_2);
 if (!VAR_8)
  return -VAR_1;


 for (VAR_9 = 0; VAR_9 < VAR_6; VAR_9++)
  VAR_8[VAR_9] = FUNC_0(VAR_5[VAR_9], 10);


 FUNC_3(&VAR_7->spinlock, VAR_10);
 if (VAR_7->txstate != VAR_3) {
  FUNC_4(&VAR_7->spinlock, VAR_10);
  FUNC_1(VAR_8);
  return -VAR_0;
 }


 VAR_7->txbuf = VAR_8;
 VAR_7->txlen = VAR_6;
 VAR_7->txoff = 0;
 FUNC_5(VAR_7);


 FUNC_4(&VAR_7->spinlock, VAR_10);
 return VAR_6;
}
