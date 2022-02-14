
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_4__ {int recording; } ;
struct av7110 {int debitype; int* debi_virt; int debilen; int debilock; int ci_rbuffer; TYPE_1__* ci_slot; int * handle2filter; int * p2t; TYPE_2__ demux; int dev; } ;
typedef int s8 ;
struct TYPE_3__ {int flags; } ;


 int FUNC_0 (struct av7110*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct av7110*,int*,int) ;
 int VAR_2 ;
 int FUNC_2 (int*,int,int *,int ,int ,struct av7110*) ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 unsigned int VAR_7 ;
 int FUNC_3 (int *,int*,int) ;
 int FUNC_4 (int *,int*,int) ;
 int FUNC_5 (int,char*,...) ;
 int FUNC_6 (TYPE_2__*,int const*,int) ;
 int FUNC_7 (struct av7110*,int ,unsigned int,int ,int) ;
 int VAR_8 ;
 int FUNC_8 (char*) ;
 int FUNC_9 (char*,int *,...) ;
 int FUNC_10 (int ,int ) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;

__attribute__((used)) static void FUNC_13(unsigned long VAR_9)
{
 struct av7110 *VAR_10 = (struct av7110 *)VAR_9;
 int VAR_11 = VAR_10->debitype;
 int VAR_12 = (VAR_11 >> 8) & 0x1f;
 unsigned int VAR_13 = 0;

 FUNC_8("debi");
 FUNC_5(4, "type 0x%04x\n", VAR_11);

 if (VAR_11 == -1) {
  FUNC_9("DEBI irq oops @ %ld, psr:0x%08x, ssr:0x%08x\n",
         &VAR_8, FUNC_10(VAR_10->dev, VAR_3),
         FUNC_10(VAR_10->dev, VAR_6));
  goto debi_done;
 }
 VAR_10->debitype = -1;

 switch (VAR_11 & 0xff) {

 case 128:
  FUNC_6(&VAR_10->demux,
      (const u8 *) VAR_10->debi_virt,
      VAR_10->debilen / 188);
  VAR_13 = VAR_4;
  break;

 case 130:
  if (VAR_10->demux.recording)
   FUNC_3(&VAR_10->p2t[VAR_12],
      (u8 *) VAR_10->debi_virt,
      VAR_10->debilen);
  VAR_13 = VAR_4;
  break;

 case 132:
 case 133:
 case 129:
  if (VAR_10->handle2filter[VAR_12])
   FUNC_2((u8 *)VAR_10->debi_virt,
          VAR_10->debilen, ((void*)0), 0,
          VAR_10->handle2filter[VAR_12],
          VAR_10);
  VAR_13 = VAR_4;
  break;

 case 137:
 {
  u8 *VAR_14 = VAR_10->debi_virt;

  if ((VAR_14[0] < 2) && VAR_14[2] == 0xff) {
   int VAR_15 = 0;
   if (VAR_14[5] > 0)
    VAR_15 |= VAR_0;
   if (VAR_14[5] > 5)
    VAR_15 |= VAR_1;
   VAR_10->ci_slot[VAR_14[0]].flags = VAR_15;
  } else
   FUNC_4(&VAR_10->ci_rbuffer,
        VAR_10->debi_virt,
        VAR_10->debilen);
  VAR_13 = VAR_4;
  break;
 }

 case 135:
  FUNC_1(VAR_10, (u8 *)VAR_10->debi_virt, VAR_10->debilen);
  VAR_13 = VAR_4;
  break;

 case 134:
  ((s8*)VAR_10->debi_virt)[VAR_5 - 1] = 0;
  FUNC_9("%s\n", (s8 *) VAR_10->debi_virt);
  VAR_13 = VAR_4;
  break;

 case 136:
  FUNC_5(4, "debi DATA_CI_PUT\n");
  VAR_13 = VAR_7;
  break;
 case 131:
  FUNC_5(4, "debi DATA_MPEG_PLAY\n");
  VAR_13 = VAR_7;
  break;
 case 138:
  FUNC_5(4, "debi DATA_BMP_LOAD\n");
  VAR_13 = VAR_7;
  break;
 default:
  break;
 }
debi_done:
 FUNC_11(&VAR_10->debilock);
 if (VAR_13)
  FUNC_7(VAR_10, VAR_2, VAR_13, 0, 2);
 FUNC_0(VAR_10);
 FUNC_12(&VAR_10->debilock);
}
