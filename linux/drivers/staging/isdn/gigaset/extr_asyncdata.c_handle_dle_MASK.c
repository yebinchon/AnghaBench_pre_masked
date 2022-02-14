
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inbuf_t {int inputstate; int* data; size_t head; size_t tail; struct cardstate* cs; } ;
struct cardstate {scalar_t__ mstate; int dev; scalar_t__ dle; } ;



 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 size_t VAR_4 ;
 int FUNC_0 (int ,char*,...) ;

__attribute__((used)) static void FUNC_1(struct inbuf_t *VAR_5)
{
 struct cardstate *VAR_6 = VAR_5->cs;

 if (VAR_6->mstate == VAR_3)
  return;

 if (!(VAR_5->inputstate & VAR_0)) {

  if (VAR_5->data[VAR_5->head] == 128 &&
      (VAR_6->dle || VAR_5->inputstate & VAR_1)) {

   VAR_5->head++;
   if (VAR_5->head == VAR_5->tail ||
       VAR_5->head == VAR_4) {

    VAR_5->inputstate |= VAR_0;
    return;
   }
  } else {

   return;
  }
 }


 VAR_5->inputstate &= ~VAR_0;

 switch (VAR_5->data[VAR_5->head]) {
 case 'X':
  if (VAR_5->inputstate & VAR_2)
   FUNC_0(VAR_6->dev,
       "received <DLE>X in command mode\n");
  VAR_5->inputstate |= VAR_2 | VAR_1;
  VAR_5->head++;
  break;
 case '.':
  if (!(VAR_5->inputstate & VAR_1))
   FUNC_0(VAR_6->dev,
       "received <DLE>. without <DLE>X\n");
  VAR_5->inputstate &= ~VAR_1;

  if (VAR_6->dle)
   VAR_5->inputstate &= ~VAR_2;
  VAR_5->head++;
  break;
 case 128:

  VAR_5->inputstate |= VAR_0;
  if (!(VAR_6->dle || VAR_5->inputstate & VAR_1))
   FUNC_0(VAR_6->dev,
       "received <DLE><DLE> not in DLE mode\n");
  break;
 default:
  FUNC_0(VAR_6->dev, "received <DLE><%02x>\n",
      VAR_5->data[VAR_5->head]);

 }
}
