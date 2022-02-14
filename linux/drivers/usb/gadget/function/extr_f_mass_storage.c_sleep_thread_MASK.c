
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fsg_common {int io_wait; } ;
struct fsg_buffhd {int state; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static int FUNC_3(struct fsg_common *VAR_2, bool VAR_3,
  struct fsg_buffhd *VAR_4)
{
 int VAR_5;


 if (VAR_3)




  VAR_5 = FUNC_1(VAR_2->io_wait,
    VAR_4 && FUNC_0(&VAR_4->state) >=
     VAR_0);
 else
  VAR_5 = FUNC_2(VAR_2->io_wait,
    VAR_4 && FUNC_0(&VAR_4->state) >=
     VAR_0);
 return VAR_5 ? -VAR_1 : 0;
}
