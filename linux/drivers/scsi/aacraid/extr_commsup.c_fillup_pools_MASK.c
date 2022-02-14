
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hw_fib {int dummy; } ;
struct fib {int dummy; } ;
struct aac_dev {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct hw_fib*) ;
 void* FUNC_1 (int,int ) ;

__attribute__((used)) static int FUNC_2(struct aac_dev *VAR_1, struct hw_fib **VAR_2,
      struct fib **VAR_3,
      unsigned int VAR_4)
{
 struct hw_fib **VAR_5;
 struct fib **VAR_6;

 VAR_5 = VAR_2;
 VAR_6 = VAR_3;
 while (VAR_5 < &VAR_2[VAR_4]) {
  *(VAR_5) = FUNC_1(sizeof(struct hw_fib), VAR_0);
  if (!(*(VAR_5++))) {
   --VAR_5;
   break;
  }

  *(VAR_6) = FUNC_1(sizeof(struct fib), VAR_0);
  if (!(*(VAR_6++))) {
   FUNC_0(*(--VAR_5));
   break;
  }
 }




 VAR_4 = VAR_5 - VAR_2;
 return VAR_4;
}
