
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct cx88_core {int dummy; } ;
struct cx8800_dev {int slock; int vbiq; int vidq; struct cx88_core* core; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (char*,int ,int ,int,int) ;
 int FUNC_2 (struct cx88_core*,int *) ;
 int * VAR_7 ;
 int VAR_8 ;
 int FUNC_3 (struct cx88_core*,int *,int) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int) ;
 scalar_t__ VAR_9 ;
 int FUNC_7 (char*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static void FUNC_10(struct cx8800_dev *VAR_10)
{
 struct cx88_core *VAR_11 = VAR_10->core;
 u32 VAR_12, VAR_13, VAR_14;

 VAR_12 = FUNC_5(VAR_4);
 VAR_13 = FUNC_5(VAR_3);
 if (0 == (VAR_12 & VAR_13))
  return;
 FUNC_6(VAR_4, VAR_12);
 if (VAR_9 || (VAR_12 & VAR_13 & ~0xff))
  FUNC_1("irq vid",
       VAR_8, FUNC_0(VAR_8),
       VAR_12, VAR_13);


 if (VAR_12 & (1 << 16)) {
  FUNC_7("video risc op code error\n");
  FUNC_4(VAR_2, 0x11);
  FUNC_4(VAR_6, 0x06);
  FUNC_2(VAR_11, &VAR_7[VAR_5]);
 }


 if (VAR_12 & 0x01) {
  FUNC_8(&VAR_10->slock);
  VAR_14 = FUNC_5(VAR_1);
  FUNC_3(VAR_11, &VAR_10->vidq, VAR_14);
  FUNC_9(&VAR_10->slock);
 }


 if (VAR_12 & 0x08) {
  FUNC_8(&VAR_10->slock);
  VAR_14 = FUNC_5(VAR_0);
  FUNC_3(VAR_11, &VAR_10->vbiq, VAR_14);
  FUNC_9(&VAR_10->slock);
 }
}
