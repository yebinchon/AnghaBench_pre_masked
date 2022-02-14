
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_struct {struct ehv_bc_data* driver_data; } ;
struct ehv_bc_data {unsigned int head; int lock; scalar_t__ buf; int tail; } ;


 int VAR_0 ;
 unsigned int FUNC_0 (unsigned int,int ,int) ;
 int FUNC_1 (struct ehv_bc_data*) ;
 int FUNC_2 (scalar_t__,unsigned char const*,unsigned int) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_5(struct tty_struct *VAR_1, const unsigned char *VAR_2,
       int VAR_3)
{
 struct ehv_bc_data *VAR_4 = VAR_1->driver_data;
 unsigned long VAR_5;
 unsigned int VAR_6;
 unsigned int VAR_7 = 0;

 while (1) {
  FUNC_3(&VAR_4->lock, VAR_5);
  VAR_6 = FUNC_0(VAR_4->head, VAR_4->tail, VAR_0);
  if (VAR_3 < VAR_6)
   VAR_6 = VAR_3;
  if (VAR_6) {
   FUNC_2(VAR_4->buf + VAR_4->head, VAR_2, VAR_6);
   VAR_4->head = (VAR_4->head + VAR_6) & (VAR_0 - 1);
  }
  FUNC_4(&VAR_4->lock, VAR_5);
  if (!VAR_6)
   break;

  VAR_2 += VAR_6;
  VAR_3 -= VAR_6;
  VAR_7 += VAR_6;
 }

 FUNC_1(VAR_4);

 return VAR_7;
}
