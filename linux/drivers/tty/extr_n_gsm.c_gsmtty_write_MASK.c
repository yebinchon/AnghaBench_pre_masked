
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_struct {struct gsm_dlci* driver_data; } ;
struct gsm_dlci {scalar_t__ state; int lock; int fifo; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct gsm_dlci*) ;
 int FUNC_1 (int ,unsigned char const*,int,int *) ;

__attribute__((used)) static int FUNC_2(struct tty_struct *VAR_2, const unsigned char *VAR_3,
            int VAR_4)
{
 int VAR_5;
 struct gsm_dlci *VAR_6 = VAR_2->driver_data;
 if (VAR_6->state == VAR_0)
  return -VAR_1;

 VAR_5 = FUNC_1(VAR_6->fifo, VAR_3, VAR_4, &VAR_6->lock);

 FUNC_0(VAR_6);
 return VAR_5;
}
