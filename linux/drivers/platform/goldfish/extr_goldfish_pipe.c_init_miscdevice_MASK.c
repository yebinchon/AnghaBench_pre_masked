
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct miscdevice {char* name; int * fops; int minor; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct miscdevice*,int ,int) ;

__attribute__((used)) static void FUNC_1(struct miscdevice *VAR_2)
{
 FUNC_0(VAR_2, 0, sizeof(*VAR_2));

 VAR_2->minor = VAR_0;
 VAR_2->name = "goldfish_pipe";
 VAR_2->fops = &VAR_1;
}
