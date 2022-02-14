
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gsm_mux {int state; size_t count; unsigned char* buf; size_t len; int escape; unsigned char control; size_t mru; int bad_size; void* fcs; int address; int malformed; } ;


 unsigned char VAR_0 ;
 unsigned char VAR_1 ;
 unsigned char VAR_2 ;




 int VAR_3 ;

 void* VAR_4 ;
 void* FUNC_0 (void*,unsigned char) ;
 int FUNC_1 (struct gsm_mux*) ;
 int FUNC_2 (int *,unsigned char) ;

__attribute__((used)) static void FUNC_3(struct gsm_mux *VAR_5, unsigned char VAR_6)
{
 if (VAR_6 == VAR_2) {


  if (VAR_5->state == 130 && VAR_5->count) {

   VAR_5->count--;
   VAR_5->fcs = FUNC_0(VAR_5->fcs, VAR_5->buf[VAR_5->count]);
   VAR_5->len = VAR_5->count;
   FUNC_1(VAR_5);
   VAR_5->state = 128;
   return;
  }

  if (VAR_5->state != 128) {
   VAR_5->malformed++;
   VAR_5->state = 128;
  }


  return;
 }

 if (VAR_6 == VAR_0) {
  VAR_5->escape = 1;
  return;
 }


 if (VAR_5->state == VAR_3)
  return;

 if (VAR_5->escape) {
  VAR_6 ^= VAR_1;
  VAR_5->escape = 0;
 }
 switch (VAR_5->state) {
 case 128:
  VAR_5->address = 0;
  VAR_5->state = 132;
  VAR_5->fcs = VAR_4;

 case 132:
  VAR_5->fcs = FUNC_0(VAR_5->fcs, VAR_6);
  if (FUNC_2(&VAR_5->address, VAR_6))
   VAR_5->state = 131;
  break;
 case 131:
  VAR_5->fcs = FUNC_0(VAR_5->fcs, VAR_6);
  VAR_5->control = VAR_6;
  VAR_5->count = 0;
  VAR_5->state = 130;
  break;
 case 130:
  if (VAR_5->count > VAR_5->mru) {
   VAR_5->state = 129;
   VAR_5->bad_size++;
  } else
   VAR_5->buf[VAR_5->count++] = VAR_6;
  break;
 case 129:
  break;
 }
}
