
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct file {struct ddb* private_data; } ;
struct ddb {int dev; } ;


 long VAR_0 ;
 int FUNC_0 (int ,char*,unsigned int,unsigned long) ;

__attribute__((used)) static long FUNC_1(struct file *VAR_1, unsigned int VAR_2, unsigned long VAR_3)
{
 struct ddb *VAR_4 = VAR_1->private_data;

 FUNC_0(VAR_4->dev, "DDB IOCTLs unsupported (cmd: %d, arg: %lu)\n",
   VAR_2, VAR_3);

 return -VAR_0;
}
