
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2400m {int tx_in; size_t tx_out; void* tx_buf; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 void* VAR_1 ;
 size_t FUNC_0 (struct i2400m*) ;
 int FUNC_1 (int,struct device*,char*,size_t,size_t,...) ;
 struct device* FUNC_2 (struct i2400m*) ;

__attribute__((used)) static
void *FUNC_3(struct i2400m *VAR_2, size_t VAR_3,
     size_t VAR_4, bool VAR_5)
{
 struct device *VAR_6 = FUNC_2(VAR_2);
 size_t VAR_7, VAR_8, VAR_9;
 void *VAR_10;

 VAR_9 = VAR_3 + VAR_4;
 VAR_7 = VAR_0 - (VAR_2->tx_in - VAR_2->tx_out);
 if (VAR_7 < VAR_9) {
  FUNC_1(2, VAR_6, "fifo push %zu/%zu: no space\n",
    VAR_3, VAR_4);
  return ((void*)0);
 }

 VAR_8 = FUNC_0(VAR_2);
 if (!VAR_5 && VAR_8 < VAR_9) {
  if (VAR_7 - VAR_8 >= VAR_9) {
   FUNC_1(2, VAR_6, "fifo push %zu/%zu: tail full\n",
     VAR_3, VAR_4);
   return VAR_1;
  } else {
   FUNC_1(2, VAR_6, "fifo push %zu/%zu: no head space\n",
     VAR_3, VAR_4);
   return ((void*)0);
  }
 }
 VAR_10 = VAR_2->tx_buf + VAR_2->tx_in % VAR_0;
 FUNC_1(2, VAR_6, "fifo push %zu/%zu: at @%zu\n", VAR_3, VAR_4,
   VAR_2->tx_in % VAR_0);
 VAR_2->tx_in += VAR_3;
 return VAR_10;
}
