
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_struct {unsigned int index; struct gsm_dlci* driver_data; } ;
struct tty_driver {int dummy; } ;
struct gsm_mux {int mutex; struct gsm_dlci** dlci; scalar_t__ dead; } ;
struct gsm_dlci {scalar_t__ state; int port; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 unsigned int VAR_7 ;
 int FUNC_0 (struct gsm_dlci*) ;
 int FUNC_1 (struct gsm_dlci*) ;
 struct gsm_dlci* FUNC_2 (struct gsm_mux*,unsigned int) ;
 struct gsm_mux** VAR_8 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct gsm_mux*) ;
 unsigned int FUNC_6 (unsigned int) ;
 int FUNC_7 (int *,struct tty_driver*,struct tty_struct*) ;

__attribute__((used)) static int FUNC_8(struct tty_driver *VAR_9, struct tty_struct *VAR_10)
{
 struct gsm_mux *VAR_11;
 struct gsm_dlci *VAR_12;
 unsigned int VAR_13 = VAR_10->index;
 unsigned int VAR_14 = FUNC_6(VAR_13);
 bool VAR_15 = 0;
 int VAR_16;

 VAR_13 = VAR_13 & 0x3F;

 if (VAR_14 >= VAR_7)
  return -VAR_5;

 if (VAR_8[VAR_14] == ((void*)0))
  return -VAR_6;
 if (VAR_13 == 0 || VAR_13 > 61)
  return -VAR_1;
 VAR_11 = VAR_8[VAR_14];
 if (VAR_11->dead)
  return -VAR_2;




 FUNC_3(&VAR_11->mutex);
 if (VAR_11->dlci[0] && VAR_11->dlci[0]->state != VAR_0) {
  FUNC_4(&VAR_11->mutex);
  return -VAR_3;
 }
 VAR_12 = VAR_11->dlci[VAR_13];
 if (VAR_12 == ((void*)0)) {
  VAR_15 = 1;
  VAR_12 = FUNC_2(VAR_11, VAR_13);
 }
 if (VAR_12 == ((void*)0)) {
  FUNC_4(&VAR_11->mutex);
  return -VAR_4;
 }
 VAR_16 = FUNC_7(&VAR_12->port, VAR_9, VAR_10);
 if (VAR_16) {
  if (VAR_15)
   FUNC_1(VAR_12);
  FUNC_4(&VAR_11->mutex);
  return VAR_16;
 }

 FUNC_0(VAR_12);
 FUNC_0(VAR_11->dlci[0]);
 FUNC_5(VAR_11);
 VAR_10->driver_data = VAR_12;
 FUNC_4(&VAR_11->mutex);

 return 0;
}
