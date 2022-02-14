
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tty_struct {TYPE_1__* ops; } ;
struct st_data_s {struct tty_struct* tty; } ;
struct TYPE_2__ {int (* write ) (struct tty_struct*,unsigned char const*,int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ,char*,int ,int,int,unsigned char const*,int,int ) ;
 int FUNC_2 (struct tty_struct*,unsigned char const*,int) ;
 scalar_t__ FUNC_3 (int) ;

int FUNC_4(struct st_data_s *VAR_3,
 const unsigned char *VAR_4, int VAR_5)
{
 struct tty_struct *VAR_6;
 if (FUNC_3(VAR_3 == ((void*)0) || VAR_3->tty == ((void*)0))) {
  FUNC_0("tty unavailable to perform write");
  return -VAR_1;
 }
 VAR_6 = VAR_3->tty;




 return VAR_6->ops->write(VAR_6, VAR_4, VAR_5);

}
