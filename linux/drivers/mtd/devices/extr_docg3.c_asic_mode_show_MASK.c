
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct seq_file {scalar_t__ private; } ;
struct docg3 {TYPE_1__* cascade; } ;
struct TYPE_2__ {int lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;


 int VAR_3 ;

 int VAR_4 ;
 int FUNC_0 (struct docg3*,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct seq_file*,char*,int,int,int,int,int,int,int,int) ;
 int FUNC_4 (struct seq_file*,char*) ;

__attribute__((used)) static int FUNC_5(struct seq_file *VAR_5, void *VAR_6)
{
 struct docg3 *VAR_7 = (struct docg3 *)VAR_5->private;

 int VAR_8, VAR_9;

 FUNC_1(&VAR_7->cascade->lock);
 VAR_8 = FUNC_0(VAR_7, VAR_0);
 VAR_9 = VAR_8 & 0x03;
 FUNC_2(&VAR_7->cascade->lock);

 FUNC_3(VAR_5,
     "%04x : RAM_WE=%d,RSTIN_RESET=%d,BDETCT_RESET=%d,WRITE_ENABLE=%d,POWERDOWN=%d,MODE=%d%d (",
     VAR_8,
     VAR_8 & VAR_3 ? 1 : 0,
     VAR_8 & VAR_4 ? 1 : 0,
     VAR_8 & VAR_1 ? 1 : 0,
     VAR_8 & VAR_2 ? 1 : 0,
     VAR_8 & 129 ? 1 : 0,
     VAR_9 >> 1, VAR_9 & 0x1);

 switch (VAR_9) {
 case 128:
  FUNC_4(VAR_5, "reset");
  break;
 case 130:
  FUNC_4(VAR_5, "normal");
  break;
 case 129:
  FUNC_4(VAR_5, "powerdown");
  break;
 }
 FUNC_4(VAR_5, ")\n");
 return 0;
}
