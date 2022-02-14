
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fsg_lun {int sense_data; } ;
struct fsg_common {struct fsg_lun* curlun; } ;


 int VAR_0 ;
 int FUNC_0 (struct fsg_lun*) ;

__attribute__((used)) static int FUNC_1(struct fsg_common *VAR_1)
{
 struct fsg_lun *VAR_2 = VAR_1->curlun;
 int VAR_3;



 VAR_3 = FUNC_0(VAR_2);
 if (VAR_3)
  VAR_2->sense_data = VAR_0;
 return 0;
}
