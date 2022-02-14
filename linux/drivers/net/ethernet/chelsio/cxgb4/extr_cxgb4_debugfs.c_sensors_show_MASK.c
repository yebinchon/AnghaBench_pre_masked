
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct seq_file {struct adapter* private; } ;
struct adapter {int pf; int mbox; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (struct seq_file*,char*,scalar_t__) ;
 int FUNC_4 (struct seq_file*,char*) ;
 int FUNC_5 (struct adapter*,int ,int ,int ,int,scalar_t__*,scalar_t__*) ;

__attribute__((used)) static int FUNC_6(struct seq_file *VAR_4, void *VAR_5)
{
 struct adapter *VAR_6 = VAR_4->private;
 u32 VAR_7[7], VAR_8[7];
 int VAR_9;




 VAR_7[0] = (FUNC_0(VAR_0) |
      FUNC_1(VAR_1) |
      FUNC_2(VAR_2));
 VAR_7[1] = (FUNC_0(VAR_0) |
      FUNC_1(VAR_1) |
      FUNC_2(VAR_3));
 VAR_9 = FUNC_5(VAR_6, VAR_6->mbox, VAR_6->pf, 0, 2,
         VAR_7, VAR_8);

 if (VAR_9 < 0 || VAR_8[0] == 0)
  FUNC_4(VAR_4, "Temperature: <unknown>\n");
 else
  FUNC_3(VAR_4, "Temperature: %dC\n", VAR_8[0]);

 if (VAR_9 < 0 || VAR_8[1] == 0)
  FUNC_4(VAR_4, "Core VDD:    <unknown>\n");
 else
  FUNC_3(VAR_4, "Core VDD:    %dmV\n", VAR_8[1]);

 return 0;
}
