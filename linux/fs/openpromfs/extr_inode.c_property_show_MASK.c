
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {struct property* private; } ;
struct property {int length; void* value; } ;


 scalar_t__ FUNC_0 (void*,int) ;
 int FUNC_1 (struct seq_file*,char*,...) ;
 int FUNC_2 (void*) ;

__attribute__((used)) static int FUNC_3(struct seq_file *VAR_0, void *VAR_1)
{
 struct property *VAR_2 = VAR_0->private;
 void *VAR_3;
 int VAR_4;

 VAR_4 = VAR_2->length;
 VAR_3 = VAR_2->value;

 if (FUNC_0(VAR_3, VAR_4)) {
  while (VAR_4 > 0) {
   int VAR_5 = FUNC_2(VAR_3);

   FUNC_1(VAR_0, "%s", (char *) VAR_3);


   VAR_3 += VAR_5 + 1;
   VAR_4 -= VAR_5 + 1;

   if (VAR_4 > 0)
    FUNC_1(VAR_0, " + ");
  }
 } else {
  if (VAR_4 & 3) {
   while (VAR_4) {
    VAR_4--;
    if (VAR_4)
     FUNC_1(VAR_0, "%02x.",
         *(unsigned char *) VAR_3);
    else
     FUNC_1(VAR_0, "%02x",
         *(unsigned char *) VAR_3);
    VAR_3++;
   }
  } else {
   while (VAR_4 >= 4) {
    VAR_4 -= 4;

    if (VAR_4)
     FUNC_1(VAR_0, "%08x.",
         *(unsigned int *) VAR_3);
    else
     FUNC_1(VAR_0, "%08x",
         *(unsigned int *) VAR_3);
    VAR_3 += 4;
   }
  }
 }
 FUNC_1(VAR_0, "\n");

 return 0;
}
