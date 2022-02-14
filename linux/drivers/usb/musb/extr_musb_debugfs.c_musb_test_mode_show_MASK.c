
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {struct musb* private; } ;
struct musb {int controller; int mregs; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct seq_file*,char*) ;

__attribute__((used)) static int FUNC_5(struct seq_file *VAR_9, void *VAR_10)
{
 struct musb *VAR_11 = VAR_9->private;
 unsigned VAR_12;

 FUNC_1(VAR_11->controller);
 VAR_12 = FUNC_0(VAR_11->mregs, VAR_0);
 FUNC_2(VAR_11->controller);
 FUNC_3(VAR_11->controller);

 if (VAR_12 == (VAR_3 | VAR_2))
  FUNC_4(VAR_9, "force host full-speed\n");

 else if (VAR_12 == (VAR_3 | VAR_4))
  FUNC_4(VAR_9, "force host high-speed\n");

 else if (VAR_12 == VAR_3)
  FUNC_4(VAR_9, "force host\n");

 else if (VAR_12 == VAR_1)
  FUNC_4(VAR_9, "fifo access\n");

 else if (VAR_12 == VAR_2)
  FUNC_4(VAR_9, "force full-speed\n");

 else if (VAR_12 == VAR_4)
  FUNC_4(VAR_9, "force high-speed\n");

 else if (VAR_12 == VAR_7)
  FUNC_4(VAR_9, "test packet\n");

 else if (VAR_12 == VAR_6)
  FUNC_4(VAR_9, "test K\n");

 else if (VAR_12 == VAR_5)
  FUNC_4(VAR_9, "test J\n");

 else if (VAR_12 == VAR_8)
  FUNC_4(VAR_9, "test SE0 NAK\n");

 return 0;
}
