
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rw_semaphore {int dummy; } ;
struct fsg_lun {int unit_attention_data; scalar_t__ prevent_medium_removal; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int FUNC_0 (struct fsg_lun*,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct rw_semaphore*) ;
 int FUNC_2 (struct fsg_lun*) ;
 scalar_t__ FUNC_3 (struct fsg_lun*) ;
 int FUNC_4 (struct fsg_lun*,char const*) ;
 int FUNC_5 (struct rw_semaphore*) ;

ssize_t FUNC_6(struct fsg_lun *VAR_3, struct rw_semaphore *VAR_4,
         const char *VAR_5, size_t VAR_6)
{
 int VAR_7 = 0;

 if (VAR_3->prevent_medium_removal && FUNC_3(VAR_3)) {
  FUNC_0(VAR_3, "eject attempt prevented\n");
  return -VAR_0;
 }


 if (VAR_6 > 0 && VAR_5[VAR_6-1] == '\n')
  ((char *) VAR_5)[VAR_6-1] = 0;


 FUNC_1(VAR_4);
 if (VAR_6 > 0 && VAR_5[0]) {

  VAR_7 = FUNC_4(VAR_3, VAR_5);
  if (VAR_7 == 0)
   VAR_3->unit_attention_data =
     VAR_2;
 } else if (FUNC_3(VAR_3)) {
  FUNC_2(VAR_3);
  VAR_3->unit_attention_data = VAR_1;
 }
 FUNC_5(VAR_4);
 return (VAR_7 < 0 ? VAR_7 : VAR_6);
}
