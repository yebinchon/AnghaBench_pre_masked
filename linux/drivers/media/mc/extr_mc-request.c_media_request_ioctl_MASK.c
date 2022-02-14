
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct media_request {int dummy; } ;
struct file {struct media_request* private_data; } ;


 long VAR_0 ;


 long FUNC_0 (struct media_request*) ;
 long FUNC_1 (struct media_request*) ;

__attribute__((used)) static long FUNC_2(struct file *VAR_1, unsigned int VAR_2,
    unsigned long VAR_3)
{
 struct media_request *VAR_4 = VAR_1->private_data;

 switch (VAR_2) {
 case 129:
  return FUNC_0(VAR_4);
 case 128:
  return FUNC_1(VAR_4);
 default:
  return -VAR_0;
 }
}
