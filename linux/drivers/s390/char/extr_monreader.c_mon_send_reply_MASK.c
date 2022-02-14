
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mon_private {int read_index; int read_ready; int msglim_count; int path; } ;
struct mon_msg {int replied_msglim; scalar_t__ mca_offset; scalar_t__ pos; int msglim_reached; int msg; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int *,int ,int *,int ) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (char*,int) ;

__attribute__((used)) static int FUNC_4(struct mon_msg *VAR_3,
     struct mon_private *VAR_4)
{
 int VAR_5;

 VAR_5 = FUNC_1(VAR_4->path, &VAR_3->msg,
    VAR_1, ((void*)0), 0);
 FUNC_0(&VAR_4->msglim_count);
 if (FUNC_2(!VAR_3->msglim_reached)) {
  VAR_3->pos = 0;
  VAR_3->mca_offset = 0;
  VAR_4->read_index = (VAR_4->read_index + 1) %
          VAR_2;
  FUNC_0(&VAR_4->read_ready);
 } else
  VAR_3->replied_msglim = 1;
 if (VAR_5) {
  FUNC_3("Reading monitor data failed with rc=%i\n", VAR_5);
  return -VAR_0;
 }
 return 0;
}
