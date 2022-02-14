
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fsg_common {int fsg; struct fsg_buffhd* next_buffhd_to_fill; } ;
struct fsg_buffhd {int state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct fsg_common*) ;
 int FUNC_1 (int ,struct fsg_buffhd*) ;
 int FUNC_2 (struct fsg_common*,struct fsg_buffhd*,int ) ;
 int FUNC_3 (struct fsg_common*,int,struct fsg_buffhd*) ;
 int FUNC_4 (struct fsg_common*,struct fsg_buffhd*) ;

__attribute__((used)) static int FUNC_5(struct fsg_common *VAR_3)
{
 struct fsg_buffhd *VAR_4;
 int VAR_5 = 0;


 VAR_4 = VAR_3->next_buffhd_to_fill;
 VAR_5 = FUNC_3(VAR_3, 1, VAR_4);
 if (VAR_5)
  return VAR_5;


 FUNC_2(VAR_3, VAR_4, VAR_2);
 if (!FUNC_4(VAR_3, VAR_4))

  return -VAR_1;
 VAR_5 = FUNC_3(VAR_3, 1, VAR_4);
 if (VAR_5)
  return VAR_5;

 VAR_5 = FUNC_0(VAR_3) ? FUNC_1(VAR_3->fsg, VAR_4) : -VAR_1;
 VAR_4->state = VAR_0;

 return VAR_5;
}
