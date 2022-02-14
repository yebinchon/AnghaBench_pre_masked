
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct cx88_core {int dummy; } ;
struct cx8802_dev {int slock; int mpegq; struct cx88_core* core; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 int FUNC_1 (struct cx8802_dev*) ;
 int VAR_5 ;
 int FUNC_2 (char*,int ,int ,int,int) ;
 int FUNC_3 (struct cx88_core*,int *) ;
 int * VAR_6 ;
 int FUNC_4 (struct cx88_core*,int *,int) ;
 int FUNC_5 (int ,int) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,int) ;
 scalar_t__ VAR_7 ;
 int FUNC_8 (int,char*,...) ;
 int FUNC_9 (char*) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;

__attribute__((used)) static void FUNC_12(struct cx8802_dev *VAR_8)
{
 struct cx88_core *VAR_9 = VAR_8->core;
 u32 VAR_10, VAR_11, VAR_12;

 FUNC_8(1, "\n");
 VAR_10 = FUNC_6(VAR_3);
 VAR_11 = FUNC_6(VAR_2);
 if (0 == (VAR_10 & VAR_11))
  return;

 FUNC_7(VAR_3, VAR_10);

 if (VAR_7 || (VAR_10 & VAR_11 & ~0xff))
  FUNC_2("irq mpeg ",
       VAR_5, FUNC_0(VAR_5),
       VAR_10, VAR_11);


 if (VAR_10 & (1 << 16)) {
  FUNC_9("mpeg risc op code error\n");
  FUNC_5(VAR_0, 0x11);
  FUNC_3(VAR_8->core,
           &VAR_6[VAR_4]);
 }


 if (VAR_10 & 0x01) {
  FUNC_8(1, "wake up\n");
  FUNC_10(&VAR_8->slock);
  VAR_12 = FUNC_6(VAR_1);
  FUNC_4(VAR_8->core, &VAR_8->mpegq, VAR_12);
  FUNC_11(&VAR_8->slock);
 }


 if (VAR_10 & 0x1f0100) {
  FUNC_8(0, "general errors: 0x%08x\n", VAR_10 & 0x1f0100);
  FUNC_10(&VAR_8->slock);
  FUNC_1(VAR_8);
  FUNC_11(&VAR_8->slock);
 }
}
