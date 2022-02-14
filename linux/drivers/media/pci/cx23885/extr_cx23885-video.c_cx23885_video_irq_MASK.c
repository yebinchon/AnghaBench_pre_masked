
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct cx23885_dev {int slock; int vidq; int * sram_channels; int name; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct cx23885_dev*,int *) ;
 scalar_t__ FUNC_1 (struct cx23885_dev*,int) ;
 int FUNC_2 (struct cx23885_dev*,int *,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (int,char*,int) ;
 int FUNC_6 (char*,int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

int FUNC_9(struct cx23885_dev *VAR_8, u32 VAR_9)
{
 u32 VAR_10, VAR_11;
 int VAR_12 = 0;

 VAR_10 = FUNC_3(VAR_2);
 if (0 == (VAR_9 & VAR_10))
  return VAR_12;

 FUNC_4(VAR_3, VAR_9);


 if ((VAR_9 & VAR_5) ||
  (VAR_9 & VAR_7) ||
  (VAR_9 & VAR_4)) {

  if (VAR_9 & VAR_5) {
   FUNC_5(7, " (VID_BC_MSK_OPC_ERR 0x%08x)\n",
    VAR_5);
   FUNC_6("%s: video risc op code error\n",
    VAR_8->name);
   FUNC_0(VAR_8,
    &VAR_8->sram_channels[VAR_0]);
  }

  if (VAR_9 & VAR_7)
   FUNC_5(7, " (VID_BC_MSK_SYNC 0x%08x) video lines miss-match\n",
    VAR_7);

  if (VAR_9 & VAR_4)
   FUNC_5(7, " (VID_BC_MSK_OF 0x%08x) fifo overflow\n",
    VAR_4);

 }


 if (VAR_9 & VAR_6) {
  FUNC_7(&VAR_8->slock);
  VAR_11 = FUNC_3(VAR_1);
  FUNC_2(VAR_8, &VAR_8->vidq, VAR_11);
  FUNC_8(&VAR_8->slock);
  VAR_12++;
 }


 VAR_12 += FUNC_1(VAR_8, VAR_9);

 return VAR_12;
}
