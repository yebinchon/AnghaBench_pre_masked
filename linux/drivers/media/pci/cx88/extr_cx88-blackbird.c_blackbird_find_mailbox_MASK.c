
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct cx8802_dev {int core; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (int ,int,int*) ;

__attribute__((used)) static int FUNC_2(struct cx8802_dev *VAR_2)
{
 u32 VAR_3[4] = {0x12345678, 0x34567812, 0x56781234, 0x78123456};
 int VAR_4 = 0;
 u32 VAR_5;
 int VAR_6;

 for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++) {
  FUNC_1(VAR_2->core, VAR_6, &VAR_5);
  if (VAR_5 == VAR_3[VAR_4])
   VAR_4++;
  else
   VAR_4 = 0;
  if (VAR_4 == 4) {
   FUNC_0(1, "Mailbox signature found\n");
   return VAR_6 + 1;
  }
 }
 FUNC_0(0, "Mailbox signature values not found!\n");
 return -VAR_1;
}
