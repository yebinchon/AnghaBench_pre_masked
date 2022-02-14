
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {scalar_t__ index; } ;
struct file {int * private_data; } ;
typedef int loff_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*,struct page*,int,int) ;
 int FUNC_1 (struct file*,struct page*,int*) ;
 int FUNC_2 (unsigned int) ;
 unsigned int FUNC_3 () ;

__attribute__((used)) static int FUNC_4(struct file *VAR_4, struct page *VAR_5)
{
 loff_t VAR_6 = (loff_t)VAR_5->index << VAR_3;
 int VAR_7 = -VAR_0;
 unsigned int VAR_8;

 VAR_8 = FUNC_3();

 if (VAR_4->private_data == ((void*)0)) {
  VAR_7 = -VAR_1;
  FUNC_2(VAR_8);
  return VAR_7;
 }

 FUNC_0(VAR_2, "readpage %p at offset %d 0x%x\n",
   VAR_5, (int)VAR_6, (int)VAR_6);

 VAR_7 = FUNC_1(VAR_4, VAR_5, &VAR_6);

 FUNC_2(VAR_8);
 return VAR_7;
}
