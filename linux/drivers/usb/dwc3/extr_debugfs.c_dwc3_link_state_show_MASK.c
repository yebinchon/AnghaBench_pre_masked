
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct seq_file {struct dwc3* private; } ;
struct dwc3 {int lock; int regs; } ;
typedef enum dwc3_link_state { ____Placeholder_dwc3_link_state } dwc3_link_state ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (struct seq_file*,char*,int ) ;
 int FUNC_6 (struct seq_file*,char*) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_9(struct seq_file *VAR_5, void *VAR_6)
{
 struct dwc3 *VAR_7 = VAR_5->private;
 unsigned long VAR_8;
 enum dwc3_link_state VAR_9;
 u32 VAR_10;
 u8 VAR_11;

 FUNC_7(&VAR_7->lock, VAR_8);
 VAR_10 = FUNC_4(VAR_7->regs, VAR_3);
 if (FUNC_1(VAR_10) != VAR_4) {
  FUNC_6(VAR_5, "Not available\n");
  FUNC_8(&VAR_7->lock, VAR_8);
  return 0;
 }

 VAR_10 = FUNC_4(VAR_7->regs, VAR_0);
 VAR_9 = FUNC_0(VAR_10);
 VAR_11 = VAR_10 & VAR_1;

 FUNC_5(VAR_5, "%s\n", (VAR_11 >= VAR_2) ?
     FUNC_3(VAR_9) :
     FUNC_2(VAR_9));
 FUNC_8(&VAR_7->lock, VAR_8);

 return 0;
}
