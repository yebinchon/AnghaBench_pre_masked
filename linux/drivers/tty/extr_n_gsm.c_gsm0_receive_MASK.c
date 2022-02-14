
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gsm_mux {int state; unsigned int address; unsigned int len; unsigned char control; unsigned int mru; unsigned int count; unsigned char* buf; unsigned char received_fcs; int bad_size; void* fcs; } ;


 unsigned char VAR_0 ;
 void* VAR_1 ;
 void* FUNC_0 (void*,unsigned char) ;
 int FUNC_1 (struct gsm_mux*) ;
 int FUNC_2 (unsigned int*,unsigned char) ;

__attribute__((used)) static void FUNC_3(struct gsm_mux *VAR_2, unsigned char VAR_3)
{
 unsigned int VAR_4;

 switch (VAR_2->state) {
 case 129:
  if (VAR_3 == VAR_0) {
   VAR_2->state = 135;
   VAR_2->address = 0;
   VAR_2->len = 0;
   VAR_2->fcs = VAR_1;
  }
  break;
 case 135:
  VAR_2->fcs = FUNC_0(VAR_2->fcs, VAR_3);
  if (FUNC_2(&VAR_2->address, VAR_3))
   VAR_2->state = 134;
  break;
 case 134:
  VAR_2->fcs = FUNC_0(VAR_2->fcs, VAR_3);
  VAR_2->control = VAR_3;
  VAR_2->state = 131;
  break;
 case 131:
  VAR_2->fcs = FUNC_0(VAR_2->fcs, VAR_3);
  if (FUNC_2(&VAR_2->len, VAR_3)) {
   if (VAR_2->len > VAR_2->mru) {
    VAR_2->bad_size++;
    VAR_2->state = 129;
    break;
   }
   VAR_2->count = 0;
   if (!VAR_2->len)
    VAR_2->state = 132;
   else
    VAR_2->state = 133;
   break;
  }
  VAR_2->state = 130;
  break;
 case 130:
  VAR_2->fcs = FUNC_0(VAR_2->fcs, VAR_3);
  VAR_4 = VAR_3;
  VAR_2->len |= VAR_4 << 7;
  if (VAR_2->len > VAR_2->mru) {
   VAR_2->bad_size++;
   VAR_2->state = 129;
   break;
  }
  VAR_2->count = 0;
  if (!VAR_2->len)
   VAR_2->state = 132;
  else
   VAR_2->state = 133;
  break;
 case 133:
  VAR_2->buf[VAR_2->count++] = VAR_3;
  if (VAR_2->count == VAR_2->len)
   VAR_2->state = 132;
  break;
 case 132:
  VAR_2->received_fcs = VAR_3;
  FUNC_1(VAR_2);
  VAR_2->state = 128;
  break;
 case 128:
  if (VAR_3 == VAR_0) {
   VAR_2->state = 129;
   break;
  }
  break;
 }
}
